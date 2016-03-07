#include <stdio.h>
main()
{
int i;
printf("Number [1-100]: ?\n");
scanf("%d", &i);
while(i != 0){
   if (i == 1)
        printf("Non-prime (special case)\n");
   else if (i == 2)
        printf("Prime\n");
   else if (i == 3)
        printf("Prime\n");
   else if (i == 5)
        printf("Prime\n");
   else if (i==7)
        printf("Prime\n");
   else if (i % 2 == 0)
        printf("Non-prime, divisible by 2\n");
   else if(i%3 == 0)
        printf("Non-prime, divisible by 3\n");
   else if(i%5 == 0)
        printf("Non-prime, divisible by 5\n");
   else if (i%7 == 0)
        printf("Non-prime, divisible by 7\n");
   else
        printf("Prime\n");
printf("Number [1-100]: ?\n");
scanf("%d", &i);
}
printf("Done\n");
return;
}
