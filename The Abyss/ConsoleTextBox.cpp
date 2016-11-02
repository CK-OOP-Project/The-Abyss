#include "stdafx.h"
#include "ConsoleTextBox.h"


ConsoleTextBox::ConsoleTextBox(
	int row,
	std::vector<std::string> texts,
	int left,
	int top,
	int length,
	SteamB23::ConsoleColor foregroundColor,
	SteamB23::ConsoleColor backgroundColor,
	bool isRight)
{
	consoleTexts = new ConsoleText*[row];
	consoleTextsLength = row;
	for (int i = 0; i < row; i++)
	{
		consoleTexts[i] =
			i < texts.size() ?
			new ConsoleText(texts[i], left, top + i, length, foregroundColor, backgroundColor, isRight) :
			new ConsoleText(left, top + i, length, foregroundColor, backgroundColor, isRight);
	}
}

ConsoleTextBox::ConsoleTextBox(
	std::vector<std::string> texts,
	int left,
	int top,
	int length,
	SteamB23::ConsoleColor foregroundColor,
	SteamB23::ConsoleColor backgroundColor,
	bool isRight)
	: ConsoleTextBox(texts.size(), texts, left, top, length, foregroundColor, backgroundColor, isRight)
{
}

ConsoleTextBox::~ConsoleTextBox()
{
}
