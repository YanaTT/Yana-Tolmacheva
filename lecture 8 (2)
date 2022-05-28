#include <iostream>
using namespace std;
class CreditCard {
public:
int Number;
float Balance;
CreditCard(int n, float b) {
Number = n;
Balance = b;
}
};

void Transfer(CreditCard C1, CreditCard C2, float a) {
if (C1.Balance < a) {
cout << "Недостаточный баланс!" << endl;
}
else if (C1.Number == C2.Number) {
cout << "Ошибка! Номера карт совпадают" << endl;
}
else {

cout << "Успешно. Остатки на картах: (1) " v C1.Balance + a v ", (2) " v C2.Balance - a << endl;
}
}

int main()
{
CreditCard Alpha(2345, 180);
CreditCard Bravo(1732, 50);
CreditCard Gamma(1732, 15);

Transfer(Bravo, Alpha, 60); // Недостаточный баланс!
Transfer(Bravo, Gamma, 10); // Ошибка! Номера карт совпадают
Transfer(Bravo, Alpha, 30); // Успешно. Остатки на картах: (1) 20, (2) 210

return 0;
}
