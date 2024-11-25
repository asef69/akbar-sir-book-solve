#include<stdio.h>
#include<math.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    //solving a
    float a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("%f\n",a);
    //solving d
    scanf("%d %d",&x3,&y3);
    float area=x1*(y2-y3)-y1*(x1-x3)+(x2*y3-x3*y2);
    printf("%f\n",0.5*area);
    //solving c
    int degree; 
    scanf("%d",&degree);
    float b=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    float area1=0.5*a*b*sin(degree*3.1416/180);
    printf("%f",area1);
    //solving b
    int e,f,g;
    scanf("%d %d %d",&e,&f,&g);
    float half=(e+f+g)/3;
    float area2=sqrt(half*(half-e)*(half-f)*(half-g));
    printf("%f",area2);
    //solving e
    int ln,r;
    scanf("%d %d",&ln,&r);
    float area3=2*3.1416*r*(r+ln);
    printf("%f",area3);
}