#include "Utility.h"

// FIXME: hpp ���Ϸ� �и�

template <typename T, typename U>
System::Boolean is(U&& u)
{
	return std::is_base_of_v<T, U>;
}