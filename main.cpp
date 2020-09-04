//Dylan Sidani
#include <math.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	//set up the random number generator
	srand(time(NULL));

	//set the rand numers for each variable
	float a = rand() % 1001;
	float b = rand() % 1001;
	float c = rand() % 1001;

	//checking the condition to see if it is true or false
	if (a + (b + c) == (a + b) + c)
	{
		cout << true;
	}
	else
	{
		cout << false;
	}

	return 0;
}