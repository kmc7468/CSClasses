#ifndef LANGUAGE_H
#define LANGUAGE_H

#if defined(LANG_KOR)
#define TXT_INVAILD_CAST_CHAR2BOOL L"Char�� Boolean���� ��ȯ�� �� �����ϴ�."
#define TXT_INVALID_CAST_DATETIME2BOOL L"DateTime�� Boolean���� ��ȯ�� �� �����ϴ�."

#elif defined(LANG_ESP)
#define TXT_INVAILD_CAST_CHAR2BOOL L"Vi ne povas konverti Char al Boolean."
#define TXT_INVALID_CAST_DATETIME2BOOL L"Vi ne povas konverti DateTime al Boolean."

#else
#define TXT_INVAILD_CAST_CHAR2BOOL L"Can't cast a from Char to Boolean."
#define TXT_INVALID_CAST_DATETIME2BOOL L"Can't cast a from DateTime to Boolean."

#endif

#endif