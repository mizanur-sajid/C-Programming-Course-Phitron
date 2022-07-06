#include<stdio.h>
int main(){
int a[26];
char str[105];
	int n;
	while(scanf("%d", &n) != EOF) {
		memset(a, 0, sizeof(a));
		scanf("%s", str);
		for(int i = 0; str[i] != '\0'; i++) {
			if(str[i] <= 'z' && str[i] >= 'a') a[str[i] - 'a'] = 1;
			else if(str[i] <= 'Z' && str[i] >= 'A') a[str[i] - 'A'] = 1;
		}

		int ans = 0;
		for(int i = 0; i < 26; i++) ans += a[i];

		if(ans == 26) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
