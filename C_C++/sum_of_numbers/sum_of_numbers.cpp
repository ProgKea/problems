#include <iostream>

using namespace std;

int main(){
	int a, b;
	int sum = 0;

	cin >> a >> b;
	if(a==b)
	{
		cout << a;
	}
	else if (a<b)
	{
		for(int i=a; i<=b; i++)
		{
			sum += i;
		}
		cout << sum;
	}
	else
	{
		for(int i=b; i<=a; i++)
		{
			sum += i;
		}
		cout << sum;
	}
	return 0;
}
