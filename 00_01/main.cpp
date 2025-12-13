#include <stdio.h>
#include <Windows.h>
#include <string>

int main() {
	//SetConsoleOutputCP(65001);//これをやってBOMなしで文字化けしないよ
	std::string str = "ペンギン";
	printf("%s", str.c_str());


	return 0;
}