#include<stdio.h>
int main(){
	int t,n,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		char s[n];
		scanf("%s",s);
		for(i=0;i<n;i++){
			if(s[i]=='8') break;
		}if(n-i>=11) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
