#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char password[20] = { 0 };
	printf("���������룺");
	scanf("%s", password);
	int ch = 0;
	while (ch = getchar() != '\n') {
		;
	}
	printf("���ٴ�ȷ������ Y/N��");
	int ret = getchar();
	if (ret == 'Y') {
		printf("Yes!");
	}
	else {
		printf("No!");
	}
	return 0;
}