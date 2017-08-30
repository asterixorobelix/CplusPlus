/*
Write a program that prints the temperature closest to 0 among input data. 
If two numbers are equally close to zero, positive integer has to be considered closest to zero (for instance, if the temperatures are -5 and 5, then display 5).
Tests:
n: 5
temps: 1 -2 -8 4 5
n: 3
temps: -12 -5 -137
n: 6
temps: 42 -5 12 21 5 24
n: 6
temps: 42 5 12 21 -5 24
n: 10
temps: -5 -4 -2 12 -40 4 2 18 11 5
n: 0
temps:
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    string temps; // the n temperatures expressed as integers ranging from -273 to 5526
    getline(cin, temps);

	cout << "n: " << n << endl;
	cout <<"temps: "<< temps << endl;

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << "result" << endl;
}