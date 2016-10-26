#ifndef CPPNET_GC_PTR_H
#define CPPNET_GC_PTR_H

#include "../Defines.h"

#include <memory>

#include "System/Object.h"
#include "System/UInt64.h"

namespace CppNet
{
	class gc;

	template<class T>
	class gc_ptr : public System::Object
	{
		friend class gc;

	public:
		gc_ptr() = default;
		gc_ptr(gc_ptr<T>&& gc);
		gc_ptr(const gc_ptr<T>& gc);
		~gc_ptr();

	private:
		gc_ptr(size_t index, size_t arr_num);

		mutable size_t index = 0;
		// ���⼭ index�� �ĺ� �ڵ��̴�. 0�� ����Ű�� ���� �ʴٴ� �ǹ��̴�.

		mutable size_t arr_num = 0;

	public:
		T* operator->() const;
		T& operator*() const;

		gc_ptr<T>& operator=(const gc_ptr<T>& gc);
		gc_ptr<T>& operator=(gc_ptr<T>&& gc);
	};
}

#include "gc_ptr.inl"

#endif