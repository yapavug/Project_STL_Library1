//���������� ����������� �������� (STL)
// 1. Vector
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> myVector;
	myVector.push_back(1); // ���������� ��-�� � �����
	myVector.push_back(22);
	myVector.push_back(333);
	myVector.pop_back(); // �������� ��-�� �� �����
	cout << myVector.size() << endl; // ���������� ��-��� �������
	for (int i = 0; i < myVector.size(); i++) // ��� ����� ������� ��-�� �������
	{
		cout << myVector[i] << endl;
	}
	//cout << myVector[10] << endl; // ������ ��������� � ��-�� �������
	//cout << myVector.at(10) << endl; // ������ ��������� � ��-�� ������� (�����)
	//try
	//{
	//	cout << myVector.at(10) << endl;//����� ������ ��������� � ��-��� ������� ������������� ����� �� ������� �������
	//}
	//catch (const std::out_of_range& ex)
	//{
	//	cout << ex.what() << endl;
	//}
	cout << myVector.size() << endl;
	myVector.clear(); // "������� �������"
	cout << myVector.size() << endl;
	return 0;
}