#include <Windows.h>
#include <iostream>
#include "Default.h"
#include <rpcasync.h>
#include <wtypes.h>
#pragma comment(lib, "winmm.lib")

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	HWND hwnd = GetForegroundWindow();
	ShowWindow(hwnd, SW_MAXIMIZE);

	Menu();
}

