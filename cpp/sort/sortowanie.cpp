#include <iostream>
#include <algorithm>
#include "sortowanie.h"
using namespace std;
vector<int> sortowanie(vector<int> tab)
{
int n = tab.size();
for(int i = 0; i < n; i++)
{
	for(int b = i +1; b<n ;b++)
	{
		if(tab[i] > tab[b])
		{
			swap(tab[i], tab[b]);
		}
	}
}
return tab;
}
