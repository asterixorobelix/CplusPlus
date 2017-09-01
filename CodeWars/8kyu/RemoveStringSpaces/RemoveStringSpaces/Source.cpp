/*
Simple, remove the spaces from the string, then return the resultant string.
Assert::That(no_space("8 j 8   mBliB8g  imjB8B8  jl  B"), Equals("8j8mBliB8gimjB8B8jlB"));
*/
#include <string>
#include <vector>
#include <iostream>
std::string no_space(std::string x);
int main() {
	no_space("8 j 8   mBliB8g  imjB8B8  jl  B");
}

std::string no_space(std::string x)
{
	char character;
	std::string result;

	for (int i = 0; i < x.length(); i++) {
		character = x[i];
		if (character != ' ') {
			result += character;
		}
	}

	std::cout<<result<<std::endl;
	return result;
}