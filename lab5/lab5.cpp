#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

//1. СИНТАКСИС ОБЪЯВЛЕНИЯ КЛАССА
//class Имя_Класса
// Определение класса и объекта
// Свойство (property)-перемнная в составе класса
//метод(method)- функция в составе класса
//Инкапсуляция- фактически, объединение данных и методов, объединенных единым смыслом, в одну конструкцию языка
//Наследование- создание производных классов от родительского и заимствование его свойств и методов
//Полиморфизм- экземпляры одного класса ведут себя по- разному инкапсуляци, наследование и полиморфизм- это
//2.СИНТАКСИС ОБЪЯВЛЕНИЯ ОБЪЕКТА И ОБРАЩЕНИЯ К СВОЙСТВАМ И МЕТОДАМ
// Имя_Класса объект1;
//vehicle car;
//car.speed =123;
//объект1. свойство1=1;
//объект1.метод3();
//3. СПЕЦИФИКАТОРЫ ДОСТУПА
//к полям (свойствам и методам), объявленным в разделе public: можно обращаться везде (и из методов класса , и снаружи, где видим объект)
// К полям private и protected можно обращаться только из методов самого класса.
//Различия между private и protected объясняются в следующей теме про наследование классов.
//
//4. КОНСТРУКТОР И ДЕСТРУКТОР КЛАССА
//В случае, если при создании объека нужно выполнять сложные действия по инициализации, установлению сетевого соединения, действия с файлами, выделение ОП и т.д.эти действия прописываются в специальном методе - конструкторе.
//Конструктор вызывается автоматически при создании объекта.
//В случае если при исчезновении объекта нужо системные ресурсы освобождать: закрывать порты, освобождать ОП, сохранять файлы и т.д.-эти действия прописываются в методе- деструкторе (вызыается автоматически при исчезновении объекта)
//5. СТРУКТУРА
//Несмотря на то, что в литературе структура как правило хранит только данные, на самом деле это то же самое, что и класс. Единственное отличие - поля по умолчанию public
class vehicle //игровое транспортное средство
{
private: //только внутри класса
public: //общедоступный
	double speed; //скорость
	char regnumber[6] = { 0 };//госномер
	unsigned char capacity; //число пасажиров
	bool check_regnumber();
	//void add_passenger (int passengers);
	//void accelerate (double delta_velocity);
};
class user_data
{
private:
	char first_name[255];
	char second_name[255];
	char str_passport[10];
	char str_birthdate[10];
public:
	user_data(); //конструктор
	~user_data(); //деструктор;

	user_data(char p_first_name[255], char p_second_name[255], char p_str_passport[10], char p_str_birthdate[10]);

	bool set_first_name(char p__first_name[255])
	{
		for (int i = 0; i < 10; i++)
		{
			if (p__first_name[i] > '64' || p__first_name[i] < '91') {}
			else
				return false;
			first_name[i] = p__first_name[i];

		}
		return true;
		//проверять на отстутствие цифр, точек и других знаком препинания кроме "-"
	}
	bool set_second_name(char p_second_name[255])
	{
		return true;

	}

	bool set_str_birthdate(char p_birthdate[10])
	{

		for (int i = 0; i < 10; i++)
		{
			if (p_birthdate[i] >= '46' || p_birthdate[i] <= '9') {}
			else
				return false;
			str_birthdate[i] = p_birthdate[i];



		}
		return true;
		//должно соответствовать формату "00.00.0000"
	};


	bool set_str_passport(char p_passport[10])
	{
		for (int i = 0; i < 10; i++)
		{
			if (p_passport[i] < '0' || p_passport[i] > '9')
				return false;
			str_passport[i] = p_passport[i];
		}

		return true;
	};

};
user_data::user_data()
{
}
user_data::user_data(char p_first_name[255], char p_second_name[255], char p_str_passport[10], char p_str_birthdate[10])
{
	set_first_name(p_first_name);
	set_second_name(p_second_name);
	set_str_passport(p_str_passport);
	set_str_birthdate(p_str_birthdate);
}

user_data ::~user_data()
{
}


int main()
{
	user_data user1;
	char a[255] = "Ivanov", b[11] = "1234567890";
	user_data user2(a, a, b, b);
	//user_data user3("Petrov", "Petr");
	user_data a1;
	char string_birthdate[11] = "10.09.2018";
	if (a1.set_str_birthdate(string_birthdate))
	{
		cout << "Good ";
	}
	else {
		cout << "False ";
	}
	user_data a2;
	char string_passport[11] = "1113700955";
	if (a2.set_str_passport(string_passport))
	{
		cout << "Ok ";
	}
	else {
		cout << "error ";
	}
	user_data a3;
	char string_first_name[256] = "IVANOV";
	if (a3.set_first_name(string_first_name))
	{
		cout << " + ";
	}
	else {
		cout << " - ";
	}

	return 0;
}