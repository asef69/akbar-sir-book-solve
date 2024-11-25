#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    double sum=0;
    int num,one=0,two=0,three=0,four=0,five=0,six=0,n=1000000000;
    srand(time(NULL));

    clock_t start=clock();
    for(int i=0; i<n; i++)
    {
        num = rand()%6 +1;
        switch(num)
        {
        case 1:
            one++;
            break;
        case 2:
            two++;
            break;
        case 3:
            three++;
            break;
        case 4:
            four++;
            break;
        case 5:
            five++;
            break;
        case 6:
            six++;
            break;

        }

        sum+=num;

    }
    clock_t end=clock();
    double timediff = end - start;

    printf("Average is %lf\n",sum/n);
    printf("The frequencies are:\nOne: %d\nTwo: %d\nThree: %d\nFour: %d\nFive: %d\nSix: %d\n",one,two,three,four,five,six);
    printf("Time required: %lf",timediff/CLOCKS_PER_SEC);
    return 0;
}
