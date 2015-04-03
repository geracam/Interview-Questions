/** 
stringSeparator.cpp: Gerardo Camarena Gomez

==========PROBLEM==========

Concatenate strings using a specific separator

Example:

myConcat(["Code","Fight","On","!"],"/")="Code/Fight/On/!/"

[input] : an array of strings

[input] : the separator

[output]: string

concatenated version of the strings from arguments using the separator
**/
#include <iostream>
#include <vector>
#include <string>


std::string myConcat(std::vector<std::string> arguments, std::string separator) {
    
    std::string result = "";
    for (int i = 0; i < arguments.size(); i++) {
        result += arguments[i] + separator;
    }
    return result;
}

int main() {
    // Unit Tests
    std::vector<std::string> testArray1 = {"Code","Fight","On","!"};
    std::vector<std::string> testArray2 = {"This","Code","Works","?"};
    std::string test1 = myConcat(testArray1,"/");
    std::string test2 = myConcat(testArray2,"&");
    std::cout << test1 << std::endl;
    std::cout << test2 << std::endl;
}
