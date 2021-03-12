#include <iostream>
#include<string>
#include<vector>
using std::string;
using std::vector;
using std::endl;
using std::cout;

using iter  = vector<string>::iterator;

void print(iter &beg, iter &end_)
{
	if (beg != end_)
	{
		cout << *beg << endl;
		print(++beg, end_);
	}
}
int main()
{
	vector<string> myV = { "1ss","ss2","dd3" };
	print(myV.begin(), myV.end());
	system("pause");
	return 0;
}
