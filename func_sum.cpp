#include <iostream>
#include <array>
using namespace std;
using std::cout;
using std::array;

int prices[] = {40,30,50};
int adding(int x[]) {
    int to_pay = 0;
    for (int i = 0; i<sizeof(x) ; i++) {
        to_pay += x[i];
    }
    return to_pay;  
}

cout << adding(prices[]);
