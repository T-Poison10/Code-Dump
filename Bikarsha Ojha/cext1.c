#include<stdio.h>
#define baun  "Hello World \n"
int main(){
printf(baun);
//2
printf("Qn2 OUTPUT:\n");
int a = 11;
printf("a=%d\n",a);
printf("a=%o\n",a);
printf("a=%x\n",a);
//3
printf("Qn3 OUTPUT:\n");
char ch;
printf("Enter a character: ");
scanf("%c",&ch);
printf("%d\n",ch);
//4
printf("Qn4 OUTPUT:\n");
float b = 123.1265;
printf("%f\t",b);
printf("%.2f\t",b);
printf("%.3f\n",b);
//5
printf("Qn5 OUTPUT:\n");
int x = 625 , y = 2394, z = 12345;
printf("%5d, %5d, %5d\n",x,y,z);
printf("%2d,%3d,%4d\n",x,y,z);
//6
printf("Qn6 OUTPUT:\n");
int a1 = 98;
char chh = 'c';
printf("%c, %d\n",a1,chh);
//7
printf("Qn7 OUTPUT:\n");
float a11,a12,a13,b11,b12,b13;
a11 = 2;
b11 = 6.8;
a12 = 4.2;
b12 = 3.57;
a13 = 9.82;
b13 = 85.673;
printf("%3.1f,%4.2f\n",a11,b11);
printf("%5.1f,%6.2f\n",a12,b12);
printf("%7.1f,%8.2f\n",a13,b13);
//8
printf("Qn8 OUTPUT:\n");
printf("%10s\n","Nepal");
printf("%.2s\n","Nepal");
printf("%5.2s\n","Nepal");
printf("%4s\n","Nepal");
return 0;
}