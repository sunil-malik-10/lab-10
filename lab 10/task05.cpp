#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> boxes = {4, 2, 4, 3, 3, 3, 1, 1, 2, 2, 1, 1}; 
    int totalVolume = 0;

    int length = 0, width = 0, height = 0;
    int dimensionCount = 0; 
    for (int value : boxes) {
        if (dimensionCount == 0) {
            length = value; 
        } else if (dimensionCount == 1) {
            width = value;
        } else if (dimensionCount == 2) {
            height = value; 
            totalVolume += (length * width * height); 

        dimensionCount = (dimensionCount + 1) % 3; 
}
    cout << "Total Volume: " << totalVolume << endl;

    return 0;
    }
}
