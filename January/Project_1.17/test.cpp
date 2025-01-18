//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	pair<int, int> p = make_pair(1, 2);
//	cout << p.first << ":" << p.second << endl;
//
//	return 0;
//}

#include <iostream>
#include <set>
#include "AVLTree.h"

using namespace std;

void TestSet()
{
	// ������array�е�Ԫ�ع���set
	int array[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0, 1, 3, 5, 7, 9, 2, 4,
6, 8, 0 };
	set<int> s(array, array + sizeof(array) / sizeof(int));
	cout << s.size() << endl;
	// �����ӡset�е�Ԫ�أ��Ӵ�ӡ����п��Կ�����set��ȥ��
	for (auto& e : s)
		cout << e << " ";
	cout << endl;
	// ʹ�õ����������ӡset�е�Ԫ��
	for (auto it = s.rbegin(); it != s.rend(); ++it)
		cout << *it << " ";
	cout << endl;
	// set��ֵΪ3��Ԫ�س����˼���
	cout << s.count(3) << endl;
}



class A
{
public:
	typedef char test;
};

class B
{
public:
	typedef typename A::test wow;
};

int main()
{
	AVLTree<int> avl;
	for (int i = 0; i < 20; i++)
	{
		avl.Insert(rand() + i);
	}
	avl.InOrder();
	return 0;
}