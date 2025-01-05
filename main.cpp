//Библиотека стандартных шаблонов (STL)
// Как вектор "работает внутри" - это динамический массив и в случае если его расширяем - он переписывается в новый массив в памяти, который содержит на какое-то кол-во больше мест + запас
// 1. Vector
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> myVector(3,55);
	for (int i = 0; i < myVector.size(); i++) // Как можно вывести эл-ты вектора
	{
		cout << myVector[i] << endl;
	}
	cout << myVector.empty() << endl; // Проверка, есть ли эл-ты в векторе
	myVector.reserve(100); // "Зарезервировать" кол-во эл-тов в векторе - первый аргумент, второй аргумент - заполнитель
	cout << myVector.capacity() << endl;
	myVector.shrink_to_fit(); // "Урезаем" вектор до реальных заполненных "размеров" (освободили неиспользованную память)
	cout << myVector.capacity() << endl;
	myVector.push_back(1); // Добавление эл-та в конец
	myVector.push_back(22);
	myVector.push_back(333);
	myVector.pop_back(); // Удаление эл-та из конца
	cout << myVector.size() << endl; // Количество эл-тов вектора
	cout << '\n' << '\n' << '\n' << endl;
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
	//cout << myVector.size() << endl;
	//myVector.clear(); // "Очистка вектора"
	//cout << myVector.size() << endl;

	myVector.resize(5); // Изменение размера вектора, так же как и в конструкторе можно задать заполнитель вторым аргументом
	for (int i = 0; i < myVector.size(); i++) // Как можно вывести эл-ты вектора
	{
		cout << myVector[i] << endl;
	}
	cout << "Size:\t" << myVector.size() << endl;
	cout <<"Capacity:\t" << myVector.capacity() << endl; // Емкость вектора - автоматически вектор не пересоздается в каком-то месте в памяти, а заранее юерется с запасом


	return 0;
}