#include <Windows.h>
#include <conio.h>
#include "cycliclinklist.h"
#include "gabarites.h"

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	system("chcp 1251");
	char choice;
	bool exit = false;
	while (exit != true)
	{
		system("cls");
		cout << "� ����� �������� �� ������ ��������?\n" << "1) - ������� �1\n" << "2) - ������� �2\n\n" << "0 - �����\n";
		choice = _getch();
		switch (choice)
		{
		case '1':
		{
			system("cls");
			cout << "===����������� ����������� ������===\n\n";
			CyclicLinkList list;
			cout << "\n������ ������� ������!\n\n";
			system("pause");

			char choice1 = '1';
			while (choice1 != '0')
			{
				system("cls");
				cout << "1) - ���������� ������ �������� � ������." << endl << "2) - ���������� ���� ��������� � ������" << endl << "3) - �������� ������ �������� �� ������.";
				cout << endl << "4) - �������� ���� ��������� �� ������." << endl << "5) - ����� ������ �� �����." << endl << "0) - ����� � ����.\n";
				choice1 = _getch();
				switch (choice1)
				{
				case('1'):
				{
					system("cls");
					++list;
					system("pause");
					break;
				}
				case('2'):
				{
					system("cls");
					list++;
					system("pause");
					break;
				}
				case('3'):
				{
					system("cls");
					--list;
					system("pause");
					break;
				}
				case('4'):
				{
					system("cls");
					list--;
					system("pause");
					break;
				}
				case('5'):
				{
					system("cls");
					list.display();
					system("pause");
					break;
				}
				case('0'):
				{
					break;
				}
				default:
				{
					system("cls");
					cout << "�������� ����!\n";
					system("pause");
					break;
				}
				}
			}
			break;
		}
		case '2':
		{
			system("cls");
			cout << "===��������===\n\n������� �������� �������\n\n";
			Gabarites gabarites;
			cout << "\n������ ������� ������!\n\n";
			system("pause");

			char choice2 = '1';
			while (choice2 != '0')
			{
				system("cls");
				cout << "1) - �������� \"+\"." << endl << "2) - �������� \"+=\"." << endl << "3) - �������� \"-\"." << endl << "4) - �������� \"-=\"." << endl << "5) - �������� \"*\"." << endl
					<< "6) - �������� \"*=\"." << endl << "7) - �������� \"\\\"." << endl << "8) - �������� \"\\=\"." << endl << "9) - ������� �������� �������." << endl << "0) - ����� � ����.\n";
				choice2 = _getch();
				switch (choice2)
				{
				case('1'):
				{
					system("cls");
					cout << "������� ���������, ������� ������ ��������� � ���������� ������������ �������: \n\n";
					Gabarites g2;
					gabarites = gabarites + g2;
					cout << "\n�������������� ��������� �������!\n"; system("pause");
					break;
				}
				case('2'):
				{
					system("cls");
					cout << "������� �����, ������� ������ ��������� �� ���� ���������� ������������ �������: \n\n";
					float num;
					cin >> num;
					Gabarites g2(num);
					gabarites += g2;
					cout << "\n�������������� ��������� �������!\n"; system("pause");
					break;
				}
				case('3'):
				{
					system("cls");
					cout << "������� ���������, ������� ������ ������� �� ��������� ������������ �������: \n\n";
					Gabarites g2;
					gabarites = gabarites - g2;
					cout << "\n�������������� ��������� �������!\n"; system("pause");
					break;
				}
				case('4'):
				{
					system("cls");
					cout << "������� �����, ������� ������ ������ �� ���� ��������� ������������ �������: \n\n";
					float num;
					cin >> num;
					Gabarites g2(num);
					gabarites -= g2;
					cout << "\n�������������� ��������� �������!\n"; system("pause");
					break;
				}
				case('5'):
				{
					system("cls");
					cout << "������� ���������, �� ������� ������ �������� ��������� ������������ �������: \n\n";
					Gabarites g2;
					gabarites = gabarites * g2;
					cout << "\n�������������� ��������� �������!\n"; system("pause");
					break;
				}
				case('6'):
				{
					system("cls");
					cout << "������� �����, �� ������� ������ �������� ��� ��������� ������������ �������: \n\n";
					float num;
					cin >> num;
					Gabarites g2(num);
					gabarites *= g2;
					cout << "\n�������������� ��������� �������!\n"; system("pause");
					break;
				}
				case('7'):
				{
					system("cls");
					cout << "������� ���������, �� ������� ������ �������� ��������� ������������ �������: \n\n";
					Gabarites g2;
					gabarites = gabarites / g2;
					cout << "\n�������������� ��������� �������!\n"; system("pause");
					break;
				}
				case('8'):
				{
					system("cls");
					cout << "������� �����, �� ������� ������ �������� ��� ��������� ������������ �������: \n\n";
					float num;
					cin >> num;
					Gabarites g2(num);
					gabarites /= g2;
					cout << "\n�������������� ��������� �������!\n"; system("pause");
					break;
				}
				case('9'):
				{
					system("cls");
					cout << "�������� ������ �������:\n\n";
					gabarites.display(); cout << endl;
					system("pause");
					break;
				}
				case('0'):
				{
					break;
				}
				default:
				{
					system("cls");
					cout << "�������� ����!\n";
					system("pause");
					break;
				}
				}
			}
			break;
		}
		case '0':
		{
			exit = true;
			break;
		}
		default:
		{
			system("cls");
			cout << "�������� ����!\n";
			system("pause");
			break;
		}
		}
	}
	system("cls");
	cout << "�� ��������!\n";
	return 0;
}