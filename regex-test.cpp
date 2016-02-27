#include <iostream>
#include <regex>

using namespace std;

int main()
{
	string filename;

	cout<<"give a filename: ";
	getline(cin, filename);
	cout<<filename;

	if(regex_match (filename, regex("\\w+\\.") ))
		cout<<"matched";
	else
		cout<<"error";

	return 1;
}