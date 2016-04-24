#include <stdio.h>
#include <string.h>
void quicksort(int sort[100], int f, int l){
  int pivot, temp, temp2, pivotLoc;
  int front, last;

if(f < l){
  pivot = sort[f];
  pivotLoc = f;
  front = f;
  last = l;
while(front < last){
  while((sort[front] <= pivot) && (front < l)){
    front++;
  }
  while(sort[last] > pivot){
    last--;
  }
  if(front < last){
      temp2 = sort[front];
      sort[front] = sort[last];
      sort[last] = temp2;
  }
}
temp = sort[pivotLoc];
sort[pivotLoc] = sort[last];
sort[last] = temp;

quicksort(sort, f, last - 1 );
quicksort(sort, last+1, l);
}
}
main(){
  int size, i;
  int needSorted[100];
scanf("%d", &size);

for(i = 0; i < size; i++){
  scanf("%d", &needSorted[i]);
}

quicksort(needSorted, 0, size-1);

for(i = 0; i < size; i++){
  printf("%d\n", needSorted[i]);
}

return;
}
