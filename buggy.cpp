#include <cstdlib>
#include <unistd.h>
#include <ctime>
#include <cstdlib>
#include <ctime>

int main() {
	int *i = 0x0;
	std::srand(std::time(NULL));
	double num = static_cast<double>(std::rand()) / RAND_MAX;
	if (num > 0.85){
	*i = 10;	
	}
}
