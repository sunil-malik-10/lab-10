#include <iostream>
#include <vector>
using namespace std;

int countOccurrences(string word, char letter);

int main()
{
    int numWords;
    cout << "Enter the number of words: ";
    cin >> numWords;

    vector<string> words(numWords);

    for (int i = 0; i < numWords; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> words[i];
    }

    char letter;
    cout << "Enter the letter to count: ";
    cin >> letter;

    int totalOccurrences = 0;
    for (int i = 0; i < numWords; i++)
    {
        totalOccurrences += countOccurrences(words[i], letter);
    }

    cout << "Total occurrences of '" << letter << "': " << totalOccurrences << endl;

    return 0;
}

int countOccurrences(string word, char letter)
{
    int count = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == letter)
        {
            count++;
        }
    }
    return count;
}
