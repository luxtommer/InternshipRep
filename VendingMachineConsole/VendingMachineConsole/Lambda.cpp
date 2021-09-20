#include <iostream>
#include <vector>
#include <algorithm>

void vector()
{
	std::vector<int>vec(10);
	std::generate(begin(vec), begin(vec), []() {
		return rand() % 1001; });

	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] <<std::endl;
	}

	std::sort(begin(vec), end(vec));
}