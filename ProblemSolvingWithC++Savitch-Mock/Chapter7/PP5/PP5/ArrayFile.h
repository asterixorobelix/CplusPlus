#pragma once
#include <string>
using namespace std;

class ArrayFile
{
	
public:
	ArrayFile(string name);
	void GetElementCount();
private:
	string _Extension;
	string _FileName;
	array<int, 50> GetArray(int& count);
	array<int, 50> GetUniqueEntries(array<int, 50> ar, int& c);
	int _uniqueEntries;
	array<int, 50> GetEntryCount(array<int, 50> ar, array<int, 50> ar2, int c);
	void PrintResult(array <int, 50> ar, array<int, 50> ar2, int c);
};

