#include "stdafx.h"
#include "ConsoleText.h"

ConsoleText::ConsoleText(
	std::string text,
	int left,
	int top,
	int length,
	SteamB23::ConsoleColor foregroundColor,
	SteamB23::ConsoleColor backgroundColor,
	bool isRight)
{
	this->length = length;
	this->SetText(text);
	this->left = left;
	this->top = top;
	this->foregroundColor = foregroundColor;
	this->backgroundColor = backgroundColor;
	this->isRight = isRight;
}

ConsoleText::ConsoleText(int left, int top, int length, SteamB23::ConsoleColor foregroundColor, SteamB23::ConsoleColor backgroundColor, bool isRight)
	:ConsoleText("",left,top,length,foregroundColor,backgroundColor, isRight)
{
}

ConsoleText::~ConsoleText()
{
}

void ConsoleText::SetText(std::string value)
{
	int asciiLength = value.length();
	if (asciiLength <= length)
	{
		this->text = value;
		this->asciiLength = asciiLength;
	}
	else
	{
		throw "value의 길이는 Element.Length보다 클 수 없습니다.";
	}
}

void ConsoleText::Present()
{
	if (left + asciiLength < 80)
	{
		if (top <= 30)
		{
			SteamB23::Console::SetCursorPosition(left, top);
			SteamB23::Console::SetForegroundColor(foregroundColor);
			SteamB23::Console::SetBackgroundColor(backgroundColor);

			if (isRight)
			{
				for (int i = 0; i < length - asciiLength; i++)
					std::cout << ' ';
				std::cout << text;
			}
			else
			{
				std::cout << text;
				for (int i = 0; i < length - asciiLength; i++)
					std::cout << ' ';
			}
			SteamB23::Console::ResetColor();
		}
	}
}
