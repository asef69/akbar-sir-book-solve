#include<stdio.h>

int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    //Pattern 1
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n\n");
    //Pattern 2

   for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf("  ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n\n\n");

     //Pattern 3
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf("  ");
        }
        for(int j=1; j<=2*i-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

     printf("\n\n\n");

    //Pattern 4
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n\n");


    //Pattern 5
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
           {
              printf("* ");
           }
           printf("\n");
    }
    for(int i=1;i<=n-1;i++)
    {
       for(int j=1;j<=i;j++)
        {
            printf("  ");
        }
    for(int j=1;j<=n-i;j++)
        {
            printf("* ");
        }

        printf("\n");
    }
     printf("\n\n\n");

    //Pattern 6

    for(int i=1; i<=n; i++) //upper pyramid
    {
        for(int j=1; j<=n-i; j++)
        {
            printf("  ");
        }
        for(int j=1; j<=2*i-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1; i<=n-1; i++)
    {
        for(int j=1; j<=i; j++)  //spaces of lower pyramid
        {
            printf("  ");
        }
        for(int j=1; j<=(2*(n-1)-(2*i-1)); j++) //characters of lower pyramid
        {
            printf("* ");
        }
        printf("\n");
    }





    return 0;
}
