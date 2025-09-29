#include <iostream>
#include <Windows.h>

int main() {
	//SetConsoleOutputCP(65001);//これをやってもBOMなしで文字化けしないよ
	char str[] = "ペンギン";
	printf("%s", str);


	return 0;
}