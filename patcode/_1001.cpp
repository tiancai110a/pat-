// patcode.cpp: 定义控制台应用程序的入口点。
//


#include <stdio.h>
#include <iostream>

int main()
{
	//freopen("./test.txt", "r", stdin);
	int  n=0;
	int cnt =0 ;
	scanf("%d", &n);
	while (n != 1) {
		if (n % 2 == 0) {
			n /= 2;
		}
		else
			n = (n * 3 + 1)/2;
		cnt++;
	}
	printf("%d",cnt);
    return 0;
}

