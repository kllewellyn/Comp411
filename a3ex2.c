* Example: analysis of text */

#include <stdio.h>
#include <string.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

main()
{
  char text[MAX], c;
  char back[MAX];
  int counter;
  int i, k;
  int lowercase, uppercase, digits, other;
  int length;

  puts("Type some text (then ENTER):");

  /* Save typed characters in text[]: */

  fgets(text, MAX, stdin);

  length = strlen(text) - 1;

  /* Analyse contents of text[]: */
counter = 0;
for(i = 0; i <= length; i++)
{
    back[i] = text[length -1-i];
}
printf("Your input in reverse is:\n");
for(k = 0; k < length; k++)
{
printf("%c", back[k]);
}
printf("\n");
for(i = 0; i < length; i++)
{
        if(text[i] != back[i]){
          counter = 1;
        break;
}
}
if(counter == 0)
printf("Found a palindrome!\n");
return 0;
}
