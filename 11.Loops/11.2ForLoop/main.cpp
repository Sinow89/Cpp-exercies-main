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

int main(){


    print_uppercase();

    return 0;
}