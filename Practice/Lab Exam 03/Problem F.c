#include<stdio.h>
#include<stdbool.h>
int main(){
	char str[100];
	while(scanf("%s",str)==1){
		int count=0;
		for(int i=0;str[i]!='\0';i++)
			if(str[i]=='4'||str[i]=='7')
				count++;
		bool IS=true;
		if(count==0)
			IS=false;
		while(count>0&&IS){
			if(count%10==4||count%10==7);
			else
				IS=false;
			count/=10;
		}
		if(IS)
			puts("YES");
		else
			puts("NO");
	}
	return 0;
}
