#include<stdio.h>
#include<stdlib.h>
int main(){
    int *A=(int *)malloc(5*sizeof(int));
    int *B=(int *)malloc(5*sizeof(int));
    int i=0;
    while(i<5){
        scanf("%d %d",(A+i),(B+i));
        i++;
    }
    int *C=(int *)malloc(10*sizeof(int));
    int j=0;
    while(j<5){
       C[j]=*(A+j);
       C[j+5]=*(B+j);
       j++;
    }
    for(int i=0;i<10;i++){
        printf("%d ",*(C+i));
    }
    free(A);
    free(B);
    return 0;

}

