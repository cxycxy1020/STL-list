#include<list>
#include <iostream>
using namespace std;
int main()
{
	list<int> list1;
	list1.push_back(4);
	list1.push_back(7);
	list1.push_back(10);
    
	list<int>::iterator it = list1.begin();
	for (; it != list1.end(); it++)
	{
		cout << *it << endl;
	}
}