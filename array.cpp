// array 
#include <iostream>
using namespace std;

int main() {
    int age[5] = {18,17,16,12,11};
    cout << age[1] << endl;
    return 0;
}
#include <iostream>
using namespace std;


int main() {
    int age[5] = {18,17,16,12,11};
    for (int i = 0; i < 5; i++){
        cout << age[i] << endl;

    }

    return 0;
}
#include <iostream>
using namespace std;


int main() {
    int result[100];
    int num_of_students = 5;
    for (int i = 0; i < num_of_students; i++){
        cin >> result[i];

    }
    for ( int i= 0; i< num_of_students; i++ ){
        cout << result[i] << endl;
    }
    return 0;
}
// sum of array
#include <iostream>
using namespace std;


int main() {
    int result[100];
    int num_of_students = 5;
    for (int i = 0; i < num_of_students; i++){
        cin >> result[i];

    }
    int sum = 0;
    for ( int i= 0; i< num_of_students; i++ ){
            sum += result[i];
    }
    cout << sum << endl;
    return 0;
}
