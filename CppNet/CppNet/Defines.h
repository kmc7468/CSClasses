#ifndef DEFINES_H
#define DEFINES_H

/* �̰��� ���Ǹ� �Ͻʽÿ�. ����ڰ� ������ �� �ִ� ���� ����� ��Ű�� �����ϼ���.
https://github.com/kmc7468/CppNet/wiki/%EC%A0%84%EC%B2%98%EB%A6%AC%EA%B8%B0 */

#define BIT_64
#define WIN32
#define LANG_KOR










// �������� ���ʽÿ�.
#ifdef WIN32
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#undef max
#undef min
#undef LMEM_FIXED
#undef LMEM_MOVEABLE
#undef LANG_NEUTRAL
#endif

#endif