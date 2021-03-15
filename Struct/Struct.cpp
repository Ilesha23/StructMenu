#include <iostream>
#include <iomanip>
#include <fstream>
#include <random>
#include <string>
#include <Windows.h>
#include "Functions.h"
using namespace std;

int main()
{
	Lilac();
	auto size = 0;
	cout << "Enter size of struct" << endl;
	cin >> size;
	system("cls");
	auto* arr = new book[size];
	auto a = 0;
	auto b = 0;
	CreateStruct(arr, size);
	Print(arr, size);

labelSwitch:
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
		}
		out << endl;
		goto labelSwitch;
		break;

		case 2:
		{
			system("cls");
			Lilac();
			cout << endl << "SORTED by author backward:" << endl << endl;
			SortBackAuthor(arr, size);
			Print(arr, size);
			cout << endl;
		}
		out << endl;
		goto labelSwitch;
		break;

		case 3: system("cls");
			Lilac();
			Print(arr, size);
			cout << endl;
			goto labelSwitch;

		case 4: White();
			return false;
		}
		out.close();
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
		}
		out << endl;
		goto labelSwitch;
		break;

		case 2:
		{
			system("cls");
			Lilac();
			cout << endl << "SORTED by name backward:" << endl << endl;
			SortBackNumber(arr, size);
			Print(arr, size);
			cout << endl;
		}
		out << endl;
		goto labelSwitch;
		break;

		case 3: system("cls");
			Lilac();
			Print(arr, size);
			cout << endl;
			goto labelSwitch;

		case 4: White();
			return false;
		}
		out.close();
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
		}
		out << endl;
		goto labelSwitch;
		break;

		case 2:
		{
			system("cls");
			Lilac();
			cout << endl << "SORTED by year backward:" << endl << endl;
			SortBackYear(arr, size);
			Print(arr, size);
			cout << endl;
		}
		out << endl;
		goto labelSwitch;
		break;

		case 3: system("cls");
			Lilac();
			Print(arr, size);
			cout << endl;
			goto labelSwitch;

		case 4: White();
			return false;
		}
		out.close();
	}
	
	case 4:
	{
		Green();
		FindAuthor(arr, size);
		goto labelSwitch;
		break;
		}
	case 5:
	{
		Green();
		FindNumber(arr, size);
		goto labelSwitch;
		break;
		}
	case 6:
	{
		Green();
		FindYear(arr, size);
		goto labelSwitch;
		break;
		}

	case 7:
	{
		Yellow();
		DeleteAuthor(arr, size);
		cout << endl;
		goto labelSwitch;
		break;
		}
	case 8:
	{
		Yellow();
		DeleteNumber(arr, size);
		cout << endl;
		goto labelSwitch;
		break;
		}
	case 9:
	{
		Yellow();
		DeleteYear(arr, size);
		cout << endl;
		goto labelSwitch;
		break;
		}
	
	case 10:
	{
		DeleteStruct(arr, size);
		goto labelSwitch;
		}
	case 11:
	{
		system("cls");
		Lilac();
		auto size = 0;
		cout << "Enter size of struct" << endl;
		cin >> size;
		auto* arr = new book[size];
		CreateStruct(arr, size);
		Print(arr, size);
		goto labelSwitch;
		}
	case 12:
	{
		White();
		EXIT_SUCCESS;
		}
	}
	White();
	return 0;
}