#include <iostream>
using namespace std;

int main() {
    int height, age;
    char bodyType, skinColor, religion;
    //A perfect woman match would be tall,slim,light skinned,age range 27 and 35,a christian
    cout << "Enter the height of the possible companion (in m): ";
    cin >> height;

    cout << "Enter the body type of the possible companion (S for slim, T for thick): ";
    cin >> bodyType;

    cout << "Enter the skin colour of your possible companion (L for light skinned, D for dark skinned): ";
    cin >> skinColor;

    cout << "Enter the age of the possible companion: ";
    cin >> age;

    cout << "Is the possible companion a Christian? (Y/N): ";
    cin >> religion;


    if (height >= 2) {
        if (bodyType == 'S') {
            if (skinColor == 'L') {
                if (age >= 27 && age <= 35) {
                    if (religion == 'Y') {
                        cout << "Congratulations! You have found your perfect match." << endl;
                    } else {
                        cout << "Oops spooks,sorry, the possible companion is not a Christian." << endl;
                    }
                } else {
                    cout << "Sorry, possible companion's age is not between 27 and 35." << endl;
                }
            } else {
                cout << "Sorry, the possible companion is not light skinned." << endl;
            }
        } else {
            cout << "Sorry, possible companion is not slim." << endl;
        }
    } else {
        cout << "Sorry, the possible companion is not tall." << endl;
    }

    return 0;
}
