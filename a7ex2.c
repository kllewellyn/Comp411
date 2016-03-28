#include <stdio.h>
#include <string.h>
main(){

char text;
int i, temp, currChar, result, factorial;
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

len = strlen(text);
p = len;
for(i = 0; i < len; i++){
  temp = text[i];
  if(temp == 48){
     currChar = 0;
  }
  if(temp == 49){
    currChar = 1;
  }
  if(temp == 50){
    currChar = 2;
  }
  if(temp == 51){
    currChar = 3;
  }
  if(temp == 52){
    currChar = 4;
  }
  if(temp == 53){
    currChar = 5;
  }
  if(temp == 54){
    currChar = 6;
  }
  if(temp == 55){
    currChar = 7;
  }
  if(temp == 56){
    currChar = 8;
  }
  if(temp == 57){
    currChar = 9;
  }
  num = num * 10;
  number = number + currChar;
}
  return number;
}

int factorial(int n){
  if ( n == 0){
    return 1;
  }
  return n * factorial(n-1);
}
