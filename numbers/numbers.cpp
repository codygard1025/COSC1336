#include <iostream>

int main() {//initialize main
    //initialize variables

    //NOTE:
    //use int for whole numbers only, it might be better to just use float when you think you are going to work with decimals?
    //c++ apparantly does the conversion automatically, but just be sure to put a .0 at the end of every float I do.
    float numOne = 0.0;
    float numTwo = 1.0;
    bool samenumber = false;
    //change these in code
    float product = 0.0;
    float largest = 0.0;
    float smallest = 0.0;
    float sum = 0.0;
    float difference = 0.0;
    float ratio = 0.0;
    // input values//
    std::cout << "Please enter a number: " ;
    std::cin >> numOne;
    std::cout << "Please enter a second number: " ;
    std::cin >> numTwo;

    //do maths//
    product = numOne*numTwo;
    sum = numOne+numTwo;
    difference = numOne-numTwo;
    ratio = numOne/numTwo;
    //find smallest and largest//
    if(numOne == numTwo){//if the numbers are equal//
        samenumber = true;
    }else{
        if(numOne > numTwo){//if number one is greater then number two
            largest = numOne;
            smallest = numTwo;
        }else{//else
            largest = numTwo;
            smallest = numOne;
        }
    }
    ///////////////////////////
    ///give results to user////
    ///////////////////////////
    std::cout << "-------------------------------" << std::endl;
    std::cout << "------------Results------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << " " << std::endl;
    if(samenumber){
        std::cout << ">Inputs are equal to each other." << std::endl;
    }else{
        std::cout << ">Largest Input: " << largest << "." << std::endl;
        std::cout << ">Largest Input: " << smallest << "." << std::endl;
    }
    std::cout << " " << std::endl;
    std::cout << ">Sum: " << sum << std::endl;
    std::cout << ">Difference: " << difference << std::endl;
    std::cout << ">Product: " << product << std::endl;
    std::cout << ">Ratio: " << ratio << std::endl;
    std::cout << "-------------------------------" << std::endl;


    return 0;//always return something
}