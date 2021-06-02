#include <stdio.h>  
  int main(){  
  int n = 10;  
  
 for(int i=0; i<n; i++){  
   for(int a=0; a<i; a++){  
       printf(" ");  
}  
   for(int b=1; b<=n-i; b++){  
     printf("*");  
}  
   printf("\n");  
}  
for(int i=1; i<n; i++){  
  for(int a=1; a<n-i; a++){  
    printf(" ");  
}  
  for(int b=1; b<=i+1; b++){  
    printf("*");  
}  
  printf("\n");  
}  
  return 0;  
}  	
