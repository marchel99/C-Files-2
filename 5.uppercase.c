// fall through logic example
#include <stdio.h>
#include <ctype.h>  //toUpper, toLower
#include <string.h> //strlen

int main()
{
char s[]="abcCAS"; 
// array of chars

int length=strlen(s);
int a=0;
int pozostale=0;
 
for (int i=0;i<length;i++)
{
    switch (toupper(s[i]))
{
 case 'A':
 a++;

 case 'B':
 case 'C':
 case 'D':
 case 'E':
pozostale++;

}



}
printf("______________________________\n");
printf("Rozpoznane słowo: %s\n",s);
printf("Ilosc znakow: %d\n",length);
printf("______________________________\n");
printf("Litera A: %dszt.\nB,C,D,E: %dszt.\nNierozpoznane: %dszt.\n",a,pozostale-a,length-(pozostale-a)-a);
printf("______________________________");
    return 0;
}