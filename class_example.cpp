#include <iostream>

class SomeClass
{
int a,b;

public:
	SomeClass(int,int); 
	int multiply(void){
		return a*b;
	}
};


SomeClass::SomeClass(int aa, int bb){
	a = aa;
	b=bb;
	}
int main(){
	
	SomeClass m (2,4);
	std::cout <<  m.multiply();
	return 0;
}
