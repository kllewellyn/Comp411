#include <stdio.h>
main()
{
int a, b, c, d, e, f;
printf("Enter six integers:\n");
scanf("%i", &a);
scanf("%i", &b);
scanf("%i", &c);
scanf("%i", &d);
scanf("%i", &e);
scanf("%i", &f);
printf("1234567890bb1234567890\n");
printf("%*i", 10, a);
printf("  %*i\n", 10, b);
printf("%*i", 10, c);
printf("  %*i\n", 10, d);
printf("%*i ", 10, e);
printf(" %*i\n", 10, f);
return;
}
