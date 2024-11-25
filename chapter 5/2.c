#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define N 100000000
int main()
{
    srand(time(NULL));
//    int numbers[N];
    int *numbers=(int*)malloc(N*sizeof(int)); //dynamic allocation because array size is large


    for(long int i=0;i<N;i++)
    {
        numbers[i]=rand()%100 +1;
    }

    int count[100];
    for(int i=0;i<100;i++)
        count[i]=0;

    for(int i=0;i<100;i++)
    {
        for(long int j=0;j<N;j++)
        {
            if(i+1==numbers[j])
                count[i]++;
        }
    }


   int maxcount=count[0],mincount=count[0];

    for(int i=1;i<100;i++)
    {
        if(maxcount<count[i])
            maxcount=count[i];

        if(mincount>count[i])
            mincount=count[i];
    }

    for(int i=0;i<100;i++)
    {
        if(count[i]==maxcount)
            printf("%d occurs a maximum of %d times\n",i+1,count[i]);
         if(count[i]==mincount)
            printf("%d occurs a minimum of %d times\n",i+1,count[i]);

    }

    free(numbers);

    return 0;
}