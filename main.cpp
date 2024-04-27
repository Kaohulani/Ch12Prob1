#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void displayHead(const string& fileName) {
    ifstream file(fileName);
    if (!file.is_open()) {
        cout << "File not found." << endl;
        return;
    }

    string line;
    int lineCount = 0;
    while (getline(file, line) && lineCount < 10) {
        cout << line << endl;
        lineCount++;
    }

    if (lineCount < 10) {
        cout << "The entire file has been displayed." << endl;
    }

    file.close();
}

int main() {
    string fileName;
    cout << "Enter the name of the file: ";
    getline(cin, fileName);

    displayHead(fileName);

    return 0;
}
