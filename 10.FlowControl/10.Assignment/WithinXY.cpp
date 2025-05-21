#include <iostream>

int main(){

    int x_pos, y_pos;

    std::cout << "Welcome to territory control. Please type in your x and y position." << std::endl;
    std::cout << "Type in your x position :" << std::endl;
    std::cin >> x_pos;
    std::cout << "Type in your y position :" << std::endl;
    std::cin >> y_pos;

    if (x_pos >= -10 && x_pos <= 10)
    {    
        if(y_pos >= -5 && y_pos <= 5){
            std::cout << "You are complety surounded. Don't move!" << std::endl;
        }
        else{
            std::cout << "You're out of reach!" << std::endl;
        }
    }
    else{
        std::cout << "You're out of reach!" << std::endl;
    }
}