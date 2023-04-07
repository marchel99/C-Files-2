#include <stdio.h>
// INDEX: 0  1  2  3  4
// VALUE: 90 92 94 96 98
int main()  
{

int grade[ ]={90,92,94,96,98,100};
int total=0;
for (int i=0;i<=5;i++){
printf("grade[%d]=%d\n",i,grade[i]); 
total=total+grade[i];


}
int average=total/5;
printf("Total:%d\n",total);
printf("Średnia:%d\n",average);
    return 0;
}