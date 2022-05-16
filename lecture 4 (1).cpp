#include <iostream>
using namespace std;

int main ()
{
int a;
char numbers [10][8] = {
    "нуль", 
    "один",
    "два",
    "три",
    "четыре",
    "пять",
    "шесть",
    "семь",
    "восемь",
    "девять"};
cout << "Введите цифру от 0 до 9" <<"/n";
cin >> a;
cout << numbers[a]<< "/n";

return 0;

}
