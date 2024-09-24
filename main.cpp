#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to find the most frequent character in a string
char findMostFrequentChar(const string &input, int &count) {
    vector<int> charCount(128, 0); // Array to hold the frequency of each ASCII character
    
    // 2. Iterate over each character and increment the counter
    for (char c : input) {
        charCount[(int)c]++;
    }
    
    // 3. Find the character with the highest count
    int maxCount = 0;
    char mostCommonChar = ' ';
    
    for (int i = 0; i < 128; i++) {
        if (charCount[i] > maxCount) {
            maxCount = charCount[i];
            mostCommonChar = (char)i;
        }
    }
    
    count = maxCount; // Return the count of the most frequent character
    return mostCommonChar;
}

int main() {
    // 1. Ask the user for a string
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Read the entire line
    
    // Convert input to uppercase
    for (auto &c : input) {
        c = toupper(c);
    }
    
    // Find the most frequent character
    int frequency;
    char mostCommon = findMostFrequentChar(input, frequency);
    
    // 4. Print the character and its frequency
    cout << "'" << mostCommon << "' " << frequency << endl;
    
    return 0;
}
