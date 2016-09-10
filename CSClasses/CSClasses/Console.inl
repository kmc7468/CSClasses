#include "Console.h"

namespace System
{
	void Console::Write(Boolean boolean)
	{
		std::wcout << (boolean ? L"True" : L"False");
	}

	void Console::Write(Char character)
	{
		std::wcout << character;
	}

	void Console::Write(const String& string)
	{
		std::wcout << string;
	}

	void Console::Write(const String& string, Int32 index, Int32 count)
	{
		std::wcout.write(string.c_str() + index, count);
	}

	void Console::Write(Double doubled)
	{
		std::wcout << doubled;
	}

	void Console::Write(Int16 integer)
	{
		std::wcout << integer;
	}

	void Console::Write(Int32 integer)
	{
		std::wcout << integer;
	}

	void Console::Write(Int64 integer)
	{
		std::wcout << integer;
	}

	void Console::Write(UInt16 integer)
	{
		std::wcout << integer;
	}

	void Console::Write(UInt32 integer)
	{
		std::wcout << integer;
	}

	void Console::Write(UInt64 integer)
	{
		std::wcout << integer;
	}

	void Console::Write(Single single)
	{
		std::wcout << single;
	}

	void Console::WriteLine()
	{
		std::wcout << std::endl;
	}

	void Console::WriteLine(Boolean boolean)
	{
		std::wcout << (boolean ? L"True" : L"False") << std::endl;
	}

	void Console::WriteLine(Char character)
	{
		std::wcout << character << std::endl;
	}

	void Console::WriteLine(const String& str)
	{
		std::wcout << str << std::endl;
	}

	void Console::WriteLine(const String& string, Int32 index, Int32 count)
	{
		std::wcout.write(string.c_str() + index, count) << std::endl;
	}

	void Console::WriteLine(Double doubled)
	{
		std::wcout << doubled << std::endl;
	}

	void Console::WriteLine(Int16 integer)
	{
		std::wcout << integer << std::endl;
	}

	void Console::WriteLine(Int32 integer)
	{
		std::wcout << integer << std::endl;
	}

	void Console::WriteLine(Int64 integer)
	{
		std::wcout << integer << std::endl;
	}

	void Console::WriteLine(UInt16 integer)
	{
		std::wcout << integer << std::endl;
	}

	void Console::WriteLine(UInt32 integer)
	{
		std::wcout << integer << std::endl;
	}

	void Console::WriteLine(UInt64 integer)
	{
		std::wcout << integer << std::endl;
	}

	String Console::ReadLine()
	{
		String str;
		std::getline(std::wcin, str);
		return str;
	}
}