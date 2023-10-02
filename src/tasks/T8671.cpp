#include "T8671.h"
#include <iostream>
#include <string>

/*
НАЧАЛО
ПОКА нашлось (46) ИЛИ нашлось (666)
  ЕСЛИ нашлось (46)
    ТО заменить (46, 5)
  КОНЕЦ ЕСЛИ
  ЕСЛИ нашлось (666)
    ТО заменить (666, 4)
  КОНЕЦ ЕСЛИ
КОНЕЦ ПОКА
КОНЕЦ
На вход приведённой выше программе поступает строка, начинающаяся с цифры "4", а затем содержащая m цифр "6" (m > 0).
Определите наименьшее значение m, при котором сумма цифр в строке, получившейся в результате выполнения программы, больше 1000.
*/

void T8671::start() {
    for (int m = 0; m < 100000; m++){
        std::string input = "4";
        std::string add(m, '5');
        int sum = 0;

        input += add;

        std::cout << m << " | input = " << input << std::endl;
        
        while (input.find("46") != std::string::npos || input.find("666") != std::string::npos) {
            if (input.find("46") != std::string::npos) {
                input.replace(input.find("46"), 2, "5");
            }
            if (input.find("666") != std::string::npos) {
                input.replace(input.find("666"), 3, "4");
            }
        }
        std::cout << m << " | replace = " << input << std::endl;

        for (char c : input) {
            sum += c - '0';
        }
        std::cout << m << " | sum = " << sum << std::endl;

        if (sum > 1000) {
            std::cout << "8671 answer\n";
            std::cout << "Minimum m: " << m << std::endl;
            break;
        }
    }
}
