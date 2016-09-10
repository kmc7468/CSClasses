#ifndef SYSTEM_DRAWING_POINTF_H
#define SYSTEM_DRAWING_POINTF_H

#include "System.h"

namespace System
{
	namespace Drawing
	{
		class PointF : public Object
		{
		public:
			PointF(Single x, Single y)
			{
				X = x;
				Y = y;
			}

		public:
			static const PointF& Empty;

			// TODO Add(s)

		public:
			Boolean operator==(const Object& obj) override
			{
				if (is<const PointF&>(obj))
				{
					const PointF& p = dynamic_cast<const PointF&>(obj);

					// FIXME: ���� ��Ŀ� ���� ���� �ݿ� �ʿ�
					if (p.X == X && p.Y == Y) return true;
					else return false;
				}
				else
					return false;
			}

			Boolean operator!=(const Object& obj) override
			{
				if (is<const PointF&>(obj))
				{
					const PointF& p = dynamic_cast<const PointF&>(obj);

					// FIXME: ���� ��Ŀ� ���� ���� �ݿ� �ʿ�
					if (p.X == X && p.Y == Y) return false;
					else return true;
				}
				else
					return true;
			}

		public:
			Single X = 0.0;
			Single Y = 0.0;
			Boolean IsEmpty()
			{
				if (X == 0.0 && Y == 0.0) return true;
				else return false;
			}
		};

		const PointF& PointF::Empty = PointF(0.0, 0.0);
	}
}

#endif