#include <stdio.h>

#define DLUGOSC_LINII 30

void print_int(int a, int b);
void print_int_add(int a, int b);
void print_line(char b,int a);

int main()
{
print_line('_',DLUGOSC_LINII);
print_int(2,5);
print_line('_',DLUGOSC_LINII);
print_int_add(2,5);
print_line('_',DLUGOSC_LINII);

    return 0;
}

void print_int(int a, int b)
{
printf("Int1:%d\nInt2:%d\n",a,b);
}

void print_int_add(int a, int b)
{
printf("Int1:%d | Address:%d\nInt2:%d | Address:%d\n",a,&a,b,&b);
}

void print_line(char b,int a)
{
    for(int i=0;i<a;i++){
    printf("%c",b);
    }printf("\n");
}