#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i;
	int num;
	char binary[32];

	while (1)
	{
		for (i = 0; i < 32; i++)
			binary[i] = '0';
		printf("정수를하나입력하세요.>>");
		scanf("%d", &num);
		if (num == 0)
			break;
		printf("16진수: \t\t\t%X\n\n", num);
		printf("팔진수: \t\t\t%o\n\n", num);
		i = 0;
		while (num > 0)
		{
			if (num % 2 == 1)
				binary[i] = '1';
			num = num / 2;
			i++;
		}
		printf("이진수: ");
		for (i = 31; i >= 0; i--)
		{

			printf("%c", binary[i]);
			if (i % 8 == 0)
				printf(" ");
		}
		printf("\n\n");
	}

	puts("종료합니다.");
	return 0;
}