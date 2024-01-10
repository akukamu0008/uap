#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Masukkan input untuk banyak string: ";
    cin >> input;
    string kata= " i";
    for (int i = 1; i <= input; i++) {
        for (int j = input; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}