#include <stdio.h>
int main(){
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);

  if(n%5 == 0 && n%12 == 0){
    printf("%d", 3*n);
  }
  else if(n%5 == 0){
    printf("%d", 2*n);
  }
  else if(n%12 == 0){
    printf("%d", 4*n);
  }
  else{
    printf("%d", n);
  }

  return 0;
}
