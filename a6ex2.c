#include <stdio.h>
#include <string.h>
main(){

int pixel, x1, x2, y1, y2;
int rows, columns, max;
int i, p;



scanf("%d%d%d%d%d%d%d", &x1, &x2, &y1, &y2, &columns, &rows, &max);
puts("P2\n");
printf("%d", columns);
printf("%d", rows);
printf("max");
for(i = 0; i < rows; i++){}
    for(p = 0; p < columns; p++){
      if(i >= x1 && i <= x2 && p >= y1 && p <= y2){
        scanf("%d", &pixel);
        printf("%d\n", pixel);
      }
    }
  }

}
}
