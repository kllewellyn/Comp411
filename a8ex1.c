#include <stdio.h>
#include <string.h>
main(){
int input, fibonacciResult = 0;
do{
scanf("%d", &input);
fibonacciResult = fibonacci(input);
printf("%d\n", fibonacciResult);
}while(fibonacciResult != 0);
}


 int fibonacci(int n){
   if(n == 0){
     return 0;
   }
   else if(n == 1){
     return 1;
   }
   return fibonacci(n-1) + fibonacci(n-2);

 }
