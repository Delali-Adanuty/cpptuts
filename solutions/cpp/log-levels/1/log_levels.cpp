#include <string>
#include <iostream>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int starting_index = line.find(": ");
    
    return line.substr(starting_index + 2);
}

std::string log_level(std::string line) {
    // return the log level
    int starting_index = line.find("[");
    int end_index = line.find("]");
    return line.substr(starting_index+1, end_index-1);
}

std::string reformat(std::string line) {
    // return the reformatted message
    
    return log_line::message(line) + " (" + log_line::log_level(line) + ")";
    
}
}  // namespace log_line
