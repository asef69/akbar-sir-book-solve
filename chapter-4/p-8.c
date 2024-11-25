#include<stdio.h>

int main()
{
    /*******PART 1********/
//    int n,sum,fibo0=0,fibo1=1;
//    printf("Enter the value of n: ");
//    scanf("%d",&n);
//
//    if(n==0) printf("1st Fibonacci number is 0\n");
//    else if(n==1) printf("2nd Fibonacci number is 1\n");
//    else
//    {
//        for(int i=2;i<=n;i++)
//        {
//            sum= fibo0+fibo1;
//            fibo0=fibo1;
//            fibo1=sum;
//        }
//         printf("%dth Fibonacci number is %d",n,fibo0);
//    }


    /*******PART 2********/

    int p,q,sum,fibo0=0,fibo1=1;
    printf("Enter the lower and upper bound: ");
    scanf("%d%d",&p,&q);

//    if(p==0 && q==1) printf("No numbers between 0 and 1\n");
//    else if(p==0&&q==2) printf("1\n");
    if(p==0)
    {
        for(int i=0; fibo1<q; i++)
        {
            sum= fibo0+fibo1;
            fibo0=fibo1;
            fibo1=sum;

            if(fibo0>p && fibo0<q)printf("%d ",fibo0);
        }

    }
    else
    {
        for(int i=0; fibo1<q; i++)
        {
            sum= fibo0+fibo1;
            fibo0=fibo1;
            fibo1=sum;

            if(fibo0>p && fibo0<q)printf("%d ",fibo0);
        }


    }


}
