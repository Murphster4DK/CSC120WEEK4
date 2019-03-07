#include <iostream>
using namespace std;

int main() {
    int studentsGrade (0);
    cout << "Students Grade: ";
    cin >> studentsGrade;

    if (studentsGrade >= 90) {
        cout << "A";
    }else { if (studentsGrade >= 80) {
            cout << "B";
        }else { if (studentsGrade >= 70) {
                cout << "C";
            } else { if (studentsGrade >= 60) {
                        cout << "D";
            } else { if (studentsGrade < 60) {
                    cout << "F";}
            }}
        }}




}