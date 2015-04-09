/** 
stringValidator.cpp: Gerardo Camarena Gomez

==========PROBLEM==========
Correct variable names consist only of latin letters, digits and underscores and they can't start with a digit.

Check if the given string is a correct variable name.

Example

for "var_1__Int" output should be true,
for "qq-q" or "2w2" output should be false.
[input] string name

[output] boolean

true if name is a correct variable name, false otherwise
**/

#include <iostream>
#include <vector>
#include <string>

bool variableName(std::string name) {
    
    for (int i = 0; i < name.size(); i++) {
        if (!('a' <= name[i] && name[i] <= 'z' ||
              'A' <= name[i] && name[i] <= 'Z' ||
              '0' <= name[i] && name[i] <= '9' ||
              name[i] == '_')) {
            return false;
        }
    }
    
    if ('0' <= name[0] && name[0] <= '9') {
        return false;
    }
    
    return true;
}

int main() {
    bool test1 = variableName("var_1__Int");
    bool test2 = variableName("2w2");
    std::cout << test1 << std::endl;
    std::cout << test2 << std::endl;
}