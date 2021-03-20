#include <iostream>
#include <iomanip>
#include <fstream>
#include <random>
#include <string>
#include <Windows.h>
using namespace std;

struct book {
	string a;
	int n = 0;
	int g = 0;
};

string RandomString(size_t)
{
	const string CHARACTERS = "abcdefghijklmnopqrstuvwxyz";
	random_device random_device;
	mt19937 generator(random_device());
	uniform_int_distribution<> distribution(0, CHARACTERS.size() - 1);
	string random_string;
	for (size_t i = 0; i < 4; ++i)
	{
		random_string += CHARACTERS[distribution(generator)];
	}
	return random_string;
}

void Print(book* arr, int& size)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandle, 5);
	ofstream out;
	out.open("in.txt", ofstream::out | ofstream::trunc);
	system("cls");
	for (int i = 0; i < size; i++)
	{
		cout << "--------------------------" << endl;
		cout << "|" << setw(6) << arr[i].a << "  |" << setw(4) << arr[i].n << "  |" << setw(6) << arr[i].g << "  |" << endl;
		out << "------------------------------" << endl;
		out << "|" << setw(7) << arr[i].a << "\t|" << setw(5) << arr[i].n << "  |" << setw(6) << arr[i].g << "  |" << endl;
	}
	cout << "--------------------------" << endl << endl;
	out << "------------------------------";
}

void CreateStruct(book* arr, int size)
{
	system("cls");
	int p;
	cout << "Random \t\t- 1\nManually \t- 2" << endl;
	cin >> p;
	system("cls");
	ofstream out;
	out.open("in.txt", ofstream::out | ofstream::trunc);
	switch (p)
	{
	case 1:
		for (auto i = 0; i < size; i++)
		{
			arr[i].a = RandomString(size);
			arr[i].n = rand() % 90 + 10;
			arr[i].g = rand() % 100 + 1900;
		}
		break;
	case 2:
		for (auto i = 0; i < size; i++)
		{
			cout << i << " Author:\t";
			cin >> arr[i].a;
			cout << i << " Number:\t";
			cin >> arr[i].n;
			cout << i << " Year:\t";
			cin >> arr[i].g;
			cout << endl;
		}
	}
	Print(arr, size);
}

void EditName(book* arr, int size) {
	int number = 0;
	cout << "Enter num of element: ";
	cin >> number;
	cout << "Enter title: ";
	for (int i = 0; i < number; i++)
	{
		if (i = number)
		{
			cin >> arr[i-1].a;
		}
	}
}

void EditNum(book* arr, int size) {
	int number = 0;
	cout << "Enter num of element: ";
	cin >> number;
	cout << "Enter title: ";
	for (int i = 0; i < number; i++)
	{
		if (i = number)
		{
			cin >> arr[i - 1].n;
		}
	}
}
void EditYear(book* arr, int size) {
	int number = 0;
	cout << "Enter num of element: ";
	cin >> number;
	cout << "Enter title: ";
	for (int i = 0; i < number; i++)
	{
		if (i = number)
		{
			cin >> arr[i - 1].g;
		}
	}
}

void SortForwAuthor(book* arr, int size)
{
	ofstream out;
	out.open("in.txt", ofstream::out | ofstream::trunc);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[i].a < arr[j].a)
			{
				swap(arr[i], arr[j]);
			}
		}
	}
	int i = 0;
}
void SortBackAuthor(book* arr, int size)
{
	ofstream out;
	out.open("in.txt", ofstream::out | ofstream::trunc);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[i].a > arr[j].a)
			{
				swap(arr[i], arr[j]);
			}
		}
	}
	int i = 0;
}

void SortForwNumber(book* arr, int size)
{
	ofstream out;
	out.open("in.txt", ofstream::out | ofstream::trunc);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[i].n < arr[j].n)
			{
				swap(arr[i], arr[j]);
			}
		}
	}
	int i = 0;
}
void SortBackNumber(book* arr, int size)
{
	ofstream out;
	out.open("in.txt", ofstream::out | ofstream::trunc);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[i].n > arr[j].n)
			{
				swap(arr[i], arr[j]);
			}
		}
	}
	int i = 0;
}

void SortForwYear(book* arr, int size)
{
	ofstream out;
	out.open("in.txt", ofstream::out | ofstream::trunc);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[i].g < arr[j].g)
			{
				swap(arr[i], arr[j]);
			}
		}
	}
	int i = 0;
}
void SortBackYear(book* arr, int size)
{
	ofstream out;
	out.open("in.txt", ofstream::out | ofstream::trunc);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[i].g > arr[j].g)
			{
				swap(arr[i], arr[j]);
			}
		}
	}
	int i = 0;
}

void PrintLine(book* arr, int i)
{
	cout << "----------------------------" << endl;
	cout << "|" << setw(7) << arr[i].a << "  |" << setw(5) << arr[i].n << "  |" << setw(6) << arr[i].g << "  |" << endl;
	cout << "----------------------------" << endl << endl;
}

void FindAuthor(book* arr, int size)
{
	string title;
	cout << "Enter title: ";
	cin >> title;
	system("cls");
	for (int i = 0; i < size; i++)
	{
		if (!arr[i].a.find(title)) //if this is the book
		{
			PrintLine(arr, i);
		}
	}
}
void FindNumber(book* arr, int size)
{
	int title;
	cout << "Enter title: ";
	cin >> title;
	system("cls");
	for (int i = 0; i < size; i++)
	{
		if (arr[i].n == title) //if this is the book
		{
			PrintLine(arr, i);
		}
	}
}
void FindYear(book* arr, int size)
{
	int title;
	cout << "Enter title: ";
	cin >> title;
	system("cls");
	for (int i = 0; i < size; i++)
	{
		if (arr[i].g == title) //if this is the book
		{
			PrintLine(arr, i);
		}
	}
}

void DeleteAuthor(book* arr, int &size)
{
	fstream out;
	out.open("in.txt", ofstream::out | ofstream::trunc);
	string title;
	cout << "Enter title: ";
	cin >> title;
	system("cls");
	for (int i = 0; i < size; i++)
	{
		if (arr[i].a == title)
		{
			for (int j = i; j < (size - 1); j++)
			{
				arr[j].a = arr[j + 1].a;
				arr[j].n = arr[j + 1].n;
				arr[j].g = arr[j + 1].g;
			}
			size--;
		}
	}
	Print(arr, size);
}
void DeleteNumber(book* arr, int& size)
{
	fstream out;
	out.open("in.txt", ofstream::out | ofstream::trunc);
	int title;
	cout << "Enter title: ";
	cin >> title;
	system("cls");
	for (int i = 0; i < size; i++)
	{
		if (arr[i].n == title)
		{
			for (int j = i; j < size - 1; j++)
			{
				arr[j].a = arr[j + 1].a;
				arr[j].n = arr[j + 1].n;
				arr[j].g = arr[j + 1].g;
			}
			size--;
		}
	}
	Print(arr, size);
}
void DeleteYear(book* arr, int& size)
{
	fstream out;
	out.open("in.txt", ofstream::out | ofstream::trunc);
	int title;
	cout << "Enter title: ";
	cin >> title;
	system("cls");
	for (int i = 0; i < size; i++)
	{
		if (arr[i].g == title)
		{
			for (int j = i; j < size - 1; j++)
			{
				arr[j].a = arr[j + 1].a;
				arr[j].n = arr[j + 1].n;
				arr[j].g = arr[j + 1].g;
			}
			size--;
		}
	}
	Print(arr, size);
}
void DeleteStruct(book* arr, int& size)
{
	delete[] arr;
	size = 0;
	fstream out;
	out.open("in.txt", ofstream::out | ofstream::trunc);
	out.close();
	system("cls");
}


void Add(book* &arr, int &size)
{
	book* arrcopy = new book[size]; //������� ��������� �������
	for (short i = 0; i < size; i++) //��������� ��� �� �������� ������� � ���������
		arrcopy[i] = arr[i];
	delete[] arr; //������� �������� �������
	size++;
	arr = new book[size]; //�������� ������ ��� �������� �������, �� ��� �� +1 ��-� ������ 
	for (short i = 0; i < size - 1; i++)
		arr[i] = arrcopy[i]; //��������� ��� �� ��������� ������� � ��������
	delete[] arrcopy; //������� ��������� �������

	//��������� ����� �������:
	cout << "Enter Author: ";
	cin >> arr[size - 1].a;
	cout << "Enter Number: ";
	cin >> arr[size - 1].n;
	cout << "Enter Year: ";
	cin >> arr[size - 1].g;
}

void Green()
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandle, 2);
}
void White()
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandle, 7);
}
void Red()
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandle, 4);
}
void Blue()
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandle, 1);
}
void Yellow()
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandle, 6);
}
void Lilac()
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandle, 5);
}

void CallMenu()
{
	Blue();
	cout << "Sort by author \t- 1\nSort by number \t- 2\nSort by year \t- 3" << endl;
	Green();
	cout << "Find by name \t- 4\nFind by number \t- 5\nFind by year \t- 6" << endl;
	Yellow();
	cout << "Delete by name \t- 7\nDelete by num \t- 8\nDelete by year \t- 9" << endl;
	Red();
	cout << "Delete struct \t- 10\nCreate struct \t- 11\nEdit \t\t- 12\nAdd \t\t- 13\nExit \t\t- 14" << endl;
}