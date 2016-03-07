include <stdio.h>

main()
{
float a, b, c, d, e, s, m, p;
printf("Enter five floating-point numbers:\n");
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);
scanf("%f", &d);
scanf("%f", &e);
s = a + b + c + d + e;
m = ( s/5);
p = (a*b*c*d*e);
printf("Sum is %.4f\n", s);
printf("Mean is %.4f\n", m);
printf("Product is %.4f\n", p);
return;
}
