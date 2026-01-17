#include <stdio.h>
#include <thread>
#include <string>
#include <fstream>

void Load(int data[2][2], const std::string& filePath) {

	std::ifstream file(filePath);
	if (file.is_open()) {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				file >> data[i][j];
			}
		}
		file.close();
	}
}

int main() {
	int data[2][2] = { {0,0} ,{0,0} };
	std::string filePath = "mapData.txt";

	std::thread thread(Load, data, std::ref(filePath));

	while (!thread.joinable() == false) {
		printf(".");
		if (thread.joinable()) {
			thread.join();
			break;
		}
	}

	printf("\n\nMap:\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (data[i][j] == 0) {
				printf("a");
			}
			if (data[i][j] == 1) {
				printf("b");
			}
		}
		printf("\n");
	}

	return 0;
}