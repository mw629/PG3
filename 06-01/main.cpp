#include <stdio.h>
#include <thread>


void Work(int i) {
	printf("thread %d\n", i);
}

int main() {
	std::thread a(Work, 1);
	a.join();
	std::thread b(Work, 2);
	b.join();
	std::thread c(Work, 3);
	c.join();
	

	return 0;
}