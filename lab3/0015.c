#include <stdio.h>
int main(){
    int a, b, c;
    int ans1, ans2, ansf;
    scanf("%d%d%d", &a, &b, &c);
    ans1 = (b - a)-1;
    ans2 = (c - b)-1;
    if(ans1>ans2){ansf=ans1;}else{ansf=ans2;};
    printf("%d",ansf);
return 0;
}
