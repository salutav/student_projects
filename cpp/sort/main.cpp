#include <iostream>
#include <vector>
#include "sortowanie.h"
using namespace std;

int main(){
vector<int> dane = {5, 12, 83, 2, 7, 23, 67, 100, 21, 16, 13, 54};
vector<int> posortowane = sortowanie(dane);

for(int x : posortowane)
{
cout<<x << endl;
}
	return 0;
}
