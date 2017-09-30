#include <iostream>



namespace my_name_space1{
        void print(int a){
                std::cout << a;
        }
}
namespace my_name_space2{
        void print(int a){
                std::cout<<a;
        }
}


int main(){

my_name_space1::print(12);
my_name_space2::print(12);

return 0;

}
~         
