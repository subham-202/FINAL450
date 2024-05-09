#include<iostream>
#include<string>
#include<algorithm>
#include<string.h> // For using C string functions
using namespace std;

int main() {
    // Using character array for name input
    char myName[20]; // Fixed size array ends with '\0'

    // Prompting for name input
    cout << "Enter My Name: ";

    // Reading input using gets() which is unsafe, better to use cin.getline()
    gets(myName);

    // Displaying entered name
    cout << "Entered Name: " << myName << endl;

    // Using string for address input
    string myAddress; // Dynamic size, ends with null, immutable size

    // Prompting for address input
    cout << "Enter your Full Address: ";

    // Reading input using getline()
    getline(cin, myAddress); 

    // Displaying entered address
    cout << "Full Address: " << myAddress << endl;

    // Creating a string
    string str = "My Address";

    // Output "Full AddressMy Address"
    cout << "String: " << str << endl;

    // Modifying string
    str.push_back('A'); // Append 'A'
    str.pop_back();     // Remove last character

    // Reversing a string
    reverse(str.begin(), str.end());

    // Output: sserdA yM
    cout << "Reversed string: " << str << endl;

    // *******************************//
    // using character array strings //
    // *******************************//

    // Finding length of character array
    int length = strlen(myName);

    // Reversing a character array (string)
    cout << "Reversed character array: ";
    for (int i = length - 1; i >= 0; --i) {
        cout << myName[i];
    }
    cout << endl;

    // Copying one character array to another
    char myName2[20];
    strcpy(myName2, myName);
    cout << "Copied character array: " << myName2 << endl;

    // Concatenating two character arrays
    strcat(myName2, myName); // Concatenating both strings

    // Output concatenated string
    cout << "Concatenated character array: " << myName2 << endl;

    // Comparing two character arrays
    int comparison = strcmp(myName, myName2); // Returns 0 if true equal else returns non-zero
    cout << "Comparison result: " << comparison << endl;

    // Converting character array to string
    string nameFromCharArray(myName);
    cout << "String from character array: " << nameFromCharArray << endl;

    // *******************************//
    // using string class              //
    // *******************************//

    // Creating strings
    string name = "Subham";
    string naam = " Deep";

    // Output: 6 6
    cout << "Size and length of string: " << name.size() << " " << name.length() << endl;

    // Replacing part of a string
    name.replace(0, 5, "Deep");
    cout << "Replaced string: " << name << endl;

    // Appending one string to another
    cout << "Appended string: " << name.append(naam) << endl;

    // Inserting a string into another at specific position
    name.insert(6, " Great");
    cout << "Inserted string: " << name << endl;

    // Finding substring
    size_t found = name.find("Great");//if not found returns npos
    if (found != string::npos) {
        cout << "Substring found at position: " << found << endl;
    } else {
        cout << "Substring not found" << endl;
    }

    // Removing part of string
    name.erase(5, 6); // Removing "Great" //remove from 5th index 6 chars
    cout << "After erasing: " << name << endl;

    // Clearing the string
    name.clear();
    cout << "String cleared: " << name << endl;

    return 0;
}
