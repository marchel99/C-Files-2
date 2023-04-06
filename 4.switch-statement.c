#include <stdio.h>

int main()
{

int a=3;

switch (a){
case 1:
printf("%d jest równy 1!\n",a);

case 2:
printf("%d jest równy 2!\n",a);
break;

case 3:
printf("%d jest równy 3!\n",a);

case 4:
printf("%d jest równy 4!\n",a);

default:
printf("%d nie pasuje do niczego!\n",a);
// fall through logic


/*
Why use switch-statement instead of if?

1.Performance: In some cases, a switch statement can be faster than an if statement because the switch statement can directly jump to the correct case. However, this performance difference is usually small and may not be noticeable in most cases.

2.Range of values: In an if statement, the condition can be any Boolean expression, which means that it can be used to test for any range of values. In a switch statement, the cases are limited to discrete values (i.e., integers, characters, or enums).

3.Readability: Depending on the context, an if statement may be more readable than a switch statement, especially if the code is complex and requires multiple conditions. However, a switch statement can be more concise and easier to read if there are many conditions to test.

In summary, an if statement is used to test a single condition,
 while a switch statement is used to test multiple conditions. 
 The choice between the two depends on the specific needs of the program, the range of values to be tested, and the context in which the code is written.
*/


}

    return 0;
}