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
        float getRadius(); //������ �������
        float getArea();//������� ���������� �������
        float getCircum();
          
        bool operator==(Circle a);//���������� ��������� ���������
        bool operator>(Circle a);//���������� ��������� ������
};