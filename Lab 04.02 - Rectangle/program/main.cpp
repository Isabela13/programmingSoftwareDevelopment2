#include "rectangle.h"
#include <iostream>

int main(){
    std::cout << "Use o main para testar seu código" << std::endl;

    Rectangle rectangle = Rectangle();
    rectangle.set_height(0.25);
    rectangle.set_width(0.25);
    std::cout << rectangle.get_area();
    std::cout << rectangle.get_perimeter();
    
    

    return 0;
}