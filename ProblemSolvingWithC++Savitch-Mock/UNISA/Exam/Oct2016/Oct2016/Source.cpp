#include <iostream>
using namespace std;

void Q1point1(int x, int y);

int main() {
	Q1point1(15, 10);
}

void Q1point1(int x, int y) {
	cout << "Q1.1a" << endl;
	int res = x >= y - x;

	cout << res << endl;
}