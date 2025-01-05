//Библиотека стандартных шаблонов (STL)
// 1. Vector
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> myVector;
	myVector.push_back(1); // Добавление эл-та в конец
	myVector.push_back(22);
	myVector.push_back(333);
	myVector.pop_back(); // Удаление эл-та из конца
	cout << myVector.size() << endl; // Количество эл-тов вектора
	for (int i = 0; i < myVector.size(); i++) // Как можно вывести эл-ты вектора
	{
		cout << myVector[i] << endl;
	}
	//cout << myVector[10] << endl; // Способ обращения к эл-ту вектора
	//cout << myVector.at(10) << endl; // Способ обращения к эл-ту вектора (лучше)
	//try
	//{
	//	cout << myVector.at(10) << endl;//Такой способ обращения к эл-там вектора предотвращает выход за границы вектора
	//}
	//catch (const std::out_of_range& ex)
	//{
	//	cout << ex.what() << endl;
	//}
	cout << myVector.size() << endl;
	myVector.clear(); // "Очистка вектора"
	cout << myVector.size() << endl;
	return 0;
}