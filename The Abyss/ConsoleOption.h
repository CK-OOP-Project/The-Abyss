#pragma once
#include "stdafx.h"
#include "ConsoleTextBox.h"
class ConsoleOption
{
public:
	ConsoleOption(
		std::vector<std::string> elements,
		int left,
		int top,
		int length,
		SteamB23::ConsoleColor foregroundColor = SteamB23::ConsoleColor::Gray,
		SteamB23::ConsoleColor backgroundColor = SteamB23::ConsoleColor::Black,
		SteamB23::ConsoleColor selectedForegroundColor = SteamB23::ConsoleColor::Black,
		SteamB23::ConsoleColor selectedBackgroundColor = SteamB23::ConsoleColor::Gray,
		bool isRight = false);
	~ConsoleOption();

	int GetSelect();

	void Present();
private:
	ConsoleTextBox textBox;

	SteamB23::ConsoleColor foregroundColor;
	SteamB23::ConsoleColor backgroundColor;
	SteamB23::ConsoleColor selectedForegroundColor;
	SteamB23::ConsoleColor selectedBackgroundColor;

	int left, top;
	int length;

	std::vector<std::shared_ptr<std::string>> texts;
	ConsoleText* UpdateElementColor(int elementNumber, SteamB23::ConsoleColor foregroundColor, SteamB23::ConsoleColor backgroundColor)
	{
		ConsoleText* consoleText = textBox.consoleTexts[elementNumber];
		consoleText->SetForegroundColor(foregroundColor);
		consoleText->SetBackgroundColor(backgroundColor);
		return consoleText;
	};
	bool InputNumber(int number, int& currentSelectedNumber)
	{
		bool ok = number < textBox.consoleTextsLength;
		if (ok)
		{
			currentSelectedNumber = number;
		}
		return ok;
	}
};