#include <stdio.h>
#include <string.h>
#define SIZE = 100;
main(){

int red, green, blue, gray;
int rows, columns, max = 0;
int i, p, loopMax;
float colors[SIZE];
scanf("%d%d%d", &columns, &rows, &max);
for(i = 0; i < rows; i++){
  for(p = 0; p < columns; p++){
  scanf("%d%d%d", &red, &green, &blue);
  gray = ((red * 30 + green * 59 + blue * 11) * 255)/ (100 * max);
  colors[i] = gray;
}
}

puts("P2\n");
for(i = 0; i <= (coluns*rows/3); i++){
  printf("%G\n", colors[i]);
}

}
