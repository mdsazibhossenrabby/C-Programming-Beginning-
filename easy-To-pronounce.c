/* Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

We say that a word is hard to pronounce if it contains 
4
4 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

You are given a string 
�
S consisting of 
�
N lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.

For the purposes of this problem, the vowels are the characters 
{a,e,i,o,u} and the consonants are the other 
21
21 characters.

 */



#include <stdio.h>
#include <string.h>

int main() 
{
    int n,t,pronounce;
	
  
	scanf("%d",&t);
	
	for(int i=1;i<=t;i++){
	    
       
	    scanf("%d",&n);
	    
	    char s[n];
       
	    scanf("%s",s);

		int count=0;

	    for(int j=0;s[j]!='\0';j++){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                count=0;
                pronounce=0;
            } else{
                count++;
                if(count>=4){
                    pronounce=1;
                    break;
                }else{
                    pronounce=0;
                }
            }
        }
	   
	  if(pronounce==0){
		printf("YES\n");
	  }else if(pronounce==1){
		printf("NO\n");
	  }
	}
	
	return 0;
}
