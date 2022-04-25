#include <iostream>
using namespace std;

int main ()
{
int f;
char numbers [10][20] = {"нуль", "один","два","три","четыре","пять","шесть","семь","восемь","девять"};
std::cout << "Введите любую цифру от 0 до 9" << std::endl;
std::cin >> f;
cout << numbers[f]<< endl;

return 0;

}
