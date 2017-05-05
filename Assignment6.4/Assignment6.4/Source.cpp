#include <iostream>
//Chance Daily 5/4/2017 Assignment 6.4
int main()
{
	int result = 0;
	int num[6] = { 23, 6, 47, 35, 2, 14 };

	for (int n = 0; n < 6; n++)//goes through each number
	{
		result = (num[n] + result);//adds each number to 'result' as the for loop goes through the array
	}
	result = result / 6;//divides the sum by the number of items in the array (6) to get the average

	std::cout << "The average is: " << result << std::endl;
}