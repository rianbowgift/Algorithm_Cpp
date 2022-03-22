#include<iostream>
using namespace std;

int BJ_17256() {
	int a_x, a_y, a_z;
	int b_x, b_y=1, b_z;
	int c_x, c_y, c_z;
	cin >> a_x >> a_y >> a_z >> c_x >> c_y >> c_z;

	b_x = abs(c_x - a_z);
	while (true) {
		if (c_y == (b_y * a_y)) {
			break;
		}
		b_y++;
	}
	b_z = abs(c_z - a_x);

	cout << b_x << " " << b_y << " " << b_z;

	return 0;
}