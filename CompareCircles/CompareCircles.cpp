﻿//Практика 06.06. Встреча 7, задание 1
//Создайте класс Circle(окружность):
//■■ Реализуйте через перегруженные операторы;
//■■ Проверка на равенство радиусов двух окружностей(операция = = );
//■■ Сравнения длин двух окружностей(операция > ).
//■■ Пропорциональное изменение размеров окружности, путем изменения ее радиуса(операция += и -= )

#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    Circle A(10), B(20);    

    cout << "Окружность A : радиус = " << A.getRadius() << " ед., площадь = "
        << A.getArea() << " ед.\n";
    cout << "Окружность B : радиус = " << B.getRadius() << " ед., площадь = "
        << B.getArea() << " ед.\n";

    cout << "A == B : ";
    if (A == B)
        cout << "окружности равны\n";
    else
        cout << "окружности не равны\n";

    if (A>B) { cout << "Длина первой окружности больше" << endl; }
    else { cout << "Длина первой окружности меньше" << endl; };    
}
    