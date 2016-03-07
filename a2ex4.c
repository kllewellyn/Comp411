include <stdio.h>
main()
{
int a, b, c, d, e, f;
printf("Enter six integers:\n");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
scanf("%d", &d);
scanf("%d", &e);
scanf("%d", &f);
printf("1234567890bb1234567890\n");
printf("%*d", 10, a);
printf("  %*d\n", 10, b);
printf("%*d", 10, c);
printf("  %*d\n", 10, d);
printf("%*d ", 10, e);
printf(" %*d\n", 10, f);
return;
}
