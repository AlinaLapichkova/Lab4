#include <Windows.h>
#include <iostream>
#include "stdio.h"
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double c = 0, n;
    cout << " ������� ���������� ������ ������������������(n > 0) n = ";
    cin >> n;
    bool firfirtest = true;
    while (n <= 0 || n != int(n) || !firfirtest == cin.good())
    {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "\n ������� ���������� ������ ������������������ (n > 0) n = ";
        cin >> n;
    }
    while (c == 0) {
        cout << "\n �������� ����������� ��������:\n 1. ������� 1\n 2. ������� 2\n 3. ��������� ������\n\n ������� ��������� �����: ";
        cin >> c;
        bool firtest = true;
        while (c < 1 || c > 3 || c != int(c) || !firtest == cin.good()) {
            cin.clear();
            cin.ignore(255, '\n');
            cout << "\n �� ����� ������������ ������.\n ������� ����� ����� �� 1 �� 3 : ";
            cin >> c;
        }
        if (c == 1) {
            double x;
            bool test = true;
            do {
                cout << " ������� x ��� ���������� ��������� ����� ���� (x > 1) x = ";
                cin >> x;
                if (!test == cin.good() || x <= 1) {
                    system("cls");
                    cout << "\n\t ������ ����� (x > 1)\n ";
                    cin.clear();
                    cin.ignore(255, '\n');
                }
                else
                    test = false;
            } while (test);
            double a, m, h;
            double fact = 1;
            a = -1;
            m = 0;
            h = 1;
            double sum1 = 0;
            double sum = 0;
            int j;
            for (int i = 1; i <= n; i++) {
                for (j = 0; j < 2 * i; j++) { //���������
                    j++;
                    sum1 = static_cast<double>(1) / j;
                    fact *= sum1;
                    j--;
                }
                a *= -1;
                m = (x * x);
                h *= m;
                sum += (a * h * fact);
                if (i != n) { //��������� ���� ����
                    fact = 1;
                }
            }
            double s;
            s = 1 - sum;
            cout << "\n ����� ���� s = " << setprecision(11) << s << " \n";
            double r;
            r = cos(x) - s;
            cout << " ���������� ����������� ����� r = " << abs(r) << "\n";
            double p = a * h * fact;
            cout << " ���������� �������� ���������� ���������� p = " << abs(p) << "\n\n";
            if (abs(r) > abs(p)) {
                cout << " ���������� ����������� ������ ���������� �������� ���������� ����������\n";
            }
            else if (abs(p) > abs(r)) {
                cout << " ���������� �������� ���������� ���������� ������ ���������� �����������\n";
            }
            else cout << " ���������� ����������� ����� ���������� �������� ���������� ����������\n";
            c = 0;
        }
        else if (c == 2) {

            double x, E;
            bool test = true;
            do {
                cout << "\n ������� �������� ���������� � = ";
                cin >> E;
                cout << " \n ������� x ��� ���������� ��������� ����� ���� (x > 1) x = ";
                cin >> x;
                if (!test == cin.good() || x <= 1) {
                    system("cls");
                    cout << "\n\t ������ ����� (x > 1; n > 0)\n";
                    cin.clear();
                    cin.ignore(255, '\n');
                   
                }
                else
                    test = false;
            } while (test);
            double a, m, h;
            double fact = 1;
            a = -1;
            m = 0;
            h = 1;
            double sum1 = 0;
            double summ = 0;
            int j;
            double sum = 0, sum2 = 0, k = 0, d = 0;
            for (int i = 1; i <= n; i++) {
                for (j = 0; j < 2 * i; j++) {
                    j++;
                    sum1 = static_cast<double>(1) / j;
                    fact *= sum1;
                    j--;
                }
                a *= -1;
                m = (x * x);
                h *= m;
                summ = (a * h * fact);
                if (i != n) {
                    fact = 1;
                }
                if (abs(summ) > E) {
                    sum += summ;
                    k++;
                }
                if (abs(summ) > E * 10) {
                    sum2 += summ;
                    d++;
                }
            }
            if ((sum != 0) && (sum2 != 0)) {
                if (1 > E * 10) {
                    sum = 1 - sum;
                    sum2 = 1 - sum2;
                    k++;
                    d++;
                }
                cout << "\n ����� ��������� ������� ��� � ����� sum = " << sum << "\n ���-�� ����� ��������� k = " << k << "\n\n";
                cout << " ����� ��������� ������� ��� �*10 (� ���������� �� �������) ����� sum2 = " << sum2 << "\n ���-�� ����� ��������� d = " << d << "\n\n";
            }
            else if ((sum != 0) && (sum2 == 0)) {
                if (1 > E * 10) {
                    sum = 1 - sum;
                    sum2 = 1 - sum2;
                    k++;
                    d++;
                    cout << "\n ����� ��������� ������� ��� � ����� sum = " << sum << "\n ���-�� ����� ��������� k = " << k << "\n\n";
                    cout << " ����� ��������� ������� ��� �*10 (� ���������� �� �������) ����� sum2 = " << sum2 << "\n ���-�� ����� ��������� d = " << d << "\n\n";
                }
                else if (1 > E) {
                    sum = 1 - sum;
                    cout << "\n ����� ��������� ������� ��� � ����� sum = " << sum << "\n ���-�� ����� ��������� k = " << k << "\n\n";
                    cout << " ��������� ������� ��� �*10 (E ���������� �� �������) �� �������\n\n";
                }
            }
            else if ((sum == 0) && (sum2 == 0)) {
                if (1 > E * 10) {
                    sum = sum2 = 1;
                    k = d = 1;
                    cout << "\n ����� ��������� ������� ��� � ����� sum = " << sum << "\n ���-�� ����� ��������� k = " << k << "\n\n";
                    cout << " ����� ��������� ������� ��� �*10 (� ���������� �� �������) ����� sum2 = " << sum2 << "\n ���-�� ����� ��������� d = " << d << "\n\n";
                }
                else if (1 > E) {
                    sum = 1;
                    k = 1;
                    cout << "\n ����� ��������� ������� ��� � ����� sum = " << sum << "\n ���-�� ����� ��������� k = " << k << "\n\n";
                    cout << " ��������� ������� ��� �*10 (E ���������� �� �������) �� �������\n\n";
                }
                else
                    cout << "\n ��������� ������� ��� � � �*10 (������������ �� �������) �� �������\n\n";
            }
            c = 0;
        }
        else if (c == 3) {
            return 0;
        }
    }
}