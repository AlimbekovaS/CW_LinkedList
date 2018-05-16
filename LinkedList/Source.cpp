#include"List.h"
#include"List.cpp"
int main()
{
	List<int> L;
	L.push_back(5);
	L.push_back(12);
	L.push_back(112);
	L.push_front(100);
	cout << L.size() << endl;
	L.print();
	system("pause");
	return 0;
}