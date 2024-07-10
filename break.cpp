// break statement
#include <iostream>
using namespace std;

int main() {
    for (int week = 1; week <= 4; week++) {
        cout << "week = " << week << '\n';
        if (week == 3) break;
       // for(int day = 1; day <= 7 ; day++){
            //cout << " day = " << day << '\n';
            int day = 1;
            while (day <=7){
            cout << " day = " << day << '\n';
            day++;

            }
        //}
    }
    return 0;
}
#include <iostream>
using namespace std;



int main() {
    for (int week = 1; week <= 4; week++) {
    cout << "Week = " << week << '\n';
    for (int day = 1; day <= 7; day++) {
        cout << "   Day = " << day << '\n';
        if (day == 3) {
            break; // This will exit the inner loop when 'day' is 3
        }
    }
}



    return 0;
}

