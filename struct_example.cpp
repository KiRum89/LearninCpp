#include <iostream>




struct myclass{
	
	static int k;
	public:
		
		int i;		
		float price;
	private:
		int j;
	} a,b,c;

	int myclass::k= 13;
int main(){

	a.i = 12;
	std::cout << a.i<<std::endl;
	a.k = 15;

	std::cout << myclass::k<<std::endl;
	return 0;
}
