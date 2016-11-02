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
			// 버퍼 날리기
			while (SteamB23::Console::GetKeyAvailable())
			{
				SteamB23::Console::ReadKey();
			}
			return;
		}
		Sleep(1);
	}
}
