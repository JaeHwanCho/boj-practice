#include <iostream>

using namespace std;

int num_5086()
{
	int a, b;
	while (1) {
		cin >> a >> b;
		if (a == 0 && b == 0)
			return 0;
		if (a > b && a % b == 0)
			cout << "multiple\n";
		else if (a < b && b % a == 0)
			cout << "factor\n";
		else
			cout << "neither\n";
	}
}