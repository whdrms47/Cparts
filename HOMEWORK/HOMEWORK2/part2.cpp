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
		printf("[1] 비트AND(&)\n");
		printf("\n");
		printf("[2] 비트OR(|)\n");
		printf("\n");
		printf("[3] 비트XOR(^)\n");
		printf("\n");
		printf("[4] 비트COMPLEMENT(~)\n");
		printf("\n");
		printf("[0] 종료(stop)\n");
		printf("\n");
		printf("위연산중하나를선택하세요. >>");

		scanf_s("%d", &sel);
		printf("\n");

		if (sel == 1) {

			printf("비트연산할두정수입력>>");
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

			printf("비트연산할두정수입력>>");
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

			printf("비트연산할두정수입력>>");
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



			printf("비트보수(~) 연산할하나의정수입력>>");

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

				for (i = 0; i < 32; i++) {   // 1's complement 수행: 비트가1이면0으로, 0이면1로바꿈

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