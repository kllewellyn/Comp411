#include <stdio.h>
main()
{
int i;
int p = 1;
printf("Please enter a number from 1 to 5:\n");
scanf("%i", &i);
if(0 <= i && i <= 5){
do{
printf("%i Hello World\n", p);
p++;
}while(p <= i);
}
else
 printf("Number is not in the range from 1 to 5\n");
return;
}
