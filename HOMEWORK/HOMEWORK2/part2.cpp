#include <stdio.h>

#include <stdlib.h>

#include <iostream>

#include <string>

#include <cmath>

using namespace std;

int xToBinary(unsigned int dec, char *bptr)

{

	int ix = 32;
	do
	{

		bptr[--ix] = '0' + dec % 2;

		dec /= 2;
	} while (dec);
	return  (ix);
}
int main(void)
{
	int xx, yy, zz;
	int x, y, z;
	int i, sel;
	int n;
	int bin[32];
	n = sizeof(bin) / sizeof(int);


	while (1) {
		printf("[1] ��ƮAND(&)\n");
		printf("\n");
		printf("[2] ��ƮOR(|)\n");
		printf("\n");
		printf("[3] ��ƮXOR(^)\n");
		printf("\n");
		printf("[4] ��ƮCOMPLEMENT(~)\n");
		printf("\n");
		printf("[0] ����(stop)\n");
		printf("\n");
		printf("���������ϳ��������ϼ���. >>");

		scanf_s("%d", &sel);
		printf("\n");

		if (sel == 1) {

			printf("��Ʈ�����ҵ������Է�>>");
			scanf_s("%d %d", &x, &y);


			printf("x =\t");
			xx = x;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = x % 2;
				x /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", xx);


			printf("x =\t");
			yy = y;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = y % 2;
				y /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", yy);

			printf("x & y =\t");
			z = xx & yy;
			zz = xx & yy;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = z % 2;
				z /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", zz);

		}
		else if (sel == 2) {

			printf("��Ʈ�����ҵ������Է�>>");
			scanf_s("%d %d", &x, &y);


			printf("x =\t");
			xx = x;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = x % 2;
				x /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", xx);


			printf("x =\t");
			yy = y;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = y % 2;
				y /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", yy);

			printf("x | y =\t");
			z = xx | yy;
			zz = xx | yy;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = z % 2;
				z /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", zz);

		}
		else if (sel == 3) {

			printf("��Ʈ�����ҵ������Է�>>");
			scanf_s("%d %d", &x, &y);


			printf("x =\t");
			xx = x;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = x % 2;
				x /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", xx);


			printf("x =\t");
			yy = y;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = y % 2;
				y /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", yy);

			printf("x ^ y =\t");
			z = xx ^ yy;
			zz = xx ^ yy;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = z % 2;
				z /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", zz);

		}
		else if (sel == 4) {
			int  index;
			char binary[33] = { 0 };



			printf("��Ʈ����(~) �������ϳ��������Է�>>");

			scanf_s("%d", &x, 4);

			if (x == 0)

				break;

			else {

				index = xToBinary(x, binary);
				printf("x =\t");
				xx = x;
				for (i = n - 1; i >= 0; i--) {
					bin[i] = x % 2;
					x /= 2;
				}
				for (i = 0; i < n; i++)
					printf("%d", bin[i]);
				printf("\n");
			}

			if (xx > 0) {

				for (i = 0; i < 32; i++) {   // 1's complement ����: ��Ʈ��1�̸�0����, 0�̸�1�ιٲ�

					if ((binary[i] == NULL) || (binary[i] == '0'))

						binary[i] = '1';

					else

						binary[i] = '0';

				}

				printf("~x =\t%s\t-%d \n", binary, xx + 1);


			}

		}
		else if (sel == 0) break;

		printf("\n\n");
	}

	return 0;
}