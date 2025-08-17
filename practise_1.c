#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char password[20] = { 0 };
	printf("请输入密码：");
	scanf("%s", password);
	int ch = 0;
	while (ch = getchar() != '\n') {
		;
	}
	printf("请再次确认密码 Y/N：");
	int ret = getchar();
	if (ret == 'Y') {
		printf("Yes!");
	}
	else {
		printf("No!");
	}
	return 0;
}