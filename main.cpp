//���������� ����������� �������� (STL)
// ��� ������ "�������� ������" - ��� ������������ ������ � � ������ ���� ��� ��������� - �� �������������� � ����� ������ � ������, ������� �������� �� �����-�� ���-�� ������ ���� + �����
// 1. Vector
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	cout << "---	����� 1		---		VECTOR" << endl << endl;
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

	
	
	
	cout << endl << endl << "---	����� 2		---		���������" << endl << endl;

	vector<int> vr = { 41, 72, 36, 44 };

	vector<int>::iterator it; // �������� ���������
	
	it = vr.begin(); // ������ �������� ��������� �� ������ ��-� �������
	
	++it;

	//cout << *it << endl;

	for (vector<int>::iterator i = vr.begin(); i != vr.end(); i++) // ����� end - �������� ��������� �� ��������� ������� ����� ���������� � �������
	{
		cout << *i << endl;
	}
	cout << endl << endl;
	//const_iterator - ���� ����� �������� ��������� � ����� ������������
	for (vector<int>::const_iterator i = vr.cbegin(); i != vr.cend(); i++) // ����� end - �������� ��������� �� ��������� ������� ����� ���������� � �������
	{
		cout << *i << endl;
	}
	cout << endl << endl;
	//����������� ������������ �� �������
	for (vector<int>::reverse_iterator i = vr.rbegin(); i != vr.rend(); i++) // ����� end - �������� ��������� �� ��������� ������� ����� ���������� � �������
	{
		cout << *i << endl;
	}
	cout << endl << endl;


	vector<int> vtr = { 99, 20, 45, 73 };
	
	vector<int>::iterator itr = vtr.begin();
	cout << *itr << endl;
	
	advance(itr, 2); // ������������ ������ ���������� ���������� (�������� ������, �� ������� ��������� ��������)
	
	vtr.insert(itr, 10000); // ������� ��-�� � ������ �� �������
	
	vector<int>::iterator itErase = vtr.begin();
	vtr.erase(itErase); // �������� ��-�� �� ������� �� �������

	vtr.erase(itErase, itErase + 2); // ���������� erase - �������� ��������� ��-���
	cout << *itr << endl;


	return 0;
}