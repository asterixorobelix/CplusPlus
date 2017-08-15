#include<string>
using namespace std;

class CallCostCalculator
{
public:
	void static GetInput(string& Day, int& CallLength, int& Hours, int& Minutes);
	void static CalculateCallCost(string Day, int CallLength, int Hours, int Minutes);
	double static CalculateCost(double _Rate, int Minutes);
	void static PrintError();
};

