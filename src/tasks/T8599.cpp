#include "T8599.h"
#include <iostream>
#include <string>

/*
Исполнитель Редактор получает на вход строку цифр и преобразовывает её.

Дана программа для редактора:

НАЧАЛО
ПОКА нашлось(27) ИЛИ нашлось(377) ИЛИ нашлось(777)
   ЕСЛИ нашлось(27)
    ТО заменить(27, 32)
  КОНЕЦ ЕСЛИ
  ЕСЛИ нашлось(377)
    ТО заменить(377, 27)
  КОНЕЦ ЕСЛИ
  ЕСЛИ нашлось(777)
    ТО заменить(777, 3)
  КОНЕЦ ЕСЛИ
КОНЕЦ ПОКА
КОНЕЦ
На вход приведённой выше программе поступает строка, начинающаяся с цифры 3, а затем n подряд идущих цифр 7.

Определите наибольшее значение n  [10; 100), при котором сумма числовых значений цифр строки, получившейся в результате выполнения программы, кратна 22.
*/

void T8599::start() {
    int r = 0;
    for (int m = 10; m <= 100; m++) {
        std::string input = "3";
        std::string add(m, '7');
        int sum = 0;

        input += add;

        std::cout << m << " | input = " << input << std::endl;

        while (input.find("27") != std::string::npos || input.find("377") != std::string::npos || input.find("777") != std::string::npos) {
            if (input.find("27") != std::string::npos) {
                input.replace(input.find("27"), 2, "32");
            }
            if (input.find("377") != std::string::npos) {
                input.replace(input.find("377"), 3, "27");
            }
            if (input.find("777") != std::string::npos) {
                input.replace(input.find("777"), 3, "3");
            }
        }
        std::cout << m << " | replace = " << input << std::endl;

        for (char c : input) {
            sum += c - '0';
        }
        std::cout << m << " | sum = " << sum << std::endl;

        if (sum % 22 == 0) {
            r = m;
        }
    }
    std::cout << "8599 answer\n";
    std::cout << "Max m: " << r << std::endl;
}
