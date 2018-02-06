/*
Given the string, check if it is a palindrome.

Example

    For inputString = "aabaa", the output should be
    checkPalindrome(inputString) = true;
    For inputString = "abac", the output should be
    checkPalindrome(inputString) = false.

Input/Output

     [input] string inputString

    A non-empty string consisting of lowercase characters.

    Constraints:
    1 ≤ inputString.length ≤ 10.

    [output] boolean

    true if inputString is a palindrome, false otherwise.
*/
#include <iostream>
#include <string>

bool checkPalindrome(std::string inputString);

int main(){
	std::cout<<"Enter a string \n";
	std::string entry;
	std::cin>>entry;

	bool result = checkPalindrome(entry);
	std::cout<<"Result: "<<result<<std::endl;
}


bool checkPalindrome(std::string inputString) {

	bool palindrone {true};

	while (palindrone){
		for(int i =0; i<inputString.size();++i){
			//std::cout<<i<<std::endl;
			if(inputString[i]==inputString[inputString.size()-1-i]){
				palindrone=true;
			}

			else{
				palindrone=false;
				break;
			}
		}
		break;
	}
	return palindrone;	
}
