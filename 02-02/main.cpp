#include <iostream>
#include <Windows.h>

void Salary(int total, int money, int normalTotal,int time) {

	total += money;
	normalTotal += 1226;
	time++;
	printf("Time:%d  |NormlTotal: %d | Total:%d Salary:%d\n",time,normalTotal, total, money);
	money = money * 2 - 50;

	if (money < 1000000) {
		Salary(total, money, normalTotal, time);
	}
}



int main() {

	Salary(0, 100,0,0);


	return 0;
}