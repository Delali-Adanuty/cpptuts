#include "raindrops.h"
#include <string>

namespace raindrops {

// TODO: add your solution here
    std::string convert(int num){
        std::string result = "";
        if (num % 3 == 0){
            result = result + "Pling";
        }
        if (num % 5 == 0){
            result = result + "Plang";
        }
        if (num % 7 == 0){
            result = result + "Plong";
        }
        if (num % 7 != 0 && num % 3 != 0 && num % 5 != 0){
            result = result + std::to_string(num);
        }

        return result;
    }
    

}  // namespace raindrops
