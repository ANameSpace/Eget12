#include <iostream>
#include "./tasks/T8671.h"
#include "./tasks/T8599.h"
#include "./tasks/T8672.h"

int main(){
	while (true){
		std::cout << "Select the task number:\n";
		int i;
		std::cin >> i;
		switch (i){
			case 8671:
				T8671::start();
				continue;
			case 8599:
				T8599::start();
				continue;
			case 8672:
				T8672::start();
				continue;
			default:
				std::cout << "number not found, exit\n";
				break;
		}
		break;

	}
    
}
