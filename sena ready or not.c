#include <stdio.h>

int main(void) {
	int n;
	
	printf("Enter sena number : ");
	scanf("%d",&n);
	
	int weapon[n];
	
	for(int i=0;i<n;i++){
	    
	    printf("enter wepon number : ");
	    scanf("%d",&weapon[i]);
	}
	
	int ready_sena=0;
	int notready_sena=0;
	
	for(int i=0;i<n;i++){
	    
	    if(weapon[i]%2==0){
	        
	        ready_sena++;
	    } else
	     {
	     	notready_sena++;
	     }
	}
	
	if(ready_sena>notready_sena){
	    printf("READY FOR BATTLE ");
	} else{
	    printf("NOT READY");
	}
	
	return 0;
}

