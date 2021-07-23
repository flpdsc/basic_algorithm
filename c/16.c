//Anagram
//65(A)~122(z)

#include <stdio.h>
#include <stdlib.h>

int cnt[52];
int main(void)
{
	int i;
	char str[100];
	
	scanf("%s", str);
	for(i=0; str[i]!='\0'; ++i){
		if(str[i]>=65 && str[i]<=90) cnt[str[i]-65]++;
		else cnt[str[i]-71]++;
	}
	
	scanf("%s", str);
	for(i=0; str[i]!='\0'; ++i){
		if(str[i]>=65 && str[i]<=90) cnt[str[i]-65]--;
		else cnt[str[i]-71]--;
	}
	
	for(i=0; i<52; ++i){
		if(cnt[i] != 0){
			printf("NO\n");
			exit(0);
		}
	}
	printf("YES\n");
	return 0;
}