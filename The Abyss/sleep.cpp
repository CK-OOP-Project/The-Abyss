#include "stdafx.h"
#include "sleep.h"
#pragma comment(lib,"Winmm")

void std::SkipableSleep(unsigned int milisecond)
{
	DWORD waitTime = timeGetTime() + milisecond;

	while (waitTime > timeGetTime())
	{
		if (SteamB23::Console::GetKeyAvailable())
		{
			SteamB23::Console::ReadKey();
			// ���� ������
			while (SteamB23::Console::GetKeyAvailable())
			{
				SteamB23::Console::ReadKey();
			}
			return;
		}
		Sleep(1);
	}
}
