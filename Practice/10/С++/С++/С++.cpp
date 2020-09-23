#include "stdafx.h"
#include <iostream>
#include "Windows.h"

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int s, l1, r1, l2, r2;
	std::cin >> s >> l1 >> r1 >> l2 >> r2;
	int x = l1;
	int y = r2;
	
	if (x + y < s) {
		x = min(s - y, r1);
	} else {
		y = max(s - x, l2);
	}

	if (x + y == s) {
		std::cout << x << " " << y;
	} else {
		std::cout << -1;
	}
    	return 0;
}

