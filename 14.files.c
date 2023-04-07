#include <stdio.h>


int main()  
{
 FILE *fh_output;
 fh_output=fopen("io.txt","w");

fputs("abc\n", fh_output);
fputs("123\n", fh_output);


fputs("A string\n", fh_output);

 fclose(fh_output);



    return 0;
}