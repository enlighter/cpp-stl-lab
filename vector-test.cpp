#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> i = {2,3,4,5,6};

	for(auto it = i.begin(); it!=i.end(); ++it)
	{
		if(*it > 3)
		{
			*it = i.back();
			i.pop_back();
		}
		/*if(*it == 5)
		{
			i.erase(it);
		}*/
	}

	for(auto it = i.begin(); it!=i.end(); ++it)
	{
		cout<<*it<<" ";
	}

	return 1;
}