#include <iostream>

int gcd(unsigned int a, unsigned int b){
    return b == 0? a: gcd(b, a % b); 
}

int lcm(unsigned int a, unsigned int b){
    return a * b / gcd(a , b);
}

int main(){
    std::cout << "Lowes common multiple for 2 values" << std::endl;
    std::cout << "Input a: ";
    unsigned int a;
    std::cin >> a;
    std::cout << "Input b: ";
    unsigned int b;
    std::cin >> b;

    unsigned int result = lcm(a, b);
    std::cout << "lcm(a, b) = " << result << std::endl;

} 