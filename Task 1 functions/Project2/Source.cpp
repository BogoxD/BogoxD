#include "std_lib_facilities.h"

void print(string label, const vector<int>&v)
{
	for (int i = 0; i <= v.size(); i++)
	{
		cout << v[i];
	}
	cout << label;
}



int main() 
{
	string label ="age";
	vector<int>v;
	print(label, v);


}