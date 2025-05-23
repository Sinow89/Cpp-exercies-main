#include <iostream>

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

int main(){

    std::cout << std::endl;
    print_uppercase();
    std::cout << std::endl;
    print_value();

    return 0;
}