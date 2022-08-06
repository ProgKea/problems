#include <iostream>

using namespace std;

int main(){
	int a, b;
	int years = 0;

	cin >> a >> b;

	while(a<=b)
	{
		a += a+a;
		b += b;
		years++;
	}
	cout << years;
	return 0;
}
