#include <iostream>
#include <regex>

using namespace std;

int main()
{
	string filename;

	cout<<"give a filename: ";
	getline(cin, filename);
	cout<<filename;

	if(regex_match (filename, regex("(\\w+\\.*)*\\w+") ))
		cout<<"matched\n";
	else
		cout<<"error\n";

	return 1;
}