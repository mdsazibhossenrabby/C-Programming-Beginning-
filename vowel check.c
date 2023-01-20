#include <stdio.h> 

int main()
{
  char ch;
  
  printf("Enter a alphabate :");
  scanf("%c",&ch);
  
  if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
     
     printf("%c thi is a vowel",ch);
    
  }
  
  else{
    printf("%c this is a consonant",ch);
  }
  
  return 0;
  
}
