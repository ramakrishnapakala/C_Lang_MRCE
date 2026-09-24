#include<stdio.h>
int main(void){
     /*
     // type conversion
     int a = 10;
     float f = a;
     printf("%d\t%f\n",a,f);
     // 2.
     float x = 10.2f;
     double y = x;
     printf("%f\t%lf\n",x,y);
     // 3.
     char p = 1;
     double q = p;
     printf("%d\t%lf\n",p,q);
     // 4.
     int i = 65;
     char ch = i;
     printf("%d %c\n",i,ch);
     char ch2 = i+1;
     printf("%c\n",ch2);
*/
// type casting one type to another manual 
double a = 100.5;
int b =(int) a;
printf("%d\n",b);
// important 
char ch = 'A';
int c = (int) ch;
printf("%c\t%d\n",ch,c);
int x=10;
int y = 7;
float z = x/y;
printf("%f\n",z);

}