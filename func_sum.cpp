#include <iostream>
using namespace std;
using std::cout;

int prices[] = { 40, 30, 50 };

int adding(int x[], int size) {
    int to_pay = 0;
    for (int i = 0; i < size; i++) {
        to_pay += x[i];
    }
    return to_pay; 
}

int main() {
    int result = adding(prices, sizeof(prices));
    cout << result;
    return 0;
}
