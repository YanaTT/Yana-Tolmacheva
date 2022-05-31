//Напишите функцию Hours(), которая принимает целочисленное значение в секундах и возвращает соответствующее количество часов.

#include <iostream>
using namespace std ;

float Hours(int s)
{
float result;
result= s/3600;
return result;
}

int main ()
{
float s;
cout<<"Введите секунды\n";
cin>> s;
cout << "Результат " << Hours(s)<< "\n";
return 0;
}
