//���������� ����������� �������� (STL)
// ��� ������ "�������� ������" - ��� ������������ ������ � � ������ ���� ��� ��������� - �� �������������� � ����� ������ � ������, ������� �������� �� �����-�� ���-�� ������ ���� + �����
// 1. Vector
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> myVector(3,55);
	for (int i = 0; i < myVector.size(); i++) // ��� ����� ������� ��-�� �������
	{
		cout << myVector[i] << endl;
	}
	cout << myVector.empty() << endl; // ��������, ���� �� ��-�� � �������
	myVector.reserve(100); // "���������������" ���-�� ��-��� � ������� - ������ ��������, ������ �������� - �����������
	cout << myVector.capacity() << endl;
	myVector.shrink_to_fit(); // "�������" ������ �� �������� ����������� "��������" (���������� ���������������� ������)
	cout << myVector.capacity() << endl;
	myVector.push_back(1); // ���������� ��-�� � �����
	myVector.push_back(22);
	myVector.push_back(333);
	myVector.pop_back(); // �������� ��-�� �� �����
	cout << myVector.size() << endl; // ���������� ��-��� �������
	cout << '\n' << '\n' << '\n' << endl;
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
	//cout << myVector.size() << endl;
	//myVector.clear(); // "������� �������"
	//cout << myVector.size() << endl;

	myVector.resize(5); // ��������� ������� �������, ��� �� ��� � � ������������ ����� ������ ����������� ������ ����������
	for (int i = 0; i < myVector.size(); i++) // ��� ����� ������� ��-�� �������
	{
		cout << myVector[i] << endl;
	}
	cout << "Size:\t" << myVector.size() << endl;
	cout <<"Capacity:\t" << myVector.capacity() << endl; // ������� ������� - ������������� ������ �� ������������� � �����-�� ����� � ������, � ������� ������� � �������


	return 0;
}