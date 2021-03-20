#pragma once
#include <iostream>
#include <string>
using namespace std;

struct book {
	string a;
	int n = 0;
	int g = 0;
};
struct bookcopy {
	string aa;
	int nn = 0;
	int gg = 0;
};

string RandomString(size_t);
void CreateStruct(book* arr, int size);
void Print(book* arr, int &size);

void SortForwAuthor(book* arr, int size);
void SortBackAuthor(book* arr, int size);
void SortForwNumber(book* arr, int size);
void SortBackNumber(book* arr, int size);
void SortForwYear(book* arr, int size);
void SortBackYear(book* arr, int size);

void PrintLine(book* arr, int i);

void EditName(book* arr, int size);
void EditNum(book* arr, int size);
void EditYear(book* arr, int size);

void FindAuthor(book* arr, int size);
void FindNumber(book* arr, int size);
void FindYear(book* arr, int size);

void DeleteAuthor(book* arr, int &size);
void DeleteNumber(book* arr, int& size);
void DeleteYear(book* arr, int& size);
void DeleteStruct(book* arr, int& size);

void Add(book* &arr, int& size);

void Green();
void White();
void Red();
void Blue();
void Yellow();
void Lilac();
void CallMenu();