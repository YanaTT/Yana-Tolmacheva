#include <iostream>
using namespace std;
class CreditCard {
public:
int Number;
float Balance;
CreditCard(int a, float b) {
Number = a;
Balance = b;
}
float Put(float (V)) {
return Balance = Balance + V;
};
float Take(float (V)) {
return Balance = Balance - V;
};
};
int main()
{
CreditCard firstCC(1234, 50), * carta;
carta = &firstCC;
cout << carta->Put (12556) << endl;
cout << carta->Take(5689) << endl;

return 0;
}
