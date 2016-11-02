#pragma once
#include "stdafx.h"
#include "ConsoleText.h"
class ConsoleTextBox
{
public:
	ConsoleText** consoleTexts;
	int consoleTextsLength;
	ConsoleTextBox(
		int row,
		std::vector<std::string> texts,
		int left,
		int top,
		int length,
		SteamB23::ConsoleColor foregroundColor = SteamB23::ConsoleColor::Gray,
		SteamB23::ConsoleColor backgroundColor = SteamB23::ConsoleColor::Black,
		bool isRight = false);
	ConsoleTextBox(
		std::vector<std::string> texts,
		int left,
		int top,
		int length,
		SteamB23::ConsoleColor foregroundColor = SteamB23::ConsoleColor::Gray,
		SteamB23::ConsoleColor backgroundColor = SteamB23::ConsoleColor::Black,
		bool isRight = false);
	~ConsoleTextBox();

	int GetLeft() { return consoleTexts[0]->GetLeft(); };
	void SetLeft(int value)
	{
		for (int i = 0; i < consoleTextsLength; i++)
		{
			consoleTexts[i]->SetLeft(value);
		}
	};

	int GetTop() { return consoleTexts[0]->GetTop(); };
	void SetTop(int value)
	{
		for (int i = 0; i < consoleTextsLength; i++)
		{
			consoleTexts[i]->SetTop(value + i);
		}
	};

	int GetLength() { return consoleTexts[0]->GetLength(); };

	bool GetIsRight() { return consoleTexts[0]->GetIsRight(); };
	void SetIsRight(bool value)
	{
		for (int i = 0; i < consoleTextsLength; i++)
		{
			consoleTexts[i]->SetIsRight(value);
		}
	};

	SteamB23::ConsoleColor GetForgroundColor() { return consoleTexts[0]->GetBackgroundColor(); };
	void SetForegroundColor(SteamB23::ConsoleColor value)
	{
		for (int i = 0; i < consoleTextsLength; i++)
		{
			consoleTexts[i]->SetForegroundColor(value);
		}
	};

	SteamB23::ConsoleColor GetBackgroundColor() { return consoleTexts[0]->GetBackgroundColor(); };
	void SetBackgroundColor(SteamB23::ConsoleColor value)
	{
		for (int i = 0; i < consoleTextsLength; i++)
		{
			consoleTexts[i]->SetBackgroundColor(value);
		}
	};
	void Present()
	{
		for (int i = 0; i < consoleTextsLength; i++)
		{
			consoleTexts[i]->Present();
		}
	}
};

