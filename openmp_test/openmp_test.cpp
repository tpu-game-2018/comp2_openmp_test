// 課題 : forループを並列化してください。
//

#include "stdafx.h"
#include <stdlib.h>

int main()
{
	int a[100], b[100], c[100], i;

    #pragma omp parallel for
	for (i = 0; i < 100; i++) {
		a[i] = i;
		b[i] = 1;
		c[i] = a[i] + b[i];
	}

	for (i = 0; i < 100; i++)
	{
		printf("%d\n", c[i]);
	}

	system("pause"); // すぐには閉じないようにするｓ

	return 0;
}