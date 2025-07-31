#include <iostream>
#include <string>

namespace log_line {
std::string message(std::string line) {
    int ind = line.find(": ");
    return line.substr(ind + 2);
}

std::string log_level(std::string line) {
    int start = line.find("[");
    int end = line.find("]");
    
    return line.substr(start + 1, end - start - 1);
}

std::string reformat(std::string line) {
     return message(line) + " (" + log_level(line) + ")";
}
}  // namespace log_line
