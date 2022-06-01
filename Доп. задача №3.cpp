//Функция Power() получает два числа a (дробное) и n (целое) и возвращает an. 
//Функция использует только циклы, не прибегая к сторонним библиотекам. 
//Продемонстрируйте работу функции, используя цикл

#include <iostream>
#include <math.h>
using namespace std ;

float Power(float a, int n)
{
float pow1;
pow1=pow(a,n);
return pow1;
}

int main ()
{
float a,n;
cout << "Введите первое дробное число\n";
cin >> a;
cout<<"Введите второе целое число\n";
cin>>n;
cout << "Результат " << Power(a,n)<< "\n";
return 0;
}
