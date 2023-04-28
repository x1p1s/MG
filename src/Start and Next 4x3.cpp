#include <Windows.h>
#include "Default.h"
#include <iostream>
#include <playsoundapi.h>

using namespace std;

void StartGameNext_4x3(char a, char a1, char b, char b1, char c, char c1, char d, char d1, char e1, char g1, char h1, char k1, char f, char f1, char f2, char f3, char f4, char f5, char f6, char f7, char f8, char f9, char f10, char f11, County doc)
{

	int p;
	int p1 = 0;

	if (a != ' ' || c != ' ' || b != ' ' || d != ' ' || c1 != ' ' || a1 != ' ' || b1 != ' ' || d1 != ' ' || e1 != ' ' || h1 != ' ' || g1 != ' ' || k1 != ' ')
	{
		Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
	}

	if (a == ' ' && c == ' ' && b == ' ' && d == ' ' && c1 == ' ' && a1 == ' ' && b1 == ' ' && d1 == ' ' && e1 == ' ' && h1 == ' ' && g1 == ' ' && k1 == ' ')
	{
		PlaySound(TEXT("winner.wav"), NULL, SND_FILENAME | SND_ASYNC);
		doc.end = clock();
		doc.timer = (doc.end - doc.start) / CLOCKS_PER_SEC;
		cout << endl << "\t\t\t\t\t\t\t  Победа!!! Все карты раскрыты!!!" << endl;
		cout << endl << "\t\t\t\t\t\t\t  Время игры: " << doc.timer << " сек." << endl;;
		cout << endl << "\t\t\t\t\t\t\t  Количество совпадений: " << doc.concidences << endl;
		cout << endl << "\t\t\t\t\t\t\t  Количество неверных ходов: " << doc.count << endl << endl;
		cout << endl << "\t\t\t\t\t\t\t  Сейчас вы будете перенаправлены в меню. " << endl << endl;

		Card_4x3(a = '5', a1 = '6', b = '8', b1 = '3', c = '5', c1 = '6', d = '8', d1 = '3', e1 = '4', g1 = '2', h1 = '4', k1 = '2', f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);

		Sleep(5100);
		system("cls");
		Menu();
	}

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
			if (a == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
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
			}

			if (p1 == 2)
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b = '8';
					f1 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 3)
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c = '5';
					f2 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 4)
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d = '3';
					f3 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}
			if (p1 == 5)
			{
				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '6';
					f4 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 6)
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '3';
					f5 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 7)
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '6';
					f6 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 8)
			{
				if (d1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d1 = '3';
					f7 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 9)
			{
				if (e1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					e1 = '4';
					f8 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 10)
			{
				if (g1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					g1 = '2';
					f9 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 11)
			{
				if (h1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					h1 = '4';
					f10 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 12)
			{
				if (k1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					k1 = '2';
					f11 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}
		}

		if (p == 2)
		{
			if (b == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				b = '8';
				f1 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 == 2 || p1 == 0 || p1 > 12)
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Первая карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == 1)
			{
				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '5';
					f = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 3)
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c = '5';
					f2 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 4)
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d = '8';
					f3 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 5)
			{
				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '6';
					f4 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 6)
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '3';
					f5 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 7)
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '6';
					f6 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 8)
			{
				if (d1 == ' ')
				{
					do
					{
						cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
						cin >> p1;
						PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

					} while (p1 == '8' || p1 == '0');
				}
				else
				{
					d1 = '3';
					f7 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 9)
			{
				if (e1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					e1 = '4';
					f8 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 10)
			{
				if (g1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					g1 = '2';
					f9 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 11)
			{
				if (h1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					h1 = '4';
					f10 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 12)
			{
				if (k1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					k1 = '2';
					f11 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}
		}

		if (p == 3)
		{
			if (c == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				c = '5';
				f2 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 == 3 || p1 == 0 || p1 > 12)
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Первая карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == 1)
			{
				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '5';
					f = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}

			}
			if (p1 == 2)
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b = '8';
					f1 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 4)
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d = '8';
					f3 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 5)
			{
				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '6';
					f4 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 6)
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '3';
					f5 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 7)
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '6';
					f6 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 8)
			{
				if (d1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d1 = '3';
					f7 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 9)
			{
				if (e1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					e1 = '4';
					f8 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 10)
			{
				if (g1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					g1 = '2';
					f9 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 11)
			{
				if (h1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					h1 = '4';
					f10 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 12)
			{
				if (k1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					k1 = '2';
					f11 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}
		}

		if (p == 4)
		{
			if (d == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				d = '8';
				f3 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 == 4 || p1 == 0 || p1 > 12)
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Первая карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == 1)
			{
				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '5';
					f = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 2)
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b = '8';
					f1 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 3)
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c = '5';
					f2 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 4)
			{
				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '6';
					f4 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 6)
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '3';
					f5 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 7)
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '6';
					f6 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 8)
			{
				if (d1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d1 = '3';
					f7 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 9)
			{
				if (e1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					e1 = '4';
					f8 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 10)
			{
				if (g1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					g1 = '2';
					f9 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 11)
			{
				if (h1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					h1 = '4';
					f10 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 12)
			{
				if (k1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					k1 = '2';
					f11 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}
		}

		if (p == 5)
		{
			if (a1 == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				a1 = '6';
				f4 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 == 5 || p1 == 0 || p1 > 12)
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Первая карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == 1)
			{
				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '5';
					f = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 2)
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b = '8';
					f1 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 3)
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c = '5';
					f2 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 4)
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d = '8';
					f3 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 6)
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '3';
					f5 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 7)
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '6';
					f6 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 8)
			{
				if (d1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d1 = '3';
					f7 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 9)
			{
				if (e1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					e1 = '4';
					f8 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 10)
			{
				if (g1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					g1 = '2';
					f9 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 11)
			{
				if (h1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					h1 = '4';
					f10 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 12)
			{
				if (k1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					k1 = '2';
					f11 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}
		}

		if (p == 6)
		{
			if (b1 == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				b1 = '3';
				f5 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 == 6 || p1 == 0 || p1 > 12)
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Первая карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == 1)
			{
				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '5';
					f = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 2)
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b = '8';
					f1 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 3)
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c = '5';
					f2 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 4)
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d = '8';
					f3 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 5)
			{
				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '6';
					f4 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 7)
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '6';
					f6 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 8)
			{
				if (d1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d1 = '3';
					f7 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 9)
			{
				if (e1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					e1 = '4';
					f8 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 10)
			{
				if (g1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					g1 = '2';
					f9 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 11)
			{
				if (h1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					h1 = '4';
					f10 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 12)
			{
				if (k1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					k1 = '2';
					f11 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}
		}

		if (p == 7)
		{
			if (c1 == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				c1 = '6';
				f6 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 == 7 || p1 == 0 || p1 > 12)
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Первая карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == 1)
			{
				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '5';
					f = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 2)
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b = '8';
					f1 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 3)
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c = '5';
					f2 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 4)
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d = '8';
					f3 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 5)
			{
				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '6';
					f4 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 6)
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '3';
					f5 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 8)
			{
				if (d1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d1 = '3';
					f7 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 9)
			{
				if (e1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					e1 = '4';
					f8 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 10)
			{
				if (g1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					g1 = '2';
					f9 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 11)
			{
				if (h1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					h1 = '4';
					f10 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 12)
			{
				if (k1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					k1 = '2';
					f11 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}
		}

		if (p == 8)
		{
			if (d1 == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				d1 = '$';
				f7 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 == 8 || p1 == 0 || p1 > 12)
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Первая карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == 1)
			{
				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '5';
					f = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 2)
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b = '8';
					f1 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 3)
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c = '5';
					f2 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 4)
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d = '8';
					f3 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 5)
			{
				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '6';
					f4 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 6)
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '3';
					f5 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 7)
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '6';
					f6 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}

			}

			if (p1 == 9)
			{
				if (e1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					e1 = '4';
					f8 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 10)
			{
				if (g1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					g1 = '2';
					f9 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 11)
			{
				if (h1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					h1 = '4';
					f10 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 12)
			{
				if (k1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					k1 = '2';
					f11 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}
		}

		if (p == 9)
		{
			if (e1 == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				e1 = '4';
				f8 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 == 9 || p1 == 0 || p1 > 12)
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Первая карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == 1)
			{
				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '5';
					f = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 2)
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b = '8';
					f1 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 3)
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c = '5';
					f2 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 4)
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d = '8';
					f3 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 5)
			{
				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '6';
					f4 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 6)
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '3';
					f5 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 7)
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '6';
					f6 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}

			}

			if (p1 == 10)
			{
				if (g1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					g1 = '2';
					f9 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 11)
			{
				if (h1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					h1 = '4';
					f10 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 12)
			{
				if (k1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					k1 = '2';
					f11 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}
		}

		if (p == 10)
		{
			if (g1 == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				g1 = '2';
				f9 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 == 10 || p1 == 0 || p1 > 12)
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Первая карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == 1)
			{
				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '5';
					f = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 2)
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b = '8';
					f1 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 3)
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c = '5';
					f2 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 4)
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d = '8';
					f3 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 5)
			{
				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '6';
					f4 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 6)
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '3';
					f5 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 7)
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '6';
					f6 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}

			}

			if (p1 == 9)
			{
				if (e1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					e1 = '4';
					f8 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 11)
			{
				if (h1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					h1 = '4';
					f10 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 12)
			{
				if (k1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					k1 = '2';
					f11 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}
		}

		if (p == 11)
		{
			if (h1 == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				h1 = '4';
				f10 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 == 11 || p1 == 0 || p1 > 12)
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Первая карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == 1)
			{
				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '5';
					f = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 2)
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b = '8';
					f1 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 3)
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c = '5';
					f2 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 4)
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d = '8';
					f3 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 5)
			{
				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '6';
					f4 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 6)
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '3';
					f5 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 7)
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '6';
					f6 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}

			}

			if (p1 == 9)
			{
				if (e1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					e1 = '4';
					f8 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 10)
			{
				if (g1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					g1 = '2';
					f9 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 12)
			{
				if (k1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					k1 = '2';
					f11 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}
		}

		if (p == 12)
		{
			if (k1 == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				k1 = '2';
				f11 = ' ';
				system("cls");
				Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
				cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 >= 12 || p1 == 0)
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t Первая карта уже открыта. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == 1)
			{
				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '5';
					f = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 2)
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b = '8';
					f1 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 3)
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c = '5';
					f2 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 4)
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d = '8';
					f3 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 5)
			{
				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '6';
					f4 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 6)
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '3';
					f5 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 7)
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '6';
					f6 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}

			}

			if (p1 == 9)
			{
				if (e1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					e1 = '4';
					f8 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 10)
			{
				if (g1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					g1 = '2';
					f9 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}

			if (p1 == 11)
			{
				if (h1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					h1 = '4';
					f10 = ' ';
					system("cls");
					Card_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
					Examination_4x3(a, a1, b, b1, c, c1, d, d1, e1, g1, h1, k1, f, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, doc);
				}
			}
		}

	} while (true);

}