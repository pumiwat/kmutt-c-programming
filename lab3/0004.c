#include <stdio.h>

int main () {
  char cipher[10002];
  int i;
  int l = 0;
  int s = 0;
  scanf("%s", cipher);
  for(i=0; cipher[i] != '\0'; i++){
    if(cipher[i] >= 'A' && cipher[i] <= 'Z') {
        l = 1;
      }
      else if(cipher[i] >= 'a' && cipher[i] <= 'z'){
        s = 1;
      }
}  
  if(l == 1 && s == 0){
      printf("All Capital Letter");
  }
  else if(l == 0 && s == 1){printf("All Small Letter");
  }
  else{
      printf("mix");
  }
  return 0;
}