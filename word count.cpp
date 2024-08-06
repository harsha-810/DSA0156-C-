#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
int main() {
    string input;
    cout << "Enter a paragraph: ";
    getline(cin, input);
    int spaceCount = count(input.begin(), input.end(), ' ');
    int wordCount = spaceCount + 1;
    cout << "Number of words: " << wordCount << endl;
}

