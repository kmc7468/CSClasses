#ifndef SYSTEM_DRAWING_POINT_H
#define SYSTEM_DRAWING_POINT_H

#include "../../../Defines.h"

#include "../Int32.h"
#include "../Boolean.h"
#include "../Object.h"

namespace CppNet
{
	namespace System
	{
		namespace Drawing
		{
			class Point : public Object
			{
			public:
				Point() = default;
				Point(Int32 x, Int32 y);
				// TODO: Point(Size)
				virtual ~Point() = default;

			public:
				static const Point& Empty;

			public:
				Int32 X = 0;
				Int32 Y = 0;
				Boolean IsEmpty() const;
			};
		}
	}
}

#endif