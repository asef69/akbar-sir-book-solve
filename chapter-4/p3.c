#include<stdio.h>
int main(){
    int positive=0,negative=0;
    while(1){
        int x; scanf("%d",&x);
        if(x>0){
            positive++;
        }
        else if(x<0) negative++;
        else break;
    }
    printf("Positive:%d\nNegative:%d\n",positive,negative);
}