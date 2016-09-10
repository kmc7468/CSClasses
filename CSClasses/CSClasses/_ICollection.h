﻿#ifndef SYSTEM_COLLECTIONS_ICOLLECTION_H
#define SYSTEM_COLLECTIONS_ICOLLECTION_H

#include "System.h"
#include "_IEnumerable.h"

#include <array>

namespace System
{
	namespace Collections
	{
		interface ICollection : public IEnumerable
		{
			virtual Int32 Count() = 0;

			virtual Boolean IsSynchronized() = 0;

			virtual Object SyncRoot() = 0;

			template <typename T, size_t _Size>
			virtual void CopyTo(std::array<T, _Size> array, Int32 index) = 0;


		};
	}
}

#endif