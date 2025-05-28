#include <iostream>
#include <vector>

void print_uppercase(){
            for( unsigned char i{65}; i< 255 ; ++i){
                
            //Don't modify anything above thie line
            //Your code goes below this line
            
            std::cout << i;
            std::cout << " ";
            if (i == 0x5A)
            {
                break;
            }
            

            //Your code goes above this line
            //Don't modify anything after this line
        }
}


void print_value(){
            for(auto value : {1,2,3,4,5,6,7,8,9,10}){
                
            std::cout << "value :" << value << std::endl;

        }
}


void print_multiples_of_3(){
    
    
    std::vector<int> numbers {1,21,4,5,7,3,9,3,5,17,15};    

    //Don't modify anything above this line
    //Your code should go below this line
    
    for (int number : numbers) {
        if (number % 3 == 0) {
        std::cout << number << std::endl;
    }
}

    //Your code should go above this line
    //Don't modify anything below this line
    
}

int main(){

    print_multiples_of_3();

    // std::cout << std::endl;
    // print_uppercase();
    // std::cout << std::endl;
    // print_value();

    return 0;
}