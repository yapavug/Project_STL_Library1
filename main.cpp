//Библиотека стандартных шаблонов (STL)
// Как вектор "работает внутри" - это динамический массив и в случае если его расширяем - он переписывается в новый массив в памяти, который содержит на какое-то кол-во больше мест + запас
// 1. Vector
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	cout << "---	ЧАСТЬ 1		---		VECTOR" << endl << endl;
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

	
	
	
	cout << endl << endl << "---	ЧАСТЬ 2		---		ИТЕРАТОРЫ" << endl << endl;

	vector<int> vr = { 41, 72, 36, 44 };

	vector<int>::iterator it; // Создание итератора
	
	it = vr.begin(); // Теперь итератор указывает на первый эл-т вектора
	
	++it;

	//cout << *it << endl;

	for (vector<int>::iterator i = vr.begin(); i != vr.end(); i++) // Метод end - итератор указывает на следующий элемент после последнего в векторе
	{
		cout << *i << endl;
	}
	cout << endl << endl;
	//const_iterator - идет после обычного итератора в ветке наследования
	for (vector<int>::const_iterator i = vr.cbegin(); i != vr.cend(); i++) // Метод end - итератор указывает на следующий элемент после последнего в векторе
	{
		cout << *i << endl;
	}
	cout << endl << endl;
	//Реверсивное итерирование по вектору
	for (vector<int>::reverse_iterator i = vr.rbegin(); i != vr.rend(); i++) // Метод end - итератор указывает на следующий элемент после последнего в векторе
	{
		cout << *i << endl;
	}
	cout << endl << endl;


	vector<int> vtr = { 99, 20, 45, 73 };
	
	vector<int>::iterator itr = vtr.begin();
	cout << *itr << endl;
	
	advance(itr, 2); // Используется вместо арифметики указателей (Изменяет индекс, на который ссылается итератор)
	
	vtr.insert(itr, 10000); // Вставка эл-та в вектор по индексу
	
	vector<int>::iterator itErase = vtr.begin();
	vtr.erase(itErase); // Удаление эл-та из вектора по индексу

	vtr.erase(itErase, itErase + 2); // Перегрузка erase - удаление диапазона эл-тов
	cout << *itr << endl;


	return 0;
}