#define LANG_KOR
#define WIN32

#include <string>

#include <CSClasses/Console.h>
#include <CSClasses/SystemTypes.h>
#include <CSClasses/Math.h>
#include <CSClasses/Convert.h>

using namespace std;
using namespace System;

int main(void)
{
	wcout.imbue(locale("korean"));

	Console::WriteLine(L"Hello, world!"s);
	// NOTE: Hello, world! �� �����Դϴ�.

	Console::WriteLine(L"���� �������� �Է��� �ּ���."s);
	String s = Console::ReadLine();

	Byte b = Convert::ToByte(s);

	Console::WriteLine(b * b*Math::PI, 30);

	system("pause");

	return 0;
}