#include <iostream>
#include <string>
#include <vector>
#include "inputParser.h"
#include "execute.h"

using namespace std;
int main(){
    while(true) {
        printf(" $ ");
        string input;
        getline(cin, input);

        vector<string> parsedInput = parser(input);
        cout << executeCommand(parsedInput) << endl;
    }
}