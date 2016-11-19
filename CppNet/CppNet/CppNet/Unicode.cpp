#include "Unicode.h"
#include "Unicode9_0.h"

#include "../Defines.h"

namespace CppNet
{
#ifdef UNICODE_CUSTOM // Ŀ������ ���
	Unicode* Unicode::unicode = nullptr;

#else // �������� ���� ��� (Unicode 9.0)
	Unicode* Unicode::unicode = new Unicode9_0();
#endif
}