#ifndef CPPNET_GC_PTR_H
#define CPPNET_GC_PTR_H

#include "../Defines.h"

#include <memory>

#include "../System/Object.h"
#include "../System/UInt64.h"

namespace CppNet
{
	template<class T>
	class gc_ptr : public System::Object
	{
	public:
		gc_ptr() = delete;
		gc_ptr(gc_ptr<T>&& gc);
		gc_ptr(const gc_ptr<T>& gc);
		~gc_ptr();

	private:
		gc_ptr(size_t index);

		mutable size_t index = 0;
		// ���⼭ index�� �ĺ� �ڵ��̴�. 0�� ����Ű�� ���� �ʴٴ� �ǹ��̴�.

	public:
		T* operator->() const;
		T& operator*() const;
	};
}

#include "gc_ptr.inl"

#endif