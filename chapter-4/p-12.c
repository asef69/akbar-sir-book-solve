#include<stdio.h>

int main()
{
    int n,C=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(int j=0;j<=i;j++)
        {
            if(i==0 || j==0)
                C=1;
            else
            {
                C=C*(i-j+1)/j;

            }
             printf("%d   ",C);

        }
        printf("\n");
    }



}
