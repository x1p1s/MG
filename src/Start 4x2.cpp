#include <Windows.h>
#include "Default.h"
#include <iostream>
#include <conio.h>

using namespace std;

void StartGame_4x2(County doc)
{

	char a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7;
	a = a1 = b = b1 = c = b = c1 = d = d1 = f = f1 = f2 = f3 = f4 = f5 = f6 = f7 = '#';

	doc.start = clock();

	char p;
	char p1;

	Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);

	cout << endl << "\t\t\t\t\t\t\t Откройте две любые карты." << endl;
	cout << endl << "\t\t\t\t\t\t\t Выберите одну из карт и нажмите Enter: ";

	do
	{
		cin >> p;
		PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

		if (p > '8' || p == '0')
		{
			PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
			cout << endl << "\t\t\t\t\t\t\t Такой карты нет. Повторите попытку..." << endl << endl;
			cout << "\t\t\t\t\t\t\t Откройте две любые карты." << endl;
			cout << "\t\t\t\t\t\t\t Выберите одну из карт и нажмите Enter: ";
		}

		if (p == '1')
		{
			a = '!';
			f = ' ';
			system("cls");
			Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;

			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == '1' || p1 == '0' || p1 > '8')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Первая карта уже открыта. Выберите другую. ";
				cin >> p1;

				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}

			if (p1 == '2')
			{
				b = '@';
				f1 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '3')
			{
				c = '!';
				f2 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '4')
			{
				d = '*';
				f3 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '5')
			{
				a1 = '*';
				f4 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '6')
			{
				b1 = '$';
				f5 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '7')
			{
				c1 = '@';
				f6 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '8')
			{
				d1 = '$';
				f7 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}

		}

		if (p == '2')
		{
			b = '@';
			f1 = ' ';
			system("cls");
			Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";

			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == '2' || p1 == '0' || p1 > '8')
			{
				do
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Вторая карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				} while (p1 == '2' || p1 == '0');
			}
			if (p1 == '1')
			{
				a = '!';
				f = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '3')
			{
				c = '!';
				f2 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '4')
			{
				d = '*';
				f3 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '5')
			{
				a1 = '*';
				f4 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '6')
			{
				b1 = '$';
				f5 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '7')
			{
				c1 = '@';
				f6 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '8')
			{
				d1 = '$';
				f7 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
		}

		if (p == '3')
		{
			c = '!';
			f2 = ' ';
			system("cls");
			Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == '3' || p1 == '0' || p1 > '8')
			{
				do
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Третья карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				} while (p1 == '3' || p1 == '0');
			}
			if (p1 == '1')
			{
				a = '!';
				f = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '2')
			{
				b = '@';
				f1 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '4')
			{
				d = '*';
				f3 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '5')
			{
				a1 = '*';
				f4 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '6')
			{
				b1 = '$';
				f5 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '7')
			{
				c1 = '@';
				f6 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '8')
			{
				d1 = '$';
				f7 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
		}

		if (p == '4')
		{
			d = '*';
			f3 = ' ';
			system("cls");
			Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == '4' || p1 == '0' || p1 > '8')
			{
				do
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Четвертая карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				} while (p1 == '4' || p1 == '0');
			}
			if (p1 == '1')
			{
				a = '!';
				f = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '2')
			{
				b = '@';
				f1 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '3')
			{
				c = '!';
				f2 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '5')
			{
				a1 = '*';
				f4 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '6')
			{
				b1 = '$';
				f5 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '7')
			{
				c1 = '@';
				f6 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '8')
			{
				d1 = '$';
				f7 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
		}

		if (p == '5')
		{
			a1 = '*';
			f4 = ' ';
			system("cls");
			Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == '5' || p1 == '0' || p1 > '8')
			{
				do
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Пятая карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				} while (p1 == '5' || p1 == '0');
			}
			if (p1 == '1')
			{
				a = '!';
				f = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '2')
			{
				b = '@';
				f1 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '3')
			{
				c = '!';
				f2 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '4')
			{
				d = '*';
				f3 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '6')
			{
				b1 = '$';
				f5 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '7')
			{
				c1 = '@';
				f6 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '8')
			{
				d1 = '$';
				f7 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
		}

		if (p == '6')
		{
			b1 = '$';
			f5 = ' ';
			system("cls");
			Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == '6' || p1 == '0' || p1 > '8')
			{
				do
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Шестая карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				} while (p1 == '6' || p1 == '0');
			}
			if (p1 == '1')
			{
				a = '!';
				f = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '2')
			{
				b = '@';
				f1 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '3')
			{
				c = '!';
				f2 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '4')
			{
				d = '*';
				f3 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '5')
			{
				a1 = '*';
				f4 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '7')
			{
				c1 = '@';
				f6 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '8')
			{
				d1 = '$';
				f7 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
		}

		if (p == '7')
		{
			c1 = '@';
			f6 = ' ';
			system("cls");
			Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 == '7' || p1 == '0' || p1 > '8')
			{
				do
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Седьмая карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				} while (p1 == '7' || p1 == '0');
			}
			if (p1 == '1')
			{
				a = '!';
				f = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '2')
			{
				b = '@';
				f1 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '3')
			{
				c = '!';
				f2 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '4')
			{
				d = '*';
				f3 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '5')
			{
				a1 = '*';
				f4 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '6')
			{
				b1 = '$';
				f5 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '8')
			{
				d1 = '$';
				f7 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
		}

		if (p == '8')
		{
			d1 = '$';
			f7 = ' ';
			system("cls");
			Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
			cout << endl << "\t\t\t\t\t\t\t Выберите вторую карту и нажмите Enter: ";
			cin >> p1;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p1 >= '8' || p1 == '0')
			{
				do
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Восьмая карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				} while (p1 == '8' || p1 == '0');
			}
			if (p1 == '1')
			{
				a = '!';
				f = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '2')
			{
				b = '@';
				f1 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '3')
			{
				c = '!';
				f2 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '4')
			{
				d = '*';
				f3 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '5')
			{
				a1 = '*';
				f4 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '6')
			{
				b1 = '$';
				f5 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
			if (p1 == '7')
			{
				c1 = '@';
				f6 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
			}
		}

	} while (true);
}
