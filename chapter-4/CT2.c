#include<stdio.h>

int main(){
    int x,n;
    float sum=0.5;
    scanf("%d %d",&x,&n);

    for(int i=1;i<n;i++){
        float term=1.0;
        for(int j=1;j<=(2*i);j++){
            term*=(float)x;
            
        }
        for(int j=1;j<=(2*(i+1));j++){
            term/=(float)j;
            
        }
        
        if(i%2) term*=-1;
        sum+=term;
        
    }
    printf("sum =%f",sum);
}