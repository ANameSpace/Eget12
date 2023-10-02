#include <iostream>
#include "./tasks/T8671.h"

int main(){
	while (true){
		std::cout << "Select the task number:\n";
		int i;
		std::cin >> i;
		switch (i){
			case 8671:
				T8671::start();
				continue;
			default:
				std::cout << "number not found, exit\n";
				break;
		}
		break;

	}
    
}
