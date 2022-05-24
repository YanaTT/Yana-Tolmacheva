#include <iostream>
using namespace std;

class Bucket{
public:
int volume;
int used;
Bucket(int a, int b){volume = a, used = b;}
int fill(int c){
if (volume <= c+used){
int b = used;
used = volume;
return c-(volume-b);
} else{
used = c;
}

return 0;
}
void flush(){
used = 0;
}
};

int main(){
Bucket test_01(12, 3);
cout << "1) " << test_01.volume << ", " << test_01.used << endl;

int rest = test_01.fill(14);
cout << "2) " << test_01.used << ", " << rest << endl;

test_01.flush();
rest = test_01.fill(8);
cout << "3) " << test_01.used << ", " << rest << endl;

return 0;
}
