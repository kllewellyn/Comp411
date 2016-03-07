#include <stdio.h>

int fibonacci(int n){
if(n==0){return 0;} else
if (n==1) {return 1;}
else {return fibonacci(n-1)+fibonacci(n-2);}
}


main()
{
int n, output;
do
{
     printf("Enter a number:\n");
     scanf("%d", &n);
     output = fibonacci(n);
     printf("fibonacci(%d) = %d\n", n, output);
}while(n !=0);





}
