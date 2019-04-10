#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
	int n;     /* 正方形的邊長 */
	int i, j, k, m; // 四個計時器 
	printf("輸入正方形的邊長 -> ");
	scanf("%d", &n);

	/* 你的程式從這裡開始  */
	m = n;
	for (k = 1; k <= m; k++) {
		for (j = n; j < m; j++)//印出空白 
			printf(" ");
		for (i = 1; i <= n; i++)//印出星星 
			printf("*");
		printf("\n");
		n--;
	}

	system("pause");
	return 0;
}
