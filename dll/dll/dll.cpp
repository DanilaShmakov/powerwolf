// dll.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "dll.h"

float discr(float a, float b, float c)
{
	float d;
	d = pow(b, 2) - 4 * a * c;
	return d;
}
