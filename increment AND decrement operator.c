#include <stdio.h>

int main()
{
  
  int x,y;
  
  printf("Enter the value of x : ");
  scanf("%d",&x);
  
  printf("Enter the value of y : ");
  scanf("%d",&y);
  
  ++x;
  y++;
  
  printf("Print the value of ++x : %d\n",x);
  printf("Print the value of y++ : %d\n",y);
  printf("Print the value of ++x twice : %d\n",x);
  printf("Print the value of y++ twice : %d\n",y);
  
  int m,n;
  
  printf("Enter the value of m : ");
  scanf("%d",&m);
  
  printf("Enter the value of n : ");
  scanf("%d",&n);
  
  
  printf("Print the value of ++m : %d\n",++m);
  printf("Print the value of n++ : %d\n",n++);
  printf("Print the value of ++m twice : %d\n",++m);
  printf("Print the value of n++ twice : %d\n",n++);
  
 
  
  
  
  return 0;
}