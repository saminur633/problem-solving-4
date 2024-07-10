// pattern rools
#include <iostream>
using namespace std;

int main() {
    for (int k=1 ; k<=5; k++){
        for (int i =1 ; i<=5; i++){
            cout << '*';
        }
        cout << '\n';
    }


    return 0;
}
//pattern rols
#include <iostream>
using namespace std;

int main() {
    for (int line =1 ; line <=5; line++){
        for (int star =1 ; star<=line; star++){
            cout << '*';
        }
        cout << '\n';
    }


    return 0;
}
// pattern 3
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int space = 1; space <= 5 - i; space++) {
            cout << " ";
        }
        for (int star = 1; star <= i; star++) {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}
