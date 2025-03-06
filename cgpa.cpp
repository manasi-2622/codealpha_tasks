#include <iostream>
using namespace std;

int main() {
    int numSubjects;
    float totalGradePoints = 0;

    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    for (int i = 0; i < numSubjects; i++) {
        float grade;
        cout << "Enter grade point for subject " << i + 1 << ": ";
        cin >> grade;
        totalGradePoints += grade;
    }

    float cgpa = totalGradePoints / numSubjects;
    cout << "Your CGPA is: " << cgpa << endl;

    return 0;
}
