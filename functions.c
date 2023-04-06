#include <stdio.h>


int print_int(int a, int b);
int print_int_add(int a, int b);
void print_line(int a);

int main()
{



print_int(2,5);
print_line(4);
print_int_add(2,5);



    return 0;
}

int print_int(int a, int b)
{
printf("Int1:%d\nInt2:%d\n",a,b);
}

int print_int_add(int a, int b)
{
printf("Int1:%d | Address:%d\nInt2:%d | Address:%d",a,&a,b,&b);
}

void print_line(int a)
{
    for(int i=0;i<a;i++){
    printf("_");
    }printf("\n");
}