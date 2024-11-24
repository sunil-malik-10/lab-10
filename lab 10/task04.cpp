#include<iostream>
using namespace std;

const int max_size = 100;
int numbers[max_size];

bool isRepeatingPattern(int cycleLength, int totalElements);

int main() {
    int cycleLength;
    cout << "Enter length of cycle: ";
    cin >> cycleLength;
    
    int totalElements;
    cout << "Enter number of elements: ";
    cin >> totalElements;

    for (int i = 0; i < totalElements; i++) {
        cout << "Enter number: ";
        cin >> numbers[i];
    }

    if (isRepeatingPattern(cycleLength, totalElements) == false) {
        cout << "Not repeating";
    } else {
        cout << "Repeating";
    }

    return 0;
}

bool isRepeatingPattern(int cycleLength, int totalElements) {
    for (int i = 0; i < totalElements; i++) {
        if (numbers[i] != numbers[i % cycleLength]) {
            return false;
        }
    }
    return true; 
}
