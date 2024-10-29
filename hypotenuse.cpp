#include <iostream>
#include <cmath>
int main (){
    int x ;
    int y ;
    int z ;
    std::cout << "What is the x side : " ;
    std::cin >> x ;
    std::cout << "What is the y side : " ;
    std::cin >> y ;
    z = sqrt(x*x+y*y) ;
    std::cout << "Hypotenuse is :" << z ;
    return 0 ;
}