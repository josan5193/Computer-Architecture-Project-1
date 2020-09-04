// Recursive Fibonacci and How it Causes Stack Overflow
// Joshua Sanders
#include <iostream>
using namespace std;


int fibo(int n)
{
	if (n <= 1)
		return n;
	return fibo(n - 1) + fibo(n - 2);
}

int main()
{
	int n = 9;					// Change n=9 to n=100000000000000000 to experience stack overflow
	cout << fibo(n) << "\n";
	system("pause");
	return 0;
}
