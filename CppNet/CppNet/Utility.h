#ifndef UTILITY_H
#define UTILITY_H

#include "Defines.h"

#include "CppNet/System/Boolean.h"
#include "CppNet/event.h"

#include <type_traits>

#define interface struct
#define var auto

#define nameof(x) String(#x);
#define typeof(x) typeid(x)
#define MAIN_END system("pause");return 0;

#define dref(t) std::remove_reference<##t>::type
#define dcst(from, to_type) (*const_cast<to_type##*>(&##from))

#define _is(from, to_type) is<to_type>(from)

#define _as(from, to_type) as<to_type>(from)

#define GET
#define SET

#define GETA return this->value;
#define SETA this->value = value;

// �Ϲ����� ������Ƽ
#define prop(type, name, getter, setter) \
class{\
private:\
type value;\
public:\
operator type() const {\
getter\
;\
}\
type##& operator=(const type##&value){\
setter\
;return this->value;\
}\
} name;

// �ʱ� ���� �ִ� �Ϲ����� ������Ƽ
#define props(type, name, getter, setter, start) \
class{\
private:\
type value = start;\
public:\
operator type() const {\
getter\
;\
}\
type##& operator=(const type##&value){\
setter\
;return this->value;\
}\
} name;

// value ������ ������� ���� �Ϲ����� ������Ƽ
#define propv(type, name, getter, setter) \
class{\
public:\
operator type() const {\
getter\
;\
}\
type##& operator=(const type##&value){\
setter\
;return this->value;\
}\
} name;

// �б� ������ ������Ƽ
#define propg(type, name, getter) \
class{\
private:\
type value;\
public:\
operator type() const {\
getter\
;\
}\
} name;

// �б� �����̰� �ʱ� ���� �ִ� ������Ƽ
#define propgs(type, name, getter, start) \
class{\
private:\
type value = start;\
public:\
operator type() const {\
getter\
;\
}\
} name;

// value ������ ������� �ʰ� �б� ������ ������Ƽ
#define propgv(type, name, getter) \
class{\
public:\
operator type() const {\
getter\
;\
}\
} name;

template <typename T, typename U>
inline System::Boolean is(U& u)
{
	/*std::is_base_of<U, T> r;

	System::Boolean result = r();

	if (result) return result;
	else
	{
		std::is_base_of<T, U> r2;

		return r2();
	}*/

	if (T* p = dynamic_cast<T*>(&u))
		return true;
	else
		return false;
}

template <typename T, typename U>
inline T as(U& u)
{
	return dynamic_cast<T>(u);
}

#define evnt(del, name) CppNet::event<del> name

#endif