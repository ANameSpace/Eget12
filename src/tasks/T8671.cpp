#include "T8671.h"
#include <iostream>
#include <string>

/*
������
���� ������� (46) ��� ������� (666)
  ���� ������� (46)
    �� �������� (46, 5)
  ����� ����
  ���� ������� (666)
    �� �������� (666, 4)
  ����� ����
����� ����
�����
�� ���� ���������� ���� ��������� ��������� ������, ������������ � ����� "4", � ����� ���������� m ���� "6" (m > 0).
���������� ���������� �������� m, ��� ������� ����� ���� � ������, ������������ � ���������� ���������� ���������, ������ 1000.
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
