#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <math.h>


struct ThreadData
{
	int ID;
	int *Mat;
	int From;
    int To;
};


void *pfunc (void *);
void mInit();
void ReadMat (int *, int *);
void ShowMat(int *, int);

int *arr;
unsigned long int total_sum = 0;


int main(int argc, char **argv)
{
	// n = matrix size, p = num of threads i will use
	int n,p;	
	
    struct ThreadData *Data;
    pthread_t *thr;
    
    // initialize the matrix file - uncomment this to change the values
    //mInit();

	// read from file
    ReadMat(&n, &p);
    
    // print matrix
	//ShowMat(arr, n);
	
    // malloc
	thr = malloc (p * sizeof(pthread_t));		
	Data = malloc (p * sizeof(struct ThreadData));
	
    //thread creations
    int i;
	for (i = 0; i < p; i++)
	{ 
        Data[i].ID = i + 1;
        Data[i].Mat = arr;
        Data[i].From = i*(n/p);
        Data[i].To = Data[i].From + n/p - 1;
		pthread_create(&thr[i], NULL, pfunc, &Data[i]);
	}
	
	for (i = 0; i < p; i++)
            pthread_join (thr[i], NULL);        

	printf("Total sum: %d\n", total_sum);
	return 0;
}


void *pfunc (void *p)
{
    clock_t T1, T2;
    long T;
    
    struct ThreadData *t;
    t = (struct ThreadData *) p;
    int local_sum = 0;
    
    T1 = clock ();
    
    int i;
    for (i = t->From; i <= t->To; i++)
    {
            local_sum += t->Mat[i] * t->Mat[i];
    }
    
    total_sum += local_sum;
    
    T2 = clock ();
    T = (long) (T2 - T1);
    
    printf("Thread with ID:%d, time: %d, sum: %d\n", t->ID, T, local_sum);
}


void ReadMat (int *n, int *p)
{
        int t1,t2;
    
        FILE *fp;
        fp = fopen("matrix1.txt", "r");
        if (fp == NULL)
        {
            printf("Cannot open file");
            exit(1);
        }
        
        fscanf(fp, "%d", &t1);
        fscanf(fp, "%d", &t2);
        *n = t1;
        *p = t2;
        
       	arr = (int *) malloc (*n * sizeof(int));

        int i;
        for (i = 0; i < *n; i++)
        {
            fscanf(fp, "%d", &arr[i]);
        }
        
        fclose(fp);
        
}


// gia debug
void ShowMat (int *arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d\n", arr[i]);
}


void mInit()
{
    int n = 1000;
    int p = 4;
    
    FILE *fp;
    fp = fopen("matrix1.txt", "w+");
    if (fp == NULL)
    {
        printf("Cannot write to file");
        exit(1);
    }
    
    // n = matrix size
    fprintf(fp, "%d", n);
    fprintf(fp, "\n");
    
    // p = num of threads 
    fprintf(fp, "%d", p);
    fprintf(fp, "\n");
    
    // matrix values
    srand(time(0));
    int i;
    for (i = 0; i < n; i++)
    {
        fprintf(fp, "%d", rand() % 100 + 1);    // rand() % (high - low + 1) + low;
        fprintf(fp, "\n");
    }
    fclose(fp);
}
