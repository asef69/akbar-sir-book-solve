#include<stdio.h>
#include<stdlib.h>
int main(){
    int **s=(int **)malloc(3*sizeof(int *));
    for(int i=0;i<3;i++){
        *(s+i)=(int *)malloc(3*sizeof(int));
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",(*s+i)+j);
        }
    }
    int symmetric=1,flag=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(*(*(s+i)+j)!=*(*(s+j)+i))
            {
                symmetric=0;
                break;
            }
            else{
                symmetric=1;
            }
        }
    }
    if(symmetric){
        printf("symmetric matrix");
    }
    else{
            int **t=(int **)malloc(3*sizeof(int *));
    for(int i=0;i<3;i++){
        *(t+i)=(int *)malloc(3*sizeof(int));
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            *(*(t+i)+j)=*(*(s+j)+i);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",*(*(t+i)+j));
        }
        printf("\n");
    }
    free(t);
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                if(*(*(s+i)+j)==1) flag++;
            }
        }
    }
    if(flag==3){
        printf("identity matrix");
    }
    else{
        printf("non-identity matrix");
    }
free(s);

}
