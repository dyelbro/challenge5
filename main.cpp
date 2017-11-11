#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int random(int  n) {
    srand(time(0));
    n = rand() % 100;
    return n;
}

struct item {
    string description;
    int quantity;
};

int main() {
    int n;
    item arr[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter in a name: ";
        getline(cin, arr[i].description);
        arr[i].quantity = random(n);
    }

    for (int i = 0; i < 5; i++) {
        cout << arr[i].description << ": ";
        cout << arr[i].quantity << endl;
    }

}