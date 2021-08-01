#include <iostream>
#include <math.h>

using namespace std;

int num_1002() {
	int count, x1, y1, r1, x2, y2, r2;
	double length;

	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		length = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

		if (length == 0 && r1 == r2)
			printf("-1\n");
		else if (length > (r1 + r2) || length < abs(r1 - r2))
			printf("0\n");
		else if (length == r1 + r2 || length == abs(r1 - r2))
			printf("1\n");
		else
			printf("2\n");
	}
	return 0;
}