#include <iostream>

using namespace std;

int main()
{
	int l[5] = {0,2,3,4,5};

	int index = 0;

	l[index++] = index;
	l[index] = index++;
	//cout << index;

	for(int i=0; i<5; i++)
	{
		cout<<l[i];
	}

	return 0;
}