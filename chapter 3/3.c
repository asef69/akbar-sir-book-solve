#include<stdio.h>
int main(){
    int a,b,c; scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d\n",a);
        if(b>c) printf("%d",b);
        else printf("%d",c);
    }
    else if(b>c){
        printf("%d\n",b);
        if(a>c) printf("%d",a);
        else printf("%d",c);
    }
    else{
        printf("%d\n",c);
        if(b>a) printf("%d",b);
        else printf("%d",a);
    }
}