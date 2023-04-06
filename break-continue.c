#include <stdio.h>
int main()
{
int i=0;
printf("loop start\n");
while (i<10){
 i++;
 if (i==5) 
    continue;
    printf("i: %d\n",i);
     

}
printf("loop end\n");
    return 0;
}