#include <iostream>
#include <Windows.h>
#include <list>
#include <vector>

using namespace std;

int main() {

	const int stationIndex = 30;

	list<const char*> stationName= {
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno",
		"Uguisudani", "Nippori","Tabata","Komagome","Sugamo",
		"Otuka", "Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo",
		"Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu",
		"Meguro","Gotanda","Osaki","Shinagawa","Tamachi",
		"Hamamatucho","Shimbashi","Yurakucho"};

	int forNumber = 1;
	printf("1970Year\n");
	for (auto s : stationName) {
		if (forNumber < 10) {
			printf("0%d:%s\n", forNumber, s);
			forNumber++;
		}
		else {
			printf("%d:%s\n", forNumber, s);
			forNumber++;
		}
	}
	printf("\n");

	for (list<const char*>::iterator itr = stationName.begin(); itr != stationName.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = stationName.insert(itr, "Nishi-Nippori");
			break;
		}
	}
	forNumber = 1;
	printf("2019Year\n");
	for (auto s : stationName) {
		if (forNumber < 10) {
			printf("0%d:%s\n", forNumber, s);
			forNumber++;
		}
		else {
			printf("%d:%s\n", forNumber, s);
			forNumber++;
		}
	}
	printf("\n");

	for (list<const char*>::iterator itr = stationName.begin(); itr != stationName.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = stationName.insert(itr, "TakanawaGateway");
			break;
		}
	}
	forNumber = 1;
	printf("2022Year\n");
	for (auto s : stationName) {
		if (forNumber < 10) {
			printf("0%d:%s\n", forNumber, s);
			forNumber++;
		}
		else {
			printf("%d:%s\n", forNumber, s);
			forNumber++;
		}
	}
	printf("\n");

	return 0;
}