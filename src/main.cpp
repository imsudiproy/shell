#include <iostream>
#include <string>
#include <vector>
#include "inputParser.h"
#include "execute.h"
#include <filesystem>

using namespace std;

string getPathFromHome() {
    string str = filesystem::current_path();
    return str.substr(str.find_last_of("/"));
}

int main(){
    while(true) {

        //Show current directory
        cout << "[~" << getPathFromHome() << "]$ ";

        //take input
        string input;
        getline(cin, input);

        vector<string> parsedInput = parser(input);
        cout << executeCommand(parsedInput) << endl;
    }
    return 0;
}