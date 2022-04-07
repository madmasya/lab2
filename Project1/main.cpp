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
		cout << "С каким заданием вы хотите работать?\n" << "1) - Задание №1\n" << "2) - Задание №2\n\n" << "0 - Выход\n";
		choice = _getch();
		switch (choice)
		{
		case '1':
		{
			system("cls");
			cout << "===Циклический односвязный список===\n\n";
			CyclicLinkList list;
			cout << "\nСписок успешно создан!\n\n";
			system("pause");

			char choice1 = '1';
			while (choice1 != '0')
			{
				system("cls");
				cout << "1) - Добавление одного элемента в список." << endl << "2) - Добавление двух элементов в список" << endl << "3) - Удаление одного элемента из списка.";
				cout << endl << "4) - Удаление двух элементов из списка." << endl << "5) - Вывод списка на экран." << endl << "0) - Выход в меню.\n";
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
					cout << "Неверный ввод!\n";
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
			cout << "===Габариты===\n\nВведите габариты объекта\n\n";
			Gabarites gabarites;
			cout << "\nОбъект успешно создан!\n\n";
			system("pause");

			char choice2 = '1';
			while (choice2 != '0')
			{
				system("cls");
				cout << "1) - Оператор \"+\"." << endl << "2) - Оператор \"+=\"." << endl << "3) - Оператор \"-\"." << endl << "4) - Оператор \"-=\"." << endl << "5) - Оператор \"*\"." << endl
					<< "6) - Оператор \"*=\"." << endl << "7) - Оператор \"\\\"." << endl << "8) - Оператор \"\\=\"." << endl << "9) - Вывести габариты объекта." << endl << "0) - Выход в меню.\n";
				choice2 = _getch();
				switch (choice2)
				{
				case('1'):
				{
					system("cls");
					cout << "Введите измерения, которые хотите прибавить к измерениям изначального объекта: \n\n";
					Gabarites g2;
					gabarites = gabarites + g2;
					cout << "\nПреобразования выполнены успешно!\n"; system("pause");
					break;
				}
				case('2'):
				{
					system("cls");
					cout << "Введите число, которое хотите прибавить ко всем измерениям изначального объекта: \n\n";
					float num;
					cin >> num;
					Gabarites g2(num);
					gabarites += g2;
					cout << "\nПреобразования выполнены успешно!\n"; system("pause");
					break;
				}
				case('3'):
				{
					system("cls");
					cout << "Введите измерения, которые хотите вычесть из измерений изначального объекта: \n\n";
					Gabarites g2;
					gabarites = gabarites - g2;
					cout << "\nПреобразования выполнены успешно!\n"; system("pause");
					break;
				}
				case('4'):
				{
					system("cls");
					cout << "Введите число, которое хотите отнять от всех измерений изначального объекта: \n\n";
					float num;
					cin >> num;
					Gabarites g2(num);
					gabarites -= g2;
					cout << "\nПреобразования выполнены успешно!\n"; system("pause");
					break;
				}
				case('5'):
				{
					system("cls");
					cout << "Введите измерения, на которые хотите умножить измерения изначального объекта: \n\n";
					Gabarites g2;
					gabarites = gabarites * g2;
					cout << "\nПреобразования выполнены успешно!\n"; system("pause");
					break;
				}
				case('6'):
				{
					system("cls");
					cout << "Введите число, на которое хотите умножить все измерения изначального объекта: \n\n";
					float num;
					cin >> num;
					Gabarites g2(num);
					gabarites *= g2;
					cout << "\nПреобразования выполнены успешно!\n"; system("pause");
					break;
				}
				case('7'):
				{
					system("cls");
					cout << "Введите измерения, на которые хотите поделить измерения изначального объекта: \n\n";
					Gabarites g2;
					gabarites = gabarites / g2;
					cout << "\nПреобразования выполнены успешно!\n"; system("pause");
					break;
				}
				case('8'):
				{
					system("cls");
					cout << "Введите число, на которое хотите поделить все измерения изначального объекта: \n\n";
					float num;
					cin >> num;
					Gabarites g2(num);
					gabarites /= g2;
					cout << "\nПреобразования выполнены успешно!\n"; system("pause");
					break;
				}
				case('9'):
				{
					system("cls");
					cout << "Габариты Вашего объекта:\n\n";
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
					cout << "Неверный ввод!\n";
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
			cout << "Неверный ввод!\n";
			system("pause");
			break;
		}
		}
	}
	system("cls");
	cout << "До свидания!\n";
	return 0;
}