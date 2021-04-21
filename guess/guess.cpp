#include <iostream>

int main(){

    int correctNum = 55;
    int currentGuess = 50;
    int choice = 0;
    int choicer2 = 0;
    int upperbound = 100;
    int lowerbound = 0;
    bool foundnumber = false;

    int range[] = { 25, 15, 10, 5, 3, 2, 1 };
    
    std::cout << "Please enter a number between 0 and 100: " ;
    std::cin >> correctNum;

    if(correctNum > 100){
        correctNum = 100;
    }
    if(correctNum < 0){
        correctNum = 0;
    }
   
    for(int i = 0; i < 7; i++){
        
        if(currentGuess != correctNum){
            std::cout << "Is your number greater than " << currentGuess << "?" << std::endl;
            std::cout << "Enter (1) for Yes, Enter (2) for No." << std::endl;
            std::cin >> choice;
            if(choice <= 1){
                currentGuess += range[i];
            }else{
                currentGuess -= range[i];
            }
        }else{
            break;
        }
    }
    
    std::cout << "Your Number is " << currentGuess << "!" << std::endl;
    std::cout << "Thank You for Playing!" << std::endl;
    


    return 0;
}