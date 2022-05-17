#include <iostream>
using namespace std ;

float SquaredSum(float a, float b,float result)
{
result=(a+b)*(a+b);
return result;
}

int main ()
{
float a,b,result;
cout << "Введите первое дробное число\n";
cin>>a;
cout<<"Введите второе дробное число\n";
cin>>b;
cout<<"Результат " << SquaredSum(a,b,result)<<"\n";
}
