#include <stdio.h>  
int main() {  
  int n = 12; 
  
  int sp=n-1;  
  int st=1; 
   
  for(int i=1;i<=n;i++){  
    for(int a=1; a<=sp; a++){  
      printf(" ");  
}  
    for(int b=1; b<=st; b++)  {  
      printf("*");  
}  
    if(sp>i){  
      sp=sp-1;  
      st=st+2;  
}  
    if(sp<i){  
      sp=sp+1;  
      st=st-2;  
    }  
    printf("\n");  
  }  
  return 0;
  }  
