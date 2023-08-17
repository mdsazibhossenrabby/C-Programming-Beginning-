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