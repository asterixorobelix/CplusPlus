/*Given an array of integers, return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers.

If the input array is empty or null, return an empty array:

ATTENTION!

The passed array should NOT be changed. 

For example:

input vector<int> {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15} 
return vector<int>  {10, -65}.
*/


#include <vector>
#include <iostream>

std::vector<int> countPositivesSumNegatives(std::vector<int> input); //function declaration

int main(){

	std::vector<int> input = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15} ;

	std::cout<<"Input: "<<std::endl;

	for (int j=0;j<input.size();++j){
		std::cout<<input[j]<<" ";
	}

	std::vector<int> answer = countPositivesSumNegatives(input);//function call

	std::cout<<"\nOutput: "<<std::endl;

	for (int i=0;i<answer.size();++i){
		std::cout<<answer[i]<<" ";
	}
	std::cout<<std::endl;

}

//function definition
std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
	int count {0}, sum {0};   

	if(input.empty()){
		return {};
	}
	

	for (int i=0; i<input.size();++i){
		if(input[i]>0){
			++count;
		}

		else{
			sum+=input[i];
		}
	}

	std::vector<int> result {count,sum};

	return result;
}