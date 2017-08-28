#pragma once
#include <string>

class Wallpaper
{
public:
	Wallpaper();
	static std::string wallPaper(double l, double w, double h);
	friend std::string ReturnWord(int num);
};

