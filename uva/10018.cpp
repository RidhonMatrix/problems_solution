#include <iostream>

using namespace std;

long Reverse(long x)
{
	long newX(0);
	
	while (x)
	{
		newX *= 10;
		newX += x % 10;
		x /= 10;
	}
	
	return newX;
}

int main()
{
	int t;
	
	cin >> t;
	
	while(t--)
	{
		long number;
		cin >> number;
		
		long reverseNumber = Reverse(number);
		
		int count(0);
		while (reverseNumber != number)
		{
			number += reverseNumber;
			reverseNumber = Reverse(number);
			++count;
		}
		cout << count << " " << number << endl;
	}
}
