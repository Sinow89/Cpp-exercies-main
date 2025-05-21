#include <iostream>

int main(){

    std::cout << "Which day is it today? [1: Monday,..., 7: Sunday]" << std::endl;

    int today;
    int days_passed;

    std::cin >> today;

    switch (today)
    {
    case 1:
        std::cout << "Today is Monday" << std::endl;
        break;
    case 2:
        std::cout << "Today is Tuesday" << std::endl;
        break;
    case 3:
        std::cout << "Today is Wednesday" << std::endl;
        break;
    case 4:
        std::cout << "Today is Thursday" << std::endl;
        break;
    case 5:
        std::cout << "Today is Friday" << std::endl;
        break;
    case 6:
        std::cout << "Today is Saturday" << std::endl;
        break;
    case 7:
        std::cout << "Today is Sunday" << std::endl;
        break;
    default:
        std::cout << today << " is not a valid day. Bye!" << std::endl;
        return 0;
        break;
    }

    std::cout << "How many days have passed up to today : " << std::endl;
    std::cin >> days_passed;

    int normalized_diff = (days_passed %7);
    
    int day_in_the_past = today - normalized_diff;
    
    if(day_in_the_past < 0){
       day_in_the_past += 7;
    }

    std::cout << "If we went " << days_passed << " days in the past we would hit a ";
   
    if(day_in_the_past == 1){
        std::cout << "Monday" << std::endl;
    }else if(day_in_the_past == 2){
        std::cout << "Tuesday" << std::endl;
    }else if(day_in_the_past == 3){
        std::cout << "Wednesday" << std::endl;
    }else if(day_in_the_past == 4){
        std::cout << "Thursday" << std::endl;
    }else if(day_in_the_past == 5){
        std::cout << "Friday" << std::endl;
    }else if(day_in_the_past == 6){
        std::cout << "Saturday" << std::endl;
    }else{
        std::cout << "Sunday" << std::endl;
    }

    return 0;
}