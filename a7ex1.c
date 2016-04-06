#include <stdio.h>
#include <string.h>
main(){

char text[22];
int i, temp, result, factorial = 0;
int num = 0;
do{
  fgets(text, 21, stdin);
  result = a_to_i(text);
  printf("%d\n", result);
}
while(result != 0);
}

int a_to_i(char* str){
int temp, num, i = 0;
while(str[i] != 10){
  temp = str[i];
  temp = temp - 48;
  num = num * 10;
  num = num + temp;
  i++;
}
  return num;
}
