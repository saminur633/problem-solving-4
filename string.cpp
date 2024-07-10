// character string
#include <iostream>
using namespace std;

int main() {
    char name[100]; // can store up to 99 characters (leaving one place for the null character)
    cin.getline(name, 100); // Reads up to 99 characters or until a newline '\n' is encountered
    cout << name << '\n'; // Prints the full line
    return 0;
}