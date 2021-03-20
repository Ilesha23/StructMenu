#include <iostream>
#include <iomanip>
#include <fstream>
#include <random>
#include <string>
#include <Windows.h>
#include <limits>
#include "Functions.h"
using namespace std;

int main()
{
	Lilac();
	auto size = 0;
	cout << "Enter size of struct: ";
	cin >> size;
	system("cls");
	auto* arr = new book[size];
	auto a = 0;
	auto b = 0;

	CreateStruct(arr, size);
	Print(arr, size);

	for (bool exit = 0; exit < 1;)
	{
		CallMenu();
		cin >> a;
			switch (a)
			{
			case 1:
			{
				system("cls");
				Blue();
				fstream out;
				out.open("in.txt", ofstream::out | ofstream::trunc);
				cout << "forward - 1\nbackward - 2\nmenu - 3\nexit - 4" << endl;
				cin >> b;

				switch (b)
				{
					system("cls");
				case 1:
				{
					system("cls");
					Lilac();
					cout << endl << "SORTED by author forward:" << endl << endl;
					SortForwAuthor(arr, size);
					Print(arr, size);
					cout << endl;
					break;
				}
				out << endl;
				break;

				case 2:
				{
					system("cls");
					Lilac();
					cout << endl << "SORTED by author backward:" << endl << endl;
					SortBackAuthor(arr, size);
					Print(arr, size);
					cout << endl;
					break;
				}
				out << endl;
				break;

				case 3: system("cls");
					Lilac();
					Print(arr, size);
					cout << endl;
					break;

				case 4: White();
					return false;
					break;
				}
				out.close();
				break;
			}
			case 2:
			{
				system("cls");
				Blue();
				fstream out;
				out.open("in.txt", ofstream::out | ofstream::trunc);
				cout << "forward - 1\nbackward - 2\nmenu - 3\nexit - 4" << endl;
				cin >> b;
				switch (b)
				{
				case 1:
				{
					system("cls");
					Lilac();
					cout << endl << "SORTED by number forward:" << endl << endl;
					SortForwNumber(arr, size);
					Print(arr, size);
					cout << endl;
					break;
				}
				out << endl;
				break;

				case 2:
				{
					system("cls");
					Lilac();
					cout << endl << "SORTED by number backward:" << endl << endl;
					SortBackNumber(arr, size);
					Print(arr, size);
					cout << endl;
					break;
				}
				out << endl;
				break;

				case 3: system("cls");
					Lilac();
					Print(arr, size);
					cout << endl;
					break;

				case 4: White();
					return false;
					break;
				}
				out.close();
				break;
			}
			case 3:
			{
				system("cls");
				Blue();
				fstream out;
				out.open("in.txt", ofstream::out | ofstream::trunc);
				cout << "forward - 1\nbackward - 2\nmenu - 3\nexit - 4" << endl;
				cin >> b;
				switch (b)
				{
				case 1:
				{
					system("cls");
					Lilac();
					cout << endl << "SORTED by year forward:" << endl;
					SortForwYear(arr, size);
					Print(arr, size);
					cout << endl;
					break;
				}
				out << endl;
				break;

				case 2:
				{
					system("cls");
					Lilac();
					cout << endl << "SORTED by year backward:" << endl << endl;
					SortBackYear(arr, size);
					Print(arr, size);
					cout << endl;
					break;
				}
				out << endl;
				break;

				case 3: system("cls");
					Lilac();
					Print(arr, size);
					cout << endl;
					break;

				case 4: White();
					return false;
				}
				out.close();
				break;
			}

			case 4:
			{
				Green();
				FindAuthor(arr, size);
				break;
			}
			case 5:
			{
				Green();
				FindNumber(arr, size);
				break;
			}
			case 6:
			{
				Green();
				FindYear(arr, size);
				break;
			}

			case 7:
			{
				Yellow();
				DeleteAuthor(arr, size);
				cout << endl;
				break;
			}
			case 8:
			{
				Yellow();
				DeleteNumber(arr, size);
				cout << endl;
				break;
			}
			case 9:
			{
				Yellow();
				DeleteYear(arr, size);
				cout << endl;
				break;
			}

			case 10:
			{
				DeleteStruct(arr, size);
				arr = new book[size];
				break;
			}
			case 11:
			{
				system("cls");
				Lilac();
				auto size = 0;
				cout << "Enter size of struct: ";
				cin >> size;
				auto* arr = new book[size];
				CreateStruct(arr, size);
				Print(arr, size);
				break;
			}
			case 12:
			{
				cout << "Author - 1\nNumber - 2\nYear - 3\nMenu - 4\nEnter: ";
				cin >> b;
				switch (b)
				{
				case 1:
				{
					EditName(arr, size);
					system("cls");
					Print(arr, size);
					break;
				}
				case 2:
					EditNum(arr, size);
					system("cls");
					Print(arr, size);
					break;
				case 3:
					EditYear(arr, size);
					system("cls");
					Print(arr, size);
					break;
				case 4:
					Lilac();
					Print(arr, size);
					cout << endl;
					break;
				}
				break;
			}
			case 13:
			{
				Add(arr, size);
				Print(arr, size);
				break;
			}
			case 14:
			{
				White();
				exit = 1;
				break;
			default:
				cout << "error";
				break;
			}
		}
	}
	White();
	return 0;
}