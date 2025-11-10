#include <stdio.h>
#include <random>
#include <windows.h> 
#include <functional>


void DelayReveal(std::function<void()> fn,
	unsigned int delayMs) {
	Sleep(delayMs);
	fn();
};

int main() {


	int prediction = 0;
	int dice = 0;

	srand((unsigned)time(NULL));
	dice = rand() % 6 + 1;

	printf("丁半を選んでね");
	scanf_s("%d", &prediction);

	std::function<void()> ShowResult = [=]() {

		printf("\n-出目は[%d]でした-\n", dice);

		int result = dice % 2;

		if (result == prediction) {
			printf("正解\n");
		}
		else {
			printf("不正解\n");
		}
		};


	DelayReveal(ShowResult, 3000);



	return 0;
}