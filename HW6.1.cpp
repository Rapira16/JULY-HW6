#include <iostream>

using namespace std;
int main(){
    int number;
    cin >> number;
    if(cin.fail()){ //проверка на целочисленность пришлось найти информацию в интернете. В методичке только другие функции istream
        cout << "wrong input!" << endl;
    } else {
        cout << number << endl;
    }
    return 0;
}