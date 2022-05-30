#include <iostream>
using namespace std;

void print (int f); 
void print (double f);
void print (char f);
void print (int f, int c);

int main()
{
print (14);
print (14528764);
print ('f');
print (52,589);

return 0;
}

void print (int f){
cout << f << "\n";
}
void print (float f){
cout << f << "\n";
}
void print (char f){
cout << f << "\n";
}
void print (int f, int c){
cout << f <<", " << c << "\n";
}
