#include <iostream>
using namespace std;

int main()
{
    int numElements;
    cout << "Enter the number of elements: ";
    cin >> numElements;

    int numbers[numElements];
    int peakCount = 0;

    for (int i = 0; i < numElements; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];

        if (i > 0 && i < numElements - 1) 
        {
            if (numbers[i] > numbers[i - 1] && numbers[i] > numbers[i + 1])
            {
                peakCount++;
            }
        }
    }

    cout << "Number of peaks: " << peakCount << endl;

    return 0;
}
