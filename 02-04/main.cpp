#include <stdio.h>
#include <random>
#include <windows.h> 
#include <functional>


void DelayReveal(std::function<void(int, int)> fn,
	unsigned int delayMs, int roll, int userGuess) {
	Sleep(delayMs);
	fn(roll, userGuess);
};

int main() {


	int prediction = 0;
	int dice = 0;

	srand((unsigned)time(NULL));
	dice = rand() % 6 + 1;

	printf("丁半を選んでね");
	scanf_s("%d", &prediction);

	std::function<void(int, int)> ShowResult = [=](int roll, int userGuess) {

		printf("\n-出目は[%d]でした-\n", roll);

		int result = roll % 2;

		if (result == userGuess) {
			printf("正解\n");
		}
		else {
			printf("不正解\n");
		}
		};


	DelayReveal(ShowResult, 3000, dice, prediction);



	return 0;
}