#include <iostream>

bool is_prime(unsigned int number){
    if (number <= 3){
        return number>1? true: false;
    }
    
    int range_number = [];

    return true;
}

void show_prime_number_lower_than(unsigned int number){
    for(unsigned int i=number-1; 1; i--){
        if (is_prime(i)){
            std::cout << "The greatest prime number lower than input = " << i << std::endl;
            break;
        }
        
    }

}

int main(){
    std::cout << "The greates prime number lowest than input value" << std::endl;
    std::cout << "Input number: " << std::endl;
    double number;
    std::cin >> number;
    show_prime_number_lower_than(number);
}