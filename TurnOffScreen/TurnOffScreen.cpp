#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <Windows.h>
using namespace std;

	int main()
	{
		SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
		return 0;

	}
	
