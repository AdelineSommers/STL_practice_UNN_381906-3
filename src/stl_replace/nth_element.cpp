#include <iostream>
#include<algorithm>
using namespace std;



int main()
{
	int a[10] = { 4,12,9,5,6,6,6,4,8,10 };
	nth_element(a, a + 2, a + 5); //��������� - ��������� �� ������ ��-�, �� ��-� ������ �������� ������������ ���������� � �� ���������
	copy(a, a + 10, ostream_iterator<int>(cout << " "));
	cout << endl;
	return 0;
}