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
	cout << "\t\t\t\t\t\t ############### ÈÃÐÀ ÏÀÌßÒÜ Ñ ÊÀÐÒÀÌÈ ###################" << endl;
	cout << "\t\t\t\t\t\t ###############                       ###################" << endl;
	cout << "\t\t\t\t\t\t ###############                       ###################" << endl;
	cout << "\t\t\t\t\t\t #########################################################" << endl << endl;

	cout << "\t\t\t\t\t\t #########################################################" << endl;
	cout << "\t\t\t\t\t\t ###############       ÌÅÍÞ ÈÃÐÛ       ###################" << endl << endl;
	cout << "\t\t\t\t\t\t #### ÂÛÁÐÀÒÜ ÈÃÐÎÂÎÅ ÏÎËÅ 4õ2 (8 êàðò)  - ÍÀÆÌÈÒÅ [1] ###" << endl;
	cout << "\t\t\t\t\t\t #### ÂÛÁÐÀÒÜ ÈÃÐÎÂÎÅ ÏÎËÅ 4õ3 (12 êàðò) - ÍÀÆÌÈÒÅ [2] ###" << endl;
	cout << "\t\t\t\t\t\t #### ÏÎÊÈÍÓÒÜ ÈÃÐÓ                      - ÍÀÆÌÈÒÅ [0] ###" << endl;
	cout << "\t\t\t\t\t\t #########################################################" << endl;
	cout << "\t\t\t\t\t\t #### ÑÄÅËÀÉÒÅ ÑÂÎÉ ÂÛÁÎÐ È ÍÀÆÌÈÒÅ ENTER:  ";

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

			cout << endl << endl << "\t\t\t\t\t\t Âûáðàíî èãðîâîå ïîëå 4õ2 (8 êàðò)." << endl;
			cout << "\t\t\t\t\t\t Èäåò çàãðóçêà ";
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
			cout << endl << endl << endl << endl << "\t\t\t\t\t\t ##################### ÈÃÐÀ ÍÀ×ÀËÀÑÜ #####################" << endl;
			Sleep(1500);
			system("cls");
			StartGame_4x2(doc);
			break;

		case '2':
			cout << endl << endl << "\t\t\t\t\t\t Âûáðàíî èãðîâîå ïîëå 4õ3 (12 êàðò)." << endl;
			cout << "\t\t\t\t\t\t Èäåò çàãðóçêà ";
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
			cout << endl << endl << endl << endl << "\t\t\t\t\t\t ##################### ÈÃÐÀ ÍÀ×ÀËÀÑÜ #####################" << endl;
			Sleep(1500);
			system("cls");
			StartGame_4x3(doc);
			break;

		case '0':
			cout << endl << "\t\t\t\t\t\t Âû ïîêèíóëè èãðó." << endl;
			break;

		default:
			PlaySound(TEXT("fail.wav"), NULL, SND_FILENAME | SND_ASYNC);
			cout << endl << "\t\t\t\t\t\t Íå ïðàâèëüíî ñäåëàí âûáîð. Ïîâòîðèòå ïîïûòêó..." << endl;
			cout << "\t\t\t\t\t\t #### ÑÄÅËÀÉÒÅ ÑÂÎÉ ÂÛÁÎÐ È ÍÀÆÌÈÒÅ ENTER:  ";
			break;
		}

	} while (i == '0');
}


