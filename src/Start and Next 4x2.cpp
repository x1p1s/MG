#include <Windows.h>
#include "Default.h"
#include <iostream>
#include <playsoundapi.h>

using namespace std;

void StartGameNext_4x2(char a, char a1, char b, char b1, char c, char c1, char d, char d1, char f, char f1, char f2, char f3, char f4, char f5, char f6, char f7, County doc)
{

	char p;
	char p1 = '0';

	if (a != ' ' || c != ' ' || b != ' ' || c1 != ' ' || d != ' ' || a1 != ' ' || b1 != ' ' || d1 != ' ')
	{
		Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
	}

	if (a == ' ' && c == ' ' && b == ' ' && c1 == ' ' && d == ' ' && a1 == ' ' && b1 == ' ' && d1 == ' ')
	{
		PlaySound(TEXT("winner.wav"), NULL, SND_FILENAME | SND_ASYNC);
		doc.end = clock();
		doc.timer = (doc.end - doc.start) / CLOCKS_PER_SEC;
		cout << endl << "\t\t\t\t\t\t\t  ������!!! ��� ����� ��������!!!" << endl;
		cout << endl << "\t\t\t\t\t\t\t  ����� ����: " << doc.timer << " ���." << endl;
		cout << endl << "\t\t\t\t\t\t\t  ���������� ����������: " << doc.concidences << endl;
		cout << endl << "\t\t\t\t\t\t\t  ���������� �������� �����: " << doc.count << endl << endl;
		cout << endl << "\t\t\t\t\t\t\t  ������ �� ������ �������������� � ����. " << endl << endl;

		Card_4x2(a = '!', a1 = '*', b = '@', b1 = '$', c = '!', c1 = '@', d = '*', d1 = '$', f, f1, f2, f3, f4, f5, f6, f7);

		Sleep(5100);
		system("cls");
		Menu();
	}

	cout << endl << "\t\t\t\t\t\t\t �������� ��� ����� �����." << endl;
	cout << endl << "\t\t\t\t\t\t\t �������� ���� �� ���� � ������� Enter: ";

	do
	{
		cin >> p;
		PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

		if (p > '8' || p == '0')
		{
			PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
			cout << endl << "\t\t\t\t\t\t\t ����� ����� ���. ��������� �������..." << endl << endl;
			cout << "\t\t\t\t\t\t\t �������� ��� ����� �����." << endl;
			cout << "\t\t\t\t\t\t\t �������� ���� �� ���� � ������� Enter: ";
		}
		if (p == '1')
		{
			if (a == ' ')
			{

				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			}
			else
			{
				a = '!';
				f = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				cout << endl << "\t\t\t\t\t\t\t �������� ������ ����� � ������� Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 == '1' || p1 == '0' || p1 > '8')
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t ������ ����� ��� �������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == '2')
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				}
				else
				{
					b = '@';
					f1 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '3')
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				}
				else
				{
					c = '!';
					f2 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '4')
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				}
				else
				{
					d = '*';
					f3 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}
			if (p1 == '5')
			{
				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '*';
					f4 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '6')
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '$';
					f5 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '7')
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '@';
					f6 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '8')
			{
				if (d1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				}
				else
				{
					d1 = '$';
					f7 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}
		}

		if (p == '2')
		{
			if (b == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				b = '@';
				f1 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				cout << endl << "\t\t\t\t\t\t\t �������� ������ ����� � ������� Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 == '2' || p1 == '0' || p1 > '8')
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t ������ ����� ��� �������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == '1')
			{
				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '!';
					f = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '3')
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c = '!';
					f2 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '4')
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d = '*';
					f3 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '5')
			{

				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '*';
					f4 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '6')
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '$';
					f5 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '7')
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '@';
					f6 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '8')
			{
				if (d1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d1 = '$';
					f7 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}
		}

		if (p == '3')
		{
			if (c == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				c = '!';
				f2 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				cout << endl << "\t\t\t\t\t\t\t �������� ������ ����� � ������� Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 == '3' || p1 == '0' || p1 > '8')
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t ������ ����� ��� �������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == '1')
			{

				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '!';
					f = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}

			}
			if (p1 == '2')
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b = '@';
					f1 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '4')
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d = '*';
					f3 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '5')
			{
				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '*';
					f4 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '6')
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '$';
					f5 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '7')
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '@';
					f6 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '8')
			{
				if (d1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d1 = '$';
					f7 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}
		}

		if (p == '4')
		{
			if (d == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				d = '*';
				f3 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				cout << endl << "\t\t\t\t\t\t\t �������� ������ ����� � ������� Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 == '4' || p1 == '0' || p1 > '8')
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t ������ ����� ��� �������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == '1')
			{
				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '!';
					f = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '2')
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b = '@';
					f1 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '3')
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c = '!';
					f2 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '5')
			{
				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '*';
					f4 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '6')
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '$';
					f5 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '7')
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '@';
					f6 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '8')
			{
				if (d1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d1 = '$';
					f7 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}
		}

		if (p == '5')
		{
			if (a1 == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				a1 = '*';
				f4 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				cout << endl << "\t\t\t\t\t\t\t �������� ������ ����� � ������� Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 == '5' || p1 == '0' || p1 > '8')
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t ������ ����� ��� �������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == '1')
			{
				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '!';
					f = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '2')
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b = '@';
					f1 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '3')
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c = '!';
					f2 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '4')
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d = '*';
					f3 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '6')
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '$';
					f5 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '7')
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '@';
					f6 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '8')
			{
				if (d1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d1 = '$';
					f7 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}
		}

		if (p == '6')
		{
			if (b1 == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				b1 = '$';
				f5 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				cout << endl << "\t\t\t\t\t\t\t �������� ������ ����� � ������� Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 == '6' || p1 == '0' || p1 > '8')
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t ������ ����� ��� �������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == '1')
			{
				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '!';
					f = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '2')
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b = '@';
					f1 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '3')
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c = '!';
					f2 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '4')
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d = '*';
					f3 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '5')
			{
				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '*';
					f4 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '7')
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '@';
					f6 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '8')
			{
				if (d1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d1 = '$';
					f7 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}
		}

		if (p == '7')
		{
			if (c1 == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				c1 = '@';
				f6 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				cout << endl << "\t\t\t\t\t\t\t �������� ������ ����� � ������� Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 == '7' || p1 == '0' || p1 > '8')
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t ������ ����� ��� �������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == '1')
			{
				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '!';
					f = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '2')
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b = '@';
					f1 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '3')
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c = '!';
					f2 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '4')
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d = '*';
					f3 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '5')
			{
				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '*';
					f4 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '6')
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '$';
					f5 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '8')
			{
				if (d1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d1 = '$';
					f7 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}
		}

		if (p == '8')
		{
			if (d1 == ' ')
			{
				PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
				cin >> p;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				d1 = '$';
				f7 = ' ';
				system("cls");
				Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
				cout << endl << "\t\t\t\t\t\t\t �������� ������ ����� � ������� Enter: ";
				cin >> p1;
				PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

				if (p1 >= '8' || p1 == '0')
				{
					PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "\t\t\t\t\t\t\t ������ ����� ��� �������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			}

			if (p1 == '1')
			{
				if (a == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a = '!';
					f = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '2')
			{
				if (b == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b = '@';
					f1 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '3')
			{
				if (c == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c = '!';
					f2 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '4')
			{
				if (d == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					d = '*';
					f3 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '5')
			{
				if (a1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					a1 = '*';
					f4 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '6')
			{
				if (b1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					b1 = '$';
					f5 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}

			if (p1 == '7')
			{
				if (c1 == ' ')
				{
					cout << "\t\t\t\t\t\t\t ��� ����� ��� ��������. �������� ������. ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					c1 = '@';
					f6 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					Examination_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
				}
			}
		}

	} while (true);
}


