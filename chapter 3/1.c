#include<stdio.h>
int main(){
    float h;
    int w; scanf("%f %d",&h,&w);
    float BMI=w/(h*h);
    if(BMI>=18.5 && BMI<=25) printf("Healthy");
    else if(BMI<18.5) printf("Underweight");
    else printf("Overweight");
}