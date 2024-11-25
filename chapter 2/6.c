#include<stdio.h>
#include<math.h>
int main(){
    long int fact8 = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8;
 long int fact4 = 1 * 2 * 3 * 4;
 long int comb84 = fact8 / (fact4*fact4);
 printf("%li %li\n", fact8, comb84);
}