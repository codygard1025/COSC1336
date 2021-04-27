#include <iostream>

int main(){
    
    int number = 9;
    bool isPrime = true;

    for(int number = 1; number <= 10000; number++){
        isPrime = true;
        if(number == 0 || number == 1){
            isPrime = false;
        }else{
            for(int i = 2; i <= number / 2; i++){
                if(number % i == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime){
                std::cout << number << " is " << (isPrime ? "a ": "not a ") << "prime number." << std::endl;  
            }
        }
    }

    return 0;
}