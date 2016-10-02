#include "Char.h"

#include "../Utility.h"
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

	Char::operator Int32()
	{
		return dat;
	}

	Char Char::operator=(Char&& c)
	{
		return Char(c);
	}

	Char Char::operator=(const Char& c)
	{
		return Char(c);
	}

	Boolean Char::operator==(const Object& obj) const
	{
		return Equals(*const_cast<Object*>(&obj));
	}

	Boolean Char::operator!=(const Object& obj) const
	{
		return !Equals(*const_cast<Object*>(&obj));
	}

	Boolean Char::operator<(const Char& obj)
	{
		return (dat < obj.dat);
	}

	Boolean Char::operator<=(const Char& obj)
	{
		return (dat <= obj.dat);
	}

	Boolean Char::operator>(const Char& obj)
	{
		return (dat > obj.dat);
	}

	Boolean Char::operator>=(const Char& obj)
	{
		return (dat >= obj.dat);
	}

	Boolean Char::operator<(char32_t obj)
	{
		return (dat < obj);
	}

	Boolean Char::operator<=(char32_t obj)
	{
		return (dat <= obj);
	}

	Boolean Char::operator>(char32_t obj)
	{
		return (dat > obj);
	}

	Boolean Char::operator>=(char32_t obj)
	{
		return (dat >= obj);
	}

	Boolean Char::Equals(const Char& c) const
	{
		if (c.dat == dat)
			return true;
		else
			return false;
	}

	Boolean Char::Equals(Object& obj) const
	{
		if (is<Char&>(obj))
			return Equals(as<Char&>(obj));
		else
			return false;
	}
}