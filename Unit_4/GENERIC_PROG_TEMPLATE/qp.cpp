#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string inputFileName = "input.txt";
    string outputFileName = "output.txt";

    ifstream inputFile(inputFileName);
    if (!inputFile) {
        cerr << "Failed to open input file: " << inputFileName << endl;
        return 1;
    }

    ofstream outputFile(outputFileName);
    if (!outputFile) {
        cerr << "Failed to create output file: " << outputFileName << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        outputFile << line << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "File contents copied successfully!" << endl;

    return 0;
}
ve