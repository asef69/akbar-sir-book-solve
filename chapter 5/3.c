#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//Set any value of N and check, becareful of larger as values of N as all the elements have been printed later on
#define N 10
int main()
{
    srand(time(NULL));
//    int numbers[N];
    long int *numbers=(long int*)malloc(N*sizeof(long int)); //dynamic allocation because array size is large
    long int *sorted=(long int*)malloc(N*sizeof(long int)); //dynamic allocation because array size is large
    //long int *sorted1=(long int*)malloc(N*sizeof(long int)); //dynamic allocation because array size is large

//Generating numbers
    for(long int i=0; i<N; i++)
    {
        numbers[i]=rand()%100 +1;
    }
//COunting frequencies
    int count[100];
    for(int i=0; i<100; i++)
        count[i]=0;

    for(int i=0; i<100; i++)
    {
        for(long int j=0; j<N; j++)
        {
            if(i+1==numbers[j])
                count[i]++;
        }
    }

    long int start =0,j;
    for(int i=0; i<100; i++)
    {
        if(count[i]!=0)
        {
            for(long int j=start; j<start+count[i]; j++)
            {
                sorted[j]=(i+1);
            }
            start=start+count[i];
        }
    }

   //Printing numbers array to show before and after
    for(int i=0; i<N; i++)
        printf("%li \n",numbers[i]);

//Sorting numbers array using book's algorithm
    long int s,i;

    for(s=0;s<N;s++)
    {
        int minindex=s; //Finding minimum of each iteration
        for( i=s;i<N;i++)
        {
            if(numbers[minindex]>numbers[i])
                minindex=i;
        }

        //Swapping
        long int temp = numbers[minindex];
        numbers[minindex]=numbers[s];
        numbers[s]=temp;

    }









    //Debugging and verifying sorting code worked
    for(int i=0; i<N; i++)
        printf("%li \n",numbers[i]);

    printf("\n\n");
    for(int i=0; i<N; i++)
        printf("%li \n",sorted[i]);



    free(numbers);
    free(sorted);

    return 0;
}