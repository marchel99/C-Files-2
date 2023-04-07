#include <stdio.h>
#include <string.h>

int main()  
{

char test[]="Ssa";
int length=strlen(test);
printf("Dlugosc stringa: %d\n",length);


int j=0;
for (int i=0;i<=length;i++)
{
if (test[i]=='S' || test[i]=='s')
j++;
}

printf("Liczba s: %d",j);
    return 0;
}