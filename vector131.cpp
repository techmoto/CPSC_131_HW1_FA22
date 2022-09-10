#include <iostream>
#include "vector131.h"

int main()
{
	vector131 newVector;
	newVector.push_front(7);
	newVector.push_back(8);
	newVector.push_front(9);

	for (int i = 0; i < newVector.size(); i++) {
		std::cout << newVector[i] << std::endl;
	}

	return 0;
}
