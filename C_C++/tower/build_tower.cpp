#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
  int nFloors;
  cin >> nFloors;
  vector <string> tower;

  int stars = nFloors*2-2;

  for(int i=0; i<nFloors; i++)
  	{
        string floor(1, '*');
        string a(stars, '*');
        floor += a;
        string space(i, ' ');
        floor += space;
        space += floor;
        tower.push_back(space);
        stars -= 2;
 	  }
	reverse(tower.begin(), tower.end());
  for(int i=0; i<tower.size(); i++)
       {
	       cout << tower[i] << "\n";
       }

  return 0;
}
