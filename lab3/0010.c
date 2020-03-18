#include <stdio.h>
int main()
{
   int cup1, cup2, cup3; 
   char x[51];
   int i;
   int o;
   cup1 = o;
   cup2 = 0;
   cup3 = 0;
   o = 1;
   scanf("%s", x);
    for(i=0; x[i] != '\0'; i++){
        if(x[i] == 'A'){
            if(cup1 = o){
                cup2 = o;
                cup1 = 0;
            }
            else if(cup2 = o){
                cup1 = o;
                cup2 = 0;
            }
        }
        else if(x[i] == 'B'){
            if(cup2 = o){
                cup3 = o;
                cup2 = 0;
            }
            else if(cup3 = o){
                cup2 = o;
                cup3 = 0;
            }
            
        }
        else if(x[i] == 'C'){
            if(cup1 = o){
                cup3 = o;
                cup1 = 0;
            }
            else if(cup3 = o){
                cup1 = o;
                cup3 = 0;
            }
            
        }
    }
    if(o = cup1){
        printf("1");
    }
    else if(o = cup2){
        printf("2");
    }
    else if(o = cup3){printf("3");}
    return 0;
}
