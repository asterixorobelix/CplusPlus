/*
Chapter 1, page 135, programming project 1

Sample Output:
Enter your taget weight:
34
You are allowed 13 cans of diet soda, for a weight of 34 kg
Enter X to exit, anything else to repeat
e
Enter your taget weight:
69
You are allowed 28 cans of diet soda, for a weight of 69 kg
Enter X to exit, anything else to repeat
d
Enter your taget weight:
99
You are allowed 40 cans of diet soda, for a weight of 99 kg
Enter X to exit, anything else to repeat
*/
#include <iostream>
#include <string>
using namespace std;

void CalculateDietSodaCans(double TargetWeight);

int main() {

	char Choice = 's';//single quote for chars

	while (Choice!='X'||Choice!='x')
	{
		double  Weight;

		cout << "Enter your target weight:\n";
		cin >> Weight;

		CalculateDietSodaCans(Weight);

		cout << "Enter X to exit, anything else to repeat" << endl;
		cin >> Choice;

	}
	
}

void CalculateDietSodaCans(double TargetWeight) {
	const double MOUSEFATALDOSE = 5;//grams
	const double MOUSEMASS = 35;//grams
	const double MOUSEFATALPERCENT = MOUSEFATALDOSE / MOUSEMASS;

	double PERSONFATALDOSE = TargetWeight*MOUSEFATALPERCENT;

	const double CANMASS = 350;//grams
	const double CANSWEETENERPERCENT = 0.001;//percent
	const double CANSWEETENERMASS = CANMASS*CANSWEETENERPERCENT;//grams

	int CanNumber = PERSONFATALDOSE / CANSWEETENERMASS;

	cout << "You are allowed "<<CanNumber<<" cans of diet soda, for a weight of "<<TargetWeight<<" kg\n";
}