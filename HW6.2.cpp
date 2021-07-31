#include <iostream>

using namespace std;
ostream &endll(ostream &stream){ //создание манипулятора пришлось найти в интернете
    cout << "\n" << endl;
}
int main(){
    int number = 23;
    cout << number << endll;
    cout << number;
    return 0;
}