
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	double c;

	printf("다음단위에서[변환할단위] --> [변환결과단위]로연산합니다.\n");
	printf("[1] 미터(m)     [2]인치(in)     [3]피트(ft)      [4]야드(yd)     [5]종료(stop)\n");
	printf("[이전단위] --> [변환단위], 두개의메뉴번호를선택하세요. >>");
	scanf("%d %d", &a, &b);
	do {
		printf("[변환할단위]의길이를입력하세요. >> ");
		scanf("%lf", &c);
		switch (a) {
		case 1:
			switch (b) {
			case 1:
				printf("%10.2f[미터] -->%10.2f[미터]\n", c, c * 1);
				break;

			case 2:
				printf("%10.2f[미터] -->%10.2f[인치]\n", c, c * 39.370079);
				break;

			case 3:
				printf("%10.2f[미터] -->%10.2f[피트]\n", c, c * 3.28084);
				break;

			case 4:
				printf("%10.2f[미터] -->%10.2f[야드]\n", c, c * 1.093613);
				break;
			default:
				printf("종료합니다.");
				break;
			}break;
		case 2:
			switch (b) {
			case 1:
				printf("%10.2f[인치] -->%10.2f[미터]\n", c, c * 0.0254);
				break;

			case 2:
				printf("%10.2f[인치] -->%10.2f[인치]\n", c, c * 1);
				break;

			case 3:
				printf("%10.2f[인치] -->%10.2f[피트]\n", c, c * 0.083333);
				break;

			case 4:
				printf("%10.2f[인치] -->%10.2f[야드]\n", c, c * 0.027778);
				break;
			default:
				printf("종료합니다.");
				break;
			}break;
		case 3:
			switch (b) {
			case 1:
				printf("%10.2f[피트] -->%10.2f[미터]\n", c, c * 0.3048);
				break;

			case 2:
				printf("%10.2f[피트] -->%10.2f[인치]\n", c, c * 12);
				break;

			case 3:
				printf("%10.2f[피트] -->%10.2f[피트]\n", c, c * 1);
				break;

			case 4:
				printf("%10.2f[피트] -->%10.2f[야드]\n", c, c * 0.333333);
				break;
			default:
				printf("종료합니다.");
				break;
			}break;
		case 4:
			switch (b) {
			case 1:
				printf("%10.2f[야드] -->%10.2f[미터]\n", c, c * 0.9144);
				break;

			case 2:
				printf("%10.2f[야드] -->%10.2f[인치]\n", c, c * 36);
				break;

			case 3:
				printf("%10.2f[야드] -->%10.2f[피트]\n", c, c * 3);
				break;

			case 4:
				printf("%10.2f[야드] -->%10.2f[야드]\n", c, c * 1);
				break;
			default:
				printf("종료합니다.");
				break;
			}break;
		default:
			printf("종료");
		}
	} while (c != 0);
	puts("종료합니다.");


	return 0;

}
