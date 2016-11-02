#include "stdafx.h"
#include "ConsoleOption.h"

ConsoleOption::ConsoleOption(std::vector<std::string> elements, int left, int top, int length, SteamB23::ConsoleColor foregroundColor, SteamB23::ConsoleColor backgroundColor, SteamB23::ConsoleColor selectedForegroundColor, SteamB23::ConsoleColor selectedBackgroundColor, bool isRight)
	:textBox(elements, left, top, length, foregroundColor, backgroundColor, isRight)
{
	this->foregroundColor = foregroundColor;
	this->backgroundColor = backgroundColor;
	this->selectedForegroundColor = selectedForegroundColor;
	this->selectedBackgroundColor = selectedBackgroundColor;
}

ConsoleOption::~ConsoleOption()
{

}

int ConsoleOption::GetSelect()
{
	int currentSelectedNumber = 0;
	ConsoleText* item = UpdateElementColor(currentSelectedNumber, selectedForegroundColor, selectedBackgroundColor);
	Present();
	SteamB23::Console::SetCursorPosition(item->GetLeft() + item->GetAsciiLength(), item->GetTop());
	while (true)
	{
		SteamB23::ConsoleKeyInfo keyInfo = SteamB23::Console::ReadKey();
		// 버퍼 날리기
		while (SteamB23::Console::GetKeyAvailable())
		{
			SteamB23::Console::ReadKey();
		}

		switch (keyInfo.Key)
		{
			using namespace SteamB23;

		case ConsoleKey::UpArrow:
			if (currentSelectedNumber > 0)
			{
				item = UpdateElementColor(currentSelectedNumber--, foregroundColor, backgroundColor);
				item->Present();
				item = UpdateElementColor(currentSelectedNumber, selectedForegroundColor, selectedBackgroundColor);
				item->Present();
				Console::SetCursorPosition(item->GetLeft() + item->GetAsciiLength(), item->GetTop());
			}
			break;
		case ConsoleKey::DownArrow:
			if (currentSelectedNumber + 1 < textBox.consoleTextsLength)
			{
				item = UpdateElementColor(currentSelectedNumber++, foregroundColor, backgroundColor);
				item->Present();
				item = UpdateElementColor(currentSelectedNumber, selectedForegroundColor, selectedBackgroundColor);
				item->Present();
				Console::SetCursorPosition(item->GetLeft() + item->GetAsciiLength(), item->GetTop());
			}
			break;
		case ConsoleKey::Enter:
			ENTER:
			textBox.SetForegroundColor(this->foregroundColor);
			textBox.SetBackgroundColor(this->backgroundColor);
			Console::SetCursorPosition(0, textBox.GetTop() + textBox.GetLength());
			return currentSelectedNumber;
		case ConsoleKey::F1:
		case ConsoleKey::D1:
			if (InputNumber(0, currentSelectedNumber))
				goto ENTER;
			else
				break;
		case ConsoleKey::F2:
		case ConsoleKey::D2:
			if (InputNumber(1, currentSelectedNumber))
				goto ENTER;
			else
				break;
		case ConsoleKey::F3:
		case ConsoleKey::D3:
			if (InputNumber(2, currentSelectedNumber))
				goto ENTER;
			else
				break;
		case ConsoleKey::F4:
		case ConsoleKey::D4:
			if (InputNumber(3, currentSelectedNumber))
				goto ENTER;
			else
				break;
		case ConsoleKey::F5:
		case ConsoleKey::D5:
			if (InputNumber(4, currentSelectedNumber))
				goto ENTER;
			else
				break;
		case ConsoleKey::F6:
		case ConsoleKey::D6:
			if (InputNumber(5, currentSelectedNumber))
				goto ENTER;
			else
				break;
		case ConsoleKey::F7:
		case ConsoleKey::D7:
			if (InputNumber(6, currentSelectedNumber))
				goto ENTER;
			else
				break;
		case ConsoleKey::F8:
		case ConsoleKey::D8:
			if (InputNumber(7, currentSelectedNumber))
				goto ENTER;
			else
				break;
		case ConsoleKey::F9:
		case ConsoleKey::D9:
			if (InputNumber(8, currentSelectedNumber))
				goto ENTER;
			else
				break;
		case ConsoleKey::F10:
		case ConsoleKey::D0:
			if (InputNumber(9, currentSelectedNumber))
				goto ENTER;
			else
				break;
		case ConsoleKey::F11:
			if (InputNumber(10, currentSelectedNumber))
				goto ENTER;
			else
				break;
		case ConsoleKey::F12:
			if (InputNumber(11, currentSelectedNumber))
				goto ENTER;
			else
				break;
		}

		//Present();
	}
}

void ConsoleOption::Present()
{
	textBox.Present();
}
