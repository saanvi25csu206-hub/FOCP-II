/*A content-management system receives user-entered text that may contain inconsistent spacing, mixed
letter cases, and invalid characters.
For reliable storage and processing, the system must normalize and validate the input string.
Develop a C++ program that performs the following tasks on a given input string:
1. Remove leading, trailing, and extra spaces between words
2. Convert the string to sentence case (first character uppercase, remaining lowercase)
3. Count and display:
o Total number of words
o Total number of digits
o Total number of special characters
4. Validate that the final string contains only alphabets, digits, and spaces
Display appropriate messages based on the validation result.*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str, temp = "", finalStr = "";

    cout << "Enter a string: ";
    getline(cin, str);
    bool spaceFound = false;

    for (int i = 0; i < str.length(); i++) {

        if (str[i] != ' ') {
            temp += str[i];
            spaceFound = false;
        }
        else {
            if (!spaceFound && temp.length() > 0) {
                temp += ' ';
                spaceFound = true;
            }
        }
    }
    if (temp[temp.length() - 1] == ' ') {
        temp.erase(temp.length() - 1);
    }
    for (int i = 0; i < temp.length(); i++) {

        if (i == 0)
            finalStr += toupper(temp[i]);
        else
            finalStr += tolower(temp[i]);
    }

    int words = 0, digits = 0, special = 0;
    bool valid = true;
    if (finalStr.length() > 0)
        words = 1;

    for (int i = 0; i < finalStr.length(); i++) {

        if (finalStr[i] == ' ')
            words++;

        else if (isdigit(finalStr[i]))
            digits++;

        else if (!isalnum(finalStr[i]) && finalStr[i] != ' ') {
            special++;
            valid = false;
        }
    }
    cout << "\nNormalized String: " << finalStr << endl;

    cout << "Total Words: " << words << endl;
    cout << "Total Digits: " << digits << endl;
    cout << "Total Special Characters: " << special << endl;
    if (valid)
        cout << "Validation Successful: String contains only alphabets, digits, and spaces." << endl;
    else
        cout << "Validation Failed: String contains invalid special characters." << endl;

    return 0;
}