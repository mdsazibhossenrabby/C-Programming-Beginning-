#include <stdio.h>

int main()
{
  int n,m,i;
  
  i=1;
  n=5;
  
  m=0;
  
  while(i<=10){
    
    m=n+m;
    
    printf("%d x %d = %d\n",n,i,m);
    
    i++;
  }
  
  
  
  return 0;
}