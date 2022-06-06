#pragma once
#include <iostream>
using namespace std;


class Circle
{      
    private:
        float radius;
    public:
        Circle(float r = 0) : radius(r) { }
        void changeRadius(int radius);
        float getRadius(); //геттер радиуса
        float getArea();//функция вычисления площади
        float getCircum();
          
        bool operator==(Circle a);//перегрузка оператора равенства
        bool operator>(Circle a);//перегрузка оператора больше
};