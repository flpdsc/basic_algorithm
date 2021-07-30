//연속 부분 증가수열
#include <stdio.h>

int main(void)
{
	int n, pre, now, i, max=0, cnt=1;
	scanf("%d", &n);
	scanf("%d", &pre);
	for(i=2; i<=n; i++){
		scanf("%d", &now);
		if(now>=pre){
			cnt++;
			if(cnt > max) max = cnt;
		}
		else cnt = 1;
		pre = now;
	}
	printf("%d\n", max);
	return 0;
}