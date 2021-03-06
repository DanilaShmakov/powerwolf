#include "pch.h"
#include <iostream>

int main()
{
	std::cout << "Hello World!\n";


	// указаетель - переменная, хранящая адрес(смещение) каких - либо данных, переменных в оперативной памяти
	// указатель - pointer(ptr)
	/* 1. указатель объявляется как обычная перепенная, но добавляется *
	фактически, указатель-это unsigned int или unsigned long long с адресом, т.к. дробных или отрицательных адресов нет
	 */

	 /*
	  &-оператор получения адреса(унарный оператор амперсанд)
	  int *ptr_a;
	  ptr_a = &a;
	  */
	double * ptr_dbl;
	int * ptr_int;
	/*
	2. все указатели всегда одной и той же разрядности, каким бы ни был огромным тип данных(строка, объект, массив),
	указатель на него всегда будет занимать 4/8 байт, что и является основным
	std::cout << << sizeof() << std::endl;
	sizeof(Указатель) - размер указателя
	*/
	std::cout << "int pointer size = " << sizeof(ptr_int) << std::endl;
	std::cout << "double pointer size = " << sizeof(ptr_dbl) << std::endl;
	std::cout << "char pointer size = " << sizeof(char*) << std::endl;
	std::cout << "long long pointer size = " << sizeof(long long*) << std::endl;
	std::cout << "bool pointer size = " << sizeof(bool*) << std::endl;
	//3. содержимое указателей
	ptr_int = 0;
	ptr_dbl = 0, 5;
	std::cout << "ptr_int = " << ptr_int << std::endl;
	std::cout << "ptr_dbl = " << ptr_dbl << std::endl;

	int arr1d[5] = { 1,2,3,4,5 };
	std::cout << " arr = " << arr1d << std::endl;
	std::cout << " *arr = arr[0] = " << *arr1d << std::endl;
	std::cout << " *(arr+4) = arr[4] =  " << *(arr1d + 4) << std::endl;
	// !!! выход за границы допустимой памяти i+-10000