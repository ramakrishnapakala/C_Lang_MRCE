#include<stdio.h>
int main(void){
     printf("enter n value:?\n");
     int n;
     scanf("%d",&n);
     if(n == 0){
          printf("the given numbers equal to zero\n");
     }
     // even or odd
     if(n%2==0){
          printf("Even number\n");
     }else{
          printf("Odd number");
     }
}