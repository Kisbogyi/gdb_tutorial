#include <iostream>
#include <ostream>

void randomfunc(){
	int *ptr = 0x0;
	for (int i = 0; i <= 10; i++){
		std::cout << "i: " << i << std::endl;
		if (i == 8) {
			*ptr = 10;
		}
	}
}

int main(void) {
	randomfunc();
}
