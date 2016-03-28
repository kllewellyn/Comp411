#include <stdio.h>
#include <string.h>
main(){

char text;
int i, temp, result, factorial;
int num = 0;

do {
  fgets(text, 20, stdin);
  result = a_to_i(text);
  printf("%d\n", result);
  factorial = factorial(result);
  printf("%d\n", factorial);
} while(result != 0);
}

int a_to_i(char* str){

while(text[i] != 0){
  temp = text[i];
  temp = temp - 48;
  num = num * 10;
  number = number + temp;
  i++;
}
  return number;
}

int factorial(int n){
  if ( n == 0){
    return 1;
  }
  return n * factorial(n-1);
}
