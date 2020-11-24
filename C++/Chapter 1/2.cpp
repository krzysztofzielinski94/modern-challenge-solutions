#include <iostream>
#include <numeric>

int nr_gcd(unsigned int a, unsigned int b){
    while (b != 0){
        unsigned int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}


int r_gcd(unsigned int const a, unsigned int const b){
    return b == 0? a: r_gcd(b, a % b);
}


int main(){
    std::cout << "Greatest maximum divided" << std::endl;
    std::cout << "Input a = ";
    unsigned int a;
    std::cin >> a;
    unsigned int b;
    std::cout << "Input b = ";
    std::cin >> b;

    // std::cout << "GCD (a,b) " << gcd(a, b);<< std::endl; // C++ 17
    std::cout << "GCD (a,b) " << r_gcd(a, b) << std::endl;
    std::cout << "GCD (a,b) " << nr_gcd(a, b) << std::endl;
    
}
