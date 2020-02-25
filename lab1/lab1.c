#include <stdio.h>

int main () {
int c = 11;
if(c == 10) {
  printf("^O^\n");
}else{
  printf("T_T\n");
}

 printf("%d\n", 10 == 10);
  printf("%d\n", 10 != 10);

  if(1){
    printf("1:true\n");
  }else{
    printf("1:false\n");
  }

  if(0){
    printf("0:true\n");
  }else{
    printf("0:false\n");
  }

  if(0.0){
    printf("0.0:true\n");
  }else{
    printf("0.0:false\n");
  }

  if(99){
    printf("99:true\n");
  }else{
    printf("99:false\n");
  }

  if(-1){
    printf("-1:true\n");
  }else{
    printf("-1:false\n");
  }

  if(88.88){
    printf("88.88:true\n");
  }else{
    printf("88.88:false\n");
  }

  if(NULL){
    printf("NULL:true\n");
  }else{
    printf("NULL:false\n");
  }

   int n;

  scanf("%d", &n);

  if((n%2==1 || n%10==2) && n>0 && n<100){
    printf("^O^\n");
  }

int m;

  scanf("%d", &m);

  if(m%2==1 || m%10==2){
    if(m>0){
      if(m<100){
        printf("^O^\n");
      }
    }
  }

 int p;

  scanf("%d", &p);

  if(p%2==1 || p%10==2)
  if(p>0)
  if(p<100) printf("^O^\n");
  }