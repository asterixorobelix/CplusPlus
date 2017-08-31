#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string CalculateXmove(int dX,int& initialTX);
string CalculateYmove(int dY, int& initialTY);

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();
	const int xMax{ 40 }, yMax{ 18 };

	int deltaX, deltaY;

    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();

		deltaX = lightX - initialTX;
		deltaY = lightY - initialTY;

		string xCommand =CalculateXmove(deltaX, initialTX);
		string yCommand = CalculateYmove(deltaY, initialTY);
        // A single line providing the move to be made: N NE E SE S SW W or NW
        //cout << "SE" << endl;
		cout << yCommand+ xCommand  << endl;
    }
}

string CalculateXmove(int dX, int& initialTX) {
	string xCommand;

	if (dX > 0) {
		xCommand = "E";
		initialTX++;
	}
	else if (dX < 0) {
		xCommand = "W";
		initialTX--;
	}
	else {
		xCommand = "";
	}
	return xCommand;
}

string CalculateYmove(int dY, int& initialTY) {
	string yCommand;

	if (dY > 0) {
		yCommand = "S";
		initialTY++;
	}
	else if (dY < 0) {
		yCommand = "N";
		initialTY--;
	}
	else {
		yCommand = "";
	}
	return yCommand;
}