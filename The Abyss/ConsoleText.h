#pragma once
#include "stdafx.h"
class ConsoleText
{
public:
	ConsoleText(
		std::string text,
		int left,
		int top,
		int length,
		SteamB23::ConsoleColor foregroundColor = SteamB23::ConsoleColor::Gray,
		SteamB23::ConsoleColor backgroundColor = SteamB23::ConsoleColor::Black,
		bool isRight = false);
	ConsoleText(
		int left,
		int top,
		int length,
		SteamB23::ConsoleColor foregroundColor = SteamB23::ConsoleColor::Gray,
		SteamB23::ConsoleColor backgroundColor = SteamB23::ConsoleColor::Black,
		bool isRight = false);
	~ConsoleText();
	
	std::string GetText() { return text; };
	void SetText(std::string value);

	int GetLeft() { return left; };
	void SetLeft(int value) { left = value; };

	int GetTop() { return top; };
	void SetTop(int value) { top = value; };

	int GetLength() { return length; };

	bool GetIsRight() { return isRight; };
	void SetIsRight(bool value) { isRight = value; };

	SteamB23::ConsoleColor GetForgroundColor() { return foregroundColor; };
	void SetForegroundColor(SteamB23::ConsoleColor value) { foregroundColor = value; };

	SteamB23::ConsoleColor GetBackgroundColor() { return backgroundColor; };
	void SetBackgroundColor(SteamB23::ConsoleColor value) { backgroundColor = value; };

	int GetAsciiLength() { return asciiLength; };

	void Present();
private:
	std::string text;
	int left;
	int top;
	int length;
	SteamB23::ConsoleColor foregroundColor;
	SteamB23::ConsoleColor backgroundColor;
	bool isRight;
	int asciiLength;
};

