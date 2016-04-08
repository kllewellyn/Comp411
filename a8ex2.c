#include <stdio.h>
#include <string.h>
void bedtimestory(char words[20][15],
  int current, int number) {
    char temp[15], temp1[15];
if(current > number){
  return;
} else if(current == 0){
  printf("A %s couldn't sleep, so her mother told a story about a little %s\n", words[current], words[current+1);
 bedtimestory(words, current+1, number);
  printf("... and then the %s fell asleep", words[current]);
}else if(current < number-1){
  printf("who couldn't sleep, so the %s's mother told a story about a little %s\n", words[current], words[current+1]);
  bedtimestory(words, current+1, number);
  printf(" ... and then the little %s fell asleep", words[current]);
}else{
  printf("... who fell asleep.", words[current]);
}
return;
}

main(){
  char names[20][15];
  char temp[15];
  int i, num, cur;
num = 0;
do{
  fgets(names[num], 15, stdin);
  strcpy(temp,names[num]);
  strtok(temp, "\n");
  strtok(names[num], "\n");
  num++;
}while(strcmp(temp, "END\n") != 0);
cur = 0;
num = num - 1;
bedtimestory(names, cur, num);

}
