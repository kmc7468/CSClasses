#include "Char.h"

#include "Utility.h"
#include "Exception.h"

namespace System
{
	Int32 Char::CompareTo(const Object& obj)
	{
		if (is<const Char&>(obj))
		{
			var c = as<const Char&>(obj);

			return (dat - c.dat);
		}
		else
			throw Exception("�� ���ڿ���~"); // FIXME ArgumentException
	}

	Int32 Char::CompareTo(const Char& obj)
	{
		return (dat - obj.dat);
	}
}