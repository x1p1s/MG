#include "Default.h"
#include <Windows.h>
#include <iostream>
#include <ctime>

using namespace std;

void Menu()
{
	PlaySound(TEXT("menu.wav"), NULL, SND_FILENAME | SND_ASYNC);

	cout << endl << endl;
	cout << "\t\t\t\t\t\t #########################################################" << endl;
	cout << "\t\t\t\t\t\t ###############                       ###################" << endl;
	cout << "\t\t\t\t\t\t ############### ���� ������ � ������� ###################" << endl;
	cout << "\t\t\t\t\t\t ###############                       ###################" << endl;
	cout << "\t\t\t\t\t\t ###############                       ###################" << endl;
	cout << "\t\t\t\t\t\t #########################################################" << endl << endl;

	cout << "\t\t\t\t\t\t #########################################################" << endl;
	cout << "\t\t\t\t\t\t ###############       ���� ����       ###################" << endl << endl;
	cout << "\t\t\t\t\t\t #### ������� ������� ���� 4�2 (8 ����)  - ������� [1] ###" << endl;
	cout << "\t\t\t\t\t\t #### ������� ������� ���� 4�3 (12 ����) - ������� [2] ###" << endl;
	cout << "\t\t\t\t\t\t #### �������� ����                      - ������� [0] ###" << endl;
	cout << "\t\t\t\t\t\t #########################################################" << endl;
	cout << "\t\t\t\t\t\t #### �������� ���� ����� � ������� ENTER:  ";

	char i;
	County doc;
	doc.count = 0;
	doc.concidences = 0;
	doc.timer = 0;

	do
	{
		cin >> i;

		PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

		switch (i)
		{
		case '1':

			cout << endl << endl << "\t\t\t\t\t\t ������� ������� ���� 4�2 (8 ����)." << endl;
			cout << "\t\t\t\t\t\t ���� �������� ";
			PlaySound(TEXT("start.wav"), NULL, SND_FILENAME | SND_ASYNC);
			Sleep(1000);
			cout << " .";
			Sleep(1000);
			cout << " .";
			Sleep(1000);
			cout << " .";
			Sleep(1000);
			cout << " .";
			Sleep(1000);
			cout << " .";
			Sleep(1000);
			cout << " .";
			Sleep(1000);
			cout << " .";
			Sleep(1000);
			cout << " .";
			Sleep(1000);
			cout << endl << endl << endl << endl << "\t\t\t\t\t\t ##################### ���� �������� #####################" << endl;
			Sleep(1500);
			system("cls");
			StartGame_4x2(doc);
			break;

		case '2':
			cout << endl << endl << "\t\t\t\t\t\t ������� ������� ���� 4�3 (12 ����)." << endl;
			cout << "\t\t\t\t\t\t ���� �������� ";
			PlaySound(TEXT("start.wav"), NULL, SND_FILENAME | SND_ASYNC);
			Sleep(1000);
			cout << " .";
			Sleep(1000);
			cout << " .";
			Sleep(1000);
			cout << " .";
			Sleep(1000);
			cout << " .";
			Sleep(1000);
			cout << " .";
			Sleep(1000);
			cout << " .";
			Sleep(1000);
			cout << " .";
			Sleep(1000);
			cout << " .";
			Sleep(1000);
			cout << endl << endl << endl << endl << "\t\t\t\t\t\t ##################### ���� �������� #####################" << endl;
			Sleep(1500);
			system("cls");
			StartGame_4x3(doc);
			break;

		case '0':
			cout << endl << "\t\t\t\t\t\t �� �������� ����." << endl;
			break;

		default:
			PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
			cout << endl << "\t\t\t\t\t\t �� ��������� ������ �����. ��������� �������..." << endl;
			cout << "\t\t\t\t\t\t #### �������� ���� ����� � ������� ENTER:  ";
			break;
		}

	} while (i == '0');
}


