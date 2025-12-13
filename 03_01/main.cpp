#include <stdio.h>
#include "Enemy.h"

int main() {

	Enemy enemy;

	while (true)
	{
		enemy.Updata();

		if (enemy.IsFinish()) {
			break;
		}
	}


	return 0;
}