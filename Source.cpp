#include <iostream>
#include "Source.h"

void answer_choices(){
    std::cout << "A. Rarely" << std::endl;
    std::cout << "B. Sometimes" << std::endl;
    std::cout << "C. Often" << std::endl;
};

int main(){
    std::cout << "Hello world" << std::endl; // hi

    std::cout << "Welcome" << std::endl;

    

    int creativeScore = 0;
    int organizationScore = 0;
    int extraversionScore = 0;
    int kindnessScore = 0;
    int sensitivityScore = 0;
    std::string answer;

    std::cout << "1. I like trying new things and exploring unusual ideas." << std::endl;
    answer_choices();

    std::cin >> answer;

    if (answer == "b"){
        creativeScore += 1;
    }
    if (answer == "c"){
        creativeScore += 2;
    }

    std::cout << "2. I enjoy art, music, or creative hobbies.." << std::endl;
    answer_choices();

    std::cin >> answer;

    if (answer == "b"){
        creativeScore += 1;
    }
    if (answer == "c"){
        creativeScore += 2;
    }

    std::cout << "3. I have a very vivid imagination." << std::endl;
    answer_choices();

    std::cin >> answer;

    if (answer == "b"){
        creativeScore += 1;
    }
    if (answer == "c"){
        creativeScore += 2;
    }

    std::cout << "4. I prefer working on abstract concepts over plain facts." << std::endl;
    answer_choices();

    std::cin >> answer;

    if (answer == "b"){
        creativeScore += 1;
    }
    if (answer == "c"){
        creativeScore += 2;
    }



    return 0;
}