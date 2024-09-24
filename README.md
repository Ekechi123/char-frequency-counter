Here's how you can structure your README file, including the instructions on how to run the application, function documentation, and the test cases:

---

# Most Frequent Character Finder

## Description
This C++ application finds the most frequent character in a given string. It reads the input from the user, processes it to determine the frequency of each character, and outputs the character that appears the most along with its count.

## How to Run the Application

1. **Compile the Program:**
   Use the following command to compile the program:
   ```bash
   g++ -o most_frequent_char main.cpp
   ```

2. **Run the Executable:**
   After compiling, run the program using:
   ```bash
   ./most_frequent_char
   ```

3. **Input:**
   Enter a string when prompted.

## Function Documentation

### `char findMostFrequentChar(const string &input, int &count)`
- **Parameters:**
  - `input`: A reference to the input string.
  - `count`: An integer reference that will store the frequency of the most common character.
- **Returns:** The character that appears most frequently in the input string.

### `int main()`
- **Functionality:** 
  - Prompts the user for a string input.
  - Converts the input to uppercase.
  - Calls `findMostFrequentChar` to determine the most frequent character.
  - Outputs the result to the user.

## Test Cases

### Test Case 1
- **Input:** `"Hello World"`
- **Expected Output:** `'L' 3`
- **Explanation:** The letter `'L'` appears 3 times in the string, which is more than any other character.

### Test Case 2
- **Input:** `"AabbCC"`
- **Expected Output:** `'A' 2`
- **Explanation:** The letter `'A'` appears 2 times (both lowercase 'a' are converted to uppercase) and is the most frequent character.

### Test Case 3
- **Input:** `"Programming"`
- **Expected Output:** `'R' 2`
- **Explanation:** The letter `'R'` appears 2 times in the string, which is the highest frequency of any character in this input.
