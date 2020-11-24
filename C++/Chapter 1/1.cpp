#include <iostream>

int main(){
    std::cout<<"Sum of numbers divided by 3 and 5"<<std::endl;
    
    unsigned int limit;
    std::cin>>limit;

    unsigned long long sum = 0;
    for(unsigned int i=3; i<limit; i++){
        if (i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
    }
    
    std::cout<< "Sum = " << sum << std::endl;
}
