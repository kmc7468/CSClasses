#ifndef UTILITY_H
#define UTILITY_H

#include "Defines.h"
#include "CppNet/event.h"
#include <type_traits>
#include <chrono>

#ifndef interface
#define interface struct
#endif

#ifndef var
#define var auto
#endif

#ifndef nameof
#define nameof(x) CppNet::System::String(#x)
#endif

#ifndef typeof
#define typeof(x) typeid(x)
#endif

#ifndef MAIN_END
#define MAIN_END system("pause");return 0;
#endif

#ifndef dref
#define dref(t) std::remove_reference<t>::type
#endif

#ifndef dcst
#define dcst(from, to_type) (*const_cast<to_type*>(&from))
#endif

#ifndef _is
#define _is(from, to_type) is<to_type>(from)
#endif

#ifndef _as
#define _as(from, to_type) as<to_type>(from)
#endif

#ifndef GET
#define GET
#endif

#ifndef SET
#define SET
#endif

#ifndef GETA
#define GETA return this->value;
#endif

#ifndef SETA
#define SETA this->value = value;
#endif

#ifndef prop
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
type& operator=(const type&value){\
setter\
;return this->value;\
}\
} name;
#endif

#ifndef props
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
type& operator=(const type&value){\
setter\
;return this->value;\
}\
} name;
#endif

#ifndef propv
// value ������ ������� ���� �Ϲ����� ������Ƽ
#define propv(type, name, getter, setter) \
class{\
public:\
operator type() const {\
getter\
;\
}\
type& operator=(const type&value){\
setter\
;return this->value;\
}\
} name;
#endif

#ifndef propg
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
#endif

#ifndef propgs
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
#endif

#ifndef propgv
// value ������ ������� �ʰ� �б� ������ ������Ƽ
#define propgv(type, name, getter) \
class{\
public:\
operator type() const {\
getter\
;\
}\
} name;
#endif

#ifndef evnt
#define evnt(del, name) CppNet::event<del> name
#endif

#ifndef _CalcTime
#define _CalcTime(codes, result, result_name) std::chrono::system_clock::time_point _CalcTime_A = std::chrono::system_clock::now();\
codes; \
std::chrono::system_clock::time_point _CalcTime_B = std::chrono::system_clock::now();\
result result_name = _CalcTime_B - _CalcTime_A;
#endif

#ifndef _Default
#define _Default(type) type{}
#endif

#ifndef _internal
#define _internal private
#endif

#ifndef ABSTRACT_CLASS
#define ABSTRACT_CLASS protected:virtual void to_abstract() const final = 0;private:
#endif

#include "CppNet/as.hpp"
#include "CppNet/is.hpp"
#include "CppNet/MinValue.hpp"
#include "CppNet/MaxValue.hpp"

#endif