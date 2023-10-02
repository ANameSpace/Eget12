#include "T8672.h"
#include <iostream>
#include <string>

/*
Дана программа для редактора:

НАЧАЛО
ПОКА нашлось (78) ИЛИ нашлось (888)
  ЕСЛИ нашлось (78)
    ТО заменить (78, 8)
  КОНЕЦ ЕСЛИ
  ЕСЛИ нашлось (888)
    ТО заменить (888, 7)
  КОНЕЦ ЕСЛИ
КОНЕЦ ПОКА
КОНЕЦ
На вход этой программе подаётся строка, которая начинается с цифры "7" и далее содержит p цифр "8", где p ? 1000.
Необходимо определить, для скольких значений p, лежащих в пределах от 1000 до 2000, сумма цифр в строке, полученной после выполнения программы, будет равна 16.
*/

void T8672::start() {
    int c = 0;
    for (int m = 1000; m <= 2000; m++) {
        std::string input = "7";
        std::string add(m, '8');
        int sum = 0;

        input += add;

        std::cout << m << " | input = " << input << std::endl;

        while (input.find("78") != std::string::npos || input.find("888") != std::string::npos) {
            if (input.find("78") != std::string::npos) {
                input.replace(input.find("78"), 2, "8");
            }
            if (input.find("888") != std::string::npos) {
                input.replace(input.find("888"), 3, "7");
            }
        }
        std::cout << m << " | replace = " << input << std::endl;

        for (char c : input) {
            sum += c - '0';
        }
        std::cout << m << " | sum = " << sum << std::endl;
        std::cout << "-----\n";
        if (sum == 16) {
            c++;
        }
    }
    std::cout << "8672 answer\n";
    std::cout << "Count m: " << c << std::endl;
}
