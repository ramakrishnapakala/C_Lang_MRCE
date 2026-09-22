#include<stdio.h>
int main(void){
     /*
    
    int a,b;
    printf("Enter a and b value:");
    scanf("%d %d",&a,&b);
    printf("Add : %d\n",a+b);
    printf("sub : %d\n",a-b);
    printf("multiple : %d\n",a*b);
    printf("division : %d\n",a/b);
    printf("reminder : %d\n",a%b);
    */
//    relational operators
   printf("%d\n",5 > 2);
   printf("%d\n",5 < 2);
   printf("%d\n",2 < 2);
   printf("%d\n",2 <= 2);
   printf("%d\n",2 != 2);
   printf("%d\n",2 != 3);
   printf("%d\n",2 == 2);
//    logical operators
int age = 19;
printf("%d\n",age > 18 && age < 60);
printf("%d\n",0 < 5 && 5 > 0);
printf("%d\n",5 > 5 && 5 > 10);
printf("%d\n",5 > 5 || 5 > 10);
// increment and decrement 
int a = 2;
++a;
printf("%d",a);
a++;
printf("%d",a);
a += 5;
printf("%d\n",a);
a -= 5;
printf("%d\n",a);


}