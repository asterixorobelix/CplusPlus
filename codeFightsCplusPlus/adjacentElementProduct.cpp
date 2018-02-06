/*
Given an array of integers, find the pair of adjacent elements that has the largest product and return that product.

Example

For inputArray = [3, 6, -2, -5, 7, 3], the output should be
adjacentElementsProduct(inputArray) = 21.

7 and 3 produce the largest product.

Input/Output

    [time limit] 500ms (cpp)

    [input] array.integer inputArray

    An array of integers containing at least two elements.

    Constraints:
    3 ≤ inputArray.length ≤ 10,
    -50 ≤ inputArray[i] ≤ 1000.

    [output] integer

    The largest product of adjacent elements.

*/

#include <iostream>
#include <vector>

int adjacentElementsProduct(std::vector<int> inputArray);

int main(){
	std::cout<<"Enter integers: "<<std::endl;

	int entry, result;
	std::vector<int> input = {5, 6, -4, 2, 3, 2, -23};

	// for(int entry; std::cin>>entry;){
	// 	input.push_back(entry);
	// }

	result=adjacentElementsProduct(input);

	std::cout<<"Largest product of adjacent elements: "<<result<<std::endl;
}

int adjacentElementsProduct(std::vector<int> inputArray) {
	int answer, largest {0};

	for (int i=0; i<inputArray.size();i+=2){
		answer=inputArray[i]*inputArray[i+1];
		//std::cout<<answer<<std::endl;

		if(answer>largest){
			largest=answer;
		}

	}

	return largest;
}

//OR

// int adjacentElementsProduct(std::vector<int> inputArray) {
//     int ans = -987654321;
//     for (int i = 1; i < inputArray.size(); ++i)
//         ans = max(ans, inputArray[i] * inputArray[i - 1]);
//     return ans;
// }
