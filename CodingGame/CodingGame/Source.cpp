#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/
int main()
{

    // game loop
    while (1) {
        
		vector<int> Heights;

        for (int i = 0; i < 8; i++) {// i represents the mountain
            int mountainH; // represents the height of one mountain.
            cin >> mountainH; cin.ignore();
            //cerr<<mountainH<<endl;
            Heights.push_back(mountainH);
        }

		int GreatestHeight{ 0 }, MountainNum;

		for (int i = 0; i < Heights.size(); i++) {
			if (Heights[i] > GreatestHeight) {
				GreatestHeight = Heights[i];
				MountainNum = i;
			}
		}

        cout << MountainNum << endl; // The index of the mountain to fire on.
    }
}