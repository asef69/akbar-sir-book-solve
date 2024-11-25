#include<stdio.h>
#include<stdlib.h>
int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=rand();
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    int max=a[0];
    int mini=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<mini) mini=a[i];
    }
    printf("%d %d",max,mini);

}