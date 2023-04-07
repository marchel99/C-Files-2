#include <stdio.h>


// INDEX: 0  1  2  3  4
// VALUE: 90 92 94 96 98
int main()  
{

int grade[5];

grade[0]=90;
grade[1]=92;
grade[2]=94;
grade[3]=96;
grade[4]=98;


for (int i=0;i<5;i++){
printf("grade[%d]=%d\n",i,grade[i]); 
}


    return 0;
}