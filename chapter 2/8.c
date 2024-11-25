#include<stdio.h>
#include<ctype.h>
int main(){
    char c; scanf("%c",&c);
    printf("%d\n",isalnum(c));
    printf("%d\n",isalpha(c));
    printf("%d\n",isdigit(c));
    printf("%d\n",isspace(c));
    printf("%d\n",isblank(c));
}