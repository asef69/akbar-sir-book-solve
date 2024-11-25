#include<stdio.h>
#include<math.h>
int main(){
    int n; scanf("%d",&n);
    double sum=0.0;
    double square=0.0;
    for(int i=0;i<n;i++){
        int x; scanf("%d",&x);
        sum+=x;
        square+=(x*x);
    }
    double mean=sum/n;
    double dev=sqrt((square/n)-(mean*mean));
    printf("%lf\n",mean);
    printf("%lf",dev);
}