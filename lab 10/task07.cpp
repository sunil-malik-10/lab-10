#include <iostream>
#include <string>
using namespace std;

string reverseWordsInString(string inputString);

int main()
{
    string inputString;
    cout << "Enter a string: ";
    string currentWord;
    bool isFirstWord = true;
    
    while (cin >> currentWord)
    {
        if (!isFirstWord)
        {
            inputString += " ";
        }
        inputString += currentWord;
        isFirstWord = false;
    }

    string reversedString = reverseWordsInString(inputString);
    cout << "Reversed string: " << reversedString << endl;

    return 0;
}

string reverseWordsInString(string inputString)
{
    int length = inputString.length();
    string reversedResult = "";
    string currentWord = "";
    bool isFirstWord = true;
    
    for (int i = length - 1; i >= 0; i--)
    {
        if (inputString[i] == ' ')
        {
            if (currentWord.length() > 0)
            {
                if (!isFirstWord)
                {
                    reversedResult = " " + reversedResult;
                }
                reversedResult = currentWord + reversedResult;
                currentWord = "";
            }
        }
        else
        {
            currentWord = inputString[i] + currentWord;
        }
    }

    if (currentWord.length() > 0)
    {
        if (!isFirstWord)
        {
            reversedResult = " " + reversedResult;
        }
        reversedResult = currentWord + reversedResult;
    }

    return reversedResult;
}
