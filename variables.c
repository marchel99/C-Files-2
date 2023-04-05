#include <stdio.h>
#include <unistd.h>
/* 
%[flags][width][.precision]specifier
%d
%u
%f
%c
%s
%o
%x
%e
%g
*/
int main(){

int int1=10;
printf("Int: %d\n",int1);

unsigned u_int=5;
printf("Unsigned int: %d\n",u_int);

float float1=0.5;
printf("Float: %.2f\n",float1);

double double1=0.555;
printf("Double: %f\n",double1);
// f specifier for float and double

char char1='C';
printf("Char: %c",char1);
printf(",ASCII NUMBER: %d\n",char1);

char str[]="A string!\n";
printf("String: %s", str);



printf("|||%-5d|||",5);
//left flag


printf("|||%+5d|||",5);
//right flag


    return 0;
}