#include <iostream>
using namespace std;

main()
{
    int totalDays, decreaseCount = 0;

    cout << "Enter number of days: ";
    cin >> totalDays;
    int miles[totalDays];
    
    for (int day = 0; day < totalDays; day++)
    {
        cout << "Enter number of miles on day " << day + 1 << ": ";
        cin >> miles[day];
        
        if (day > 0 && miles[day] < miles[day - 1]) // Check for decrease
        {
            decreaseCount++;
        }
    }
    
    cout << "Number of days with decreased miles: " << decreaseCount;
}
