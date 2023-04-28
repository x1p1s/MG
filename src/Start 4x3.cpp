#include <Windows.h>
#include "Default.h"
#include <iostream>
#include <conio.h>

using namespace std;

void StartGame_4x3(County doc)
{

	char a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11;
	a = a1 = b = b1 = c = b = c1 = d = d1 = e1 = g1 = h1 = k1 = f = f1 = f2 = f3 = f4 = f5 = f6 = f7 = f8 = f9 = f10 = f11 = '#';

	doc.start = clock();

	int p;
	int p1;

	Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);

	cout << endl << "\t\t\t\t\t\t\t Откройте две любые карты." << endl;
	cout << endl << "\t\t\t\t\t\t\t Выберите одну из карт и нажмите Enter: ";

	do
	{
		cin >> p;
		PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

		if (p > 12 || p == 0)
		{
			PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
			cout << endl << "\t\t\t\t\t\t\t Такой карты нет. Повторите попытку..." << endl << endl;
			cout << "\t\t\t\t\t\t\t Откройте две любые карты." << endl;
			cout << "\t\t\t\t\t\t\t Выберите одну из карт и нажмите Enter: ";
		}

		if (p == 1)
		{
			a = '5';
			f = ' ';
			system("cls");
			Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;

			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == 1 || p1 == 0 || p1 > 12)
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Первая карта уже открыта. Выберите другую. ";
				cin >> p1;

				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}

			if (p1 == 2)
			{
				b = '8';
				f1 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 3)
			{
				c = '5';
				f2 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 4)
			{
				d = '8';
				f3 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 5)
			{
				a1 = '6';
				f4 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 6)
			{
				b1 = '3';
				f5 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 7)
			{
				c1 = '6';
				f6 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 8)
			{
				d1 = '3';
				f7 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 9)
			{
				e1 = '4';
				f8 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 10)
			{
				g1 = '2';
				f9 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 11)
			{
				h1 = '4';
				f10 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 12)
			{
				k1 = '2';
				f11 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
		}

		if (p == 2)
		{
			b = '8';
			f1 = ' ';
			system("cls");
			Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";

			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == 2 || p1 == 0 || p1 > 12)
			{

				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Вторая карта уже открыта. Выберите другую. ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			}
			if (p1 == 1)
			{
				a = '5';
				f = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 3)
			{
				c = '5';
				f2 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 4)
			{
				d = '8';
				f3 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 5)
			{
				a1 = '6';
				f4 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 6)
			{
				b1 = '3';
				f5 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 7)
			{
				c1 = '6';
				f6 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 8)
			{
				d1 = '3';
				f7 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 9)
			{
				e1 = '4';
				f8 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 10)
			{
				g1 = '2';
				f9 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 11)
			{
				h1 = '4';
				f10 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 12)
			{
				k1 = '2';
				f11 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
		}

		if (p == 3)
		{
			c = '5';
			f2 = ' ';
			system("cls");
			Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == 3 || p1 == 0 || p1 > 12)
			{

				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Третья карта уже открыта. Выберите другую. ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			}
			if (p1 == 1)
			{
				a = '5';
				f = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 2)
			{
				b = '8';
				f1 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 4)
			{
				d = '8';
				f3 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 5)
			{
				a1 = '6';
				f4 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 6)
			{
				b1 = '3';
				f5 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 7)
			{
				c1 = '6';
				f6 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 8)
			{
				d1 = '3';
				f7 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 9)
			{
				e1 = '4';
				f8 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 10)
			{
				g1 = '2';
				f9 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 11)
			{
				h1 = '4';
				f10 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 12)
			{
				k1 = '2';
				f11 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
		}

		if (p == 4)
		{
			d = '8';
			f3 = ' ';
			system("cls");
			Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == 4 || p1 == 0 || p1 > 12)
			{

				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Четвертая карта уже открыта. Выберите другую. ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			}
			if (p1 == 1)
			{
				a = '5';
				f = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 2)
			{
				b = '8';
				f1 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 3)
			{
				c = '5';
				f2 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 5)
			{
				a1 = '6';
				f4 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 6)
			{
				b1 = '3';
				f5 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 7)
			{
				c1 = '6';
				f6 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 8)
			{
				d1 = '3';
				f7 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 9)
			{
				e1 = '4';
				f8 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 10)
			{
				g1 = '2';
				f9 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 11)
			{
				h1 = '4';
				f10 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 12)
			{
				k1 = '2';
				f11 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
		}

		if (p == 5)
		{
			a1 = '6';
			f4 = ' ';
			system("cls");
			Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == 5 || p1 == 0 || p1 > 12)
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Пятая карта уже открыта. Выберите другую. ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			}
			if (p1 == 1)
			{
				a = '5';
				f = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 2)
			{
				b = '8';
				f1 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 3)
			{
				c = '5';
				f2 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 4)
			{
				d = '8';
				f3 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 6)
			{
				b1 = '3';
				f5 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 7)
			{
				c1 = '6';
				f6 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 8)
			{
				d1 = '3';
				f7 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 9)
			{
				e1 = '4';
				f8 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 10)
			{
				g1 = '2';
				f9 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 11)
			{
				h1 = '4';
				f10 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 12)
			{
				k1 = '2';
				f11 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
		}

		if (p == 6)
		{
			b1 = '3';
			f5 = ' ';
			system("cls");
			Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == 6 || p1 == 0 || p1 > 12)
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Шестая карта уже открыта. Выберите другую. ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			if (p1 == 1)
			{
				a = '5';
				f = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 2)
			{
				b = '8';
				f1 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 3)
			{
				c = '5';
				f2 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 4)
			{
				d = '8';
				f3 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 5)
			{
				a1 = '6';
				f4 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 7)
			{
				c1 = '6';
				f6 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 8)
			{
				d1 = '3';
				f7 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 9)
			{
				e1 = '4';
				f8 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 10)
			{
				g1 = '2';
				f9 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 11)
			{
				h1 = '4';
				f10 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 12)
			{
				k1 = '2';
				f11 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
		}

		if (p == 7)
		{
			c1 = '6';
			f6 = ' ';
			system("cls");
			Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == 7 || p1 == 0 || p1 > 12)
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Седьмая карта уже открыта. Выберите другую. ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}

			if (p1 == 1)
			{
				a = '5';
				f = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 2)
			{
				b = '8';
				f1 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 3)
			{
				c = '5';
				f2 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 4)
			{
				d = '8';
				f3 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 5)
			{
				a1 = '6';
				f4 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 6)
			{
				b1 = '3';
				f5 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 8)
			{
				d1 = '3';
				f7 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 9)
			{
				e1 = '4';
				f8 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 10)
			{
				g1 = '2';
				f9 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 11)
			{
				h1 = '4';
				f10 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 12)
			{
				k1 = '2';
				f11 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
		}

		if (p == 8)
		{
			d1 = '3';
			f7 = ' ';
			system("cls");
			Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == 8 || p1 == 0 || p1 > 12)
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Восьмая карта уже открыта. Выберите другую. ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			if (p1 == 1)
			{
				a = '5';
				f = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 2)
			{
				b = '8';
				f1 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 3)
			{
				c = '5';
				f2 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 4)
			{
				d = '8';
				f3 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 5)
			{
				a1 = '6';
				f4 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 6)
			{
				b1 = '3';
				f5 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 7)
			{
				c1 = '6';
				f6 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 9)
			{
				e1 = '4';
				f8 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 10)
			{
				g1 = '2';
				f9 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 11)
			{
				h1 = '4';
				f10 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 12)
			{
				k1 = '2';
				f11 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
		}

		if (p == 9)
		{
			e1 = '4';
			f8 = ' ';
			system("cls");
			Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == 9 || p1 == 0 || p1 > 12)
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Восьмая карта уже открыта. Выберите другую. ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			if (p1 == 1)
			{
				a = '5';
				f = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 2)
			{
				b = '8';
				f1 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 3)
			{
				c = '5';
				f2 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 4)
			{
				d = '8';
				f3 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 5)
			{
				a1 = '6';
				f4 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 6)
			{
				b1 = '3';
				f5 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 7)
			{
				c1 = '6';
				f6 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 8)
			{
				d1 = '3';
				f7 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 10)
			{
				g1 = '2';
				f9 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 11)
			{
				h1 = '4';
				f10 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 12)
			{
				k1 = '2';
				f11 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
		}

		if (p == 10)
		{
			g1 = '2';
			f9 = ' ';
			system("cls");
			Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == 10 || p1 == 0 || p1 > 12)
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Восьмая карта уже открыта. Выберите другую. ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			if (p1 == 1)
			{
				a = '5';
				f = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 2)
			{
				b = '8';
				f1 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 3)
			{
				c = '5';
				f2 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 4)
			{
				d = '8';
				f3 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 5)
			{
				a1 = '6';
				f4 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 6)
			{
				b1 = '3';
				f5 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 7)
			{
				c1 = '6';
				f6 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 8)
			{
				d1 = '3';
				f7 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 9)
			{
				e1 = '4';
				f8 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 11)
			{
				h1 = '4';
				f10 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 12)
			{
				k1 = '2';
				f11 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
		}

		if (p == 11)
		{
			h1 = '4';
			f10 = ' ';
			system("cls");
			Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == 11 || p1 == 0 || p1 > 12)
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Восьмая карта уже открыта. Выберите другую. ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			if (p1 == 1)
			{
				a = '5';
				f = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 2)
			{
				b = '8';
				f1 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 3)
			{
				c = '5';
				f2 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 4)
			{
				d = '8';
				f3 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 5)
			{
				a1 = '6';
				f4 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 6)
			{
				b1 = '3';
				f5 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 7)
			{
				c1 = '6';
				f6 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 8)
			{
				d1 = '3';
				f7 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 9)
			{
				e1 = '4';
				f8 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 10)
			{
				g1 = '4';
				f9 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 12)
			{
				k1 = '2';
				f11 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
		}

		if (p == 12)
		{
			k1 = '2';
			f11 = ' ';
			system("cls");
			Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == 12 || p1 == 0 || p1 > 12)
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Восьмая карта уже открыта. Выберите другую. ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			if (p1 == 1)
			{
				a = '5';
				f = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 2)
			{
				b = '8';
				f1 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 3)
			{
				c = '5';
				f2 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 4)
			{
				d = '8';
				f3 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 5)
			{
				a1 = '6';
				f4 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 6)
			{
				b1 = '3';
				f5 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 7)
			{
				c1 = '6';
				f6 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 8)
			{
				d1 = '3';
				f7 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 9)
			{
				e1 = '4';
				f8 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 10)
			{
				g1 = '4';
				f9 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
			if (p1 == 11)
			{
				h1 = '4';
				f10 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
			}
		}

	} while (true);
}