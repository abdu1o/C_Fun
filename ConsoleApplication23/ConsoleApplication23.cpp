#include <iostream>
#include <ctime>
#include <iomanip>
#include <random>
#include <Windows.h>
#include <algorithm>
using namespace std;

//(1)--------------------------------------------
//void SetCursor(int x, int y, int color)
//{
//	HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
//	COORD pos = { x, y };
//
//	SetConsoleCursorPosition(hConsoleOutput, pos);
//	SetConsoleTextAttribute(hConsoleOutput, color);
//
//	system("pause");
//}
//
//int main()
//{
//	int x, y, color;
//
//	cout << "Enter cord x, y: ";
//	cin >> x >> y;
//	cout << "Enter color number (1 - 15): ";
//    cin >> color;
//
//	SetCursor(x, y, color);
//}
//-----------------------------------------------


//(2)--------------------------------------------
//int DoCube(int num)
//{
//	cout << "Cube of ur num: ";
//	return num * num * num;
//}
//
//int main()
//{
//	int num;
//
//	cout << "Enter number: ";
//	cin >> num;
//
//	cout << DoCube(num);
//}
//-----------------------------------------------


//(3)--------------------------------------------
bool PrimeCheck(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			cout << "Ur number is not prime\n";
			return false;
		}
	}
	cout << "Ur number is prime\n";
	return true;
}

int main()
{
	int num;

	cout << "Enter number: ";
	cin >> num;

	PrimeCheck(num);
}
//-----------------------------------------------