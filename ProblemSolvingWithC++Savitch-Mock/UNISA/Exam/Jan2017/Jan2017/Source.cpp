#include <iostream>
#include <vector>
using namespace std;

int cube(int x);

int main() {
	cout << "Q1.1" << endl;

	for (int i = 5; i > 0; i--) {
		for (int j = 0; j < 1; j++) {
			cout << '*';
		}
		cout << endl;
	}

	cout << "Q2.2" << endl;

	cout<<cube(2)<<endl;

	cout << "Q4.2" << endl;
	vector<int> v(10);
	int i;

	for (i = 0; i < v.size(); i++) {
		v[i] << " ";

	}
}

int cube(int x) {
	return x*x*x;
}