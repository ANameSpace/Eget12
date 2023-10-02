#include "T8599.h"
#include <iostream>
#include <string>

/*
����������� �������� �������� �� ���� ������ ���� � ��������������� �.

���� ��������� ��� ���������:

������
���� �������(27) ��� �������(377) ��� �������(777)
   ���� �������(27)
    �� ��������(27, 32)
  ����� ����
  ���� �������(377)
    �� ��������(377, 27)
  ����� ����
  ���� �������(777)
    �� ��������(777, 3)
  ����� ����
����� ����
�����
�� ���� ���������� ���� ��������� ��������� ������, ������������ � ����� 3, � ����� n ������ ������ ���� 7.

���������� ���������� �������� n  [10; 100), ��� ������� ����� �������� �������� ���� ������, ������������ � ���������� ���������� ���������, ������ 22.
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
