#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> i = {2,3,4,5,6};
	int pad = i.back();

	for(auto it = i.begin(); it!=i.end(); ++it)
	{
		if(*it > 3)
		{
			*it = i.back();
		}
		/*if(*it == 5)
		{
			i.erase(it);
		}*/
	}

	while(std::find(i.begin(),i.end(),pad) != i.end())
	{
		i.erase(std::find(i.begin(),i.end(),pad));
	}

	for(auto it = i.begin(); it!=i.end(); ++it)
	{
		cout<<*it<<" ";
	}

	return 1;
}