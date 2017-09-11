#include <iostream>
#include <vector>
using namespace std;

int cube(int x);
void Q1point1();
void Q4point2();
int frequency(int[], int, int);

int main() {
	cout << "Q1.1" << endl;
	Q1point1();

	cout << "Q2.2" << endl;

	cout<<cube(2)<<endl;

	cout << "Q2.3" << endl;
	int a[] = { 10,30,10,50,40,90,80,30,40,10 };
	frequency(a, 10, 8);

	cout << "Q4.2" << endl;

	//Q4point2();

}

void Q1point1() {
	for (int i = 5; i > 0; i--) {
		for (int j = 0; j < 1; j++) {
			cout << '*';
		}
		cout << endl;
	}
}

int cube(int x) {
	return x*x*x;
}

int frequency(int[], int, int) {
	int count{ 0 };

	//for(int i=0;i<)

	return count;
}

void Q4point2() {
	vector<int> v(10);
	int i;

	for (i = 0; i < v.size(); i++) {
		//v[i] << " "; //illegal

	}
}
