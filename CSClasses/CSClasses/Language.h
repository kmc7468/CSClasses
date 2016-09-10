#ifndef LANGUAGE_H
#define LANGUAGE_H

#if defined(LANG_KOR)
#define TXT_INVALID_CAST_DEFMSG L"�߸��� ��ȯ ������ �߻��Ͽ����ϴ�."
#define TXT_INVAILD_CAST_CHAR2BOOL L"Char�� Boolean���� ��ȯ�� �� �����ϴ�."
#define TXT_INVALID_CAST_DATETIME2BOOL L"DateTime�� Boolean���� ��ȯ�� �� �����ϴ�."
#define TXT_INVALID_CAST_DATETIME2BYTE L"DateTime�� Byte�� ��ȯ�� �� �����ϴ�."

#define TXT_FORMAT_DEFMSG L"���� �Ǵ� ������ �߸��Ǿ� ������ �߻��Ͽ����ϴ�."
#define TXT_FORMAT_STRING2BOOL_NOTSTR L"�߸��� ���ڿ��Դϴ�."

#define TXT_NOTIMPL_DEFMSG L"��û�� �޼��� �Ǵ� ������ �������� �ʾҽ��ϴ�."

#define TXT_EXCEPTION_DEFMSG L"������ �߻��Ͽ����ϴ�."


#elif defined(LANG_ESP)
#define TXT_INVALID_CAST_DEFMSG L"Nevalida rolantaro escepto."
#define TXT_INVAILD_CAST_CHAR2BOOL L"Vi ne povas konverti Char al Boolean."
#define TXT_INVALID_CAST_DATETIME2BOOL L"Vi ne povas konverti DateTime al Boolean."
#define TXT_INVALID_CAST_DATETIME2BYTE L"Vi ne povas konverti DateTime al Byte."

#define TXT_FORMAT_DEFMSG L"Nevalida formato escepto."
#define TXT_FORMAT_STRING2BOOL_NOTSTR L"Nevalida kordoj."

#define TXT_NOTIMPL_DEFMSG L"Petitaj metodo a? operacio ne efektivigis."

#define TXT_EXCEPTION_DEFMSG L"Eraro okazis."

#else
#define TXT_INVALID_CAST_DEFMSG L"Invalid cast exception."
#define TXT_INVAILD_CAST_CHAR2BOOL L"Can't cast a from Char to Boolean."
#define TXT_INVALID_CAST_DATETIME2BOOL L"Can't cast a from DateTime to Boolean."
#define TXT_INVALID_CAST_DATETIME2BYTE L"Can't cast a from DateTime to Byte."

#define TXT_FORMAT_DEFMSG L"Invalid format exception."
#define TXT_FORMAT_STRING2BOOL_NOTSTR L"Invalid string."

#define TXT_NOTIMPL_DEFMSG L"Requested method or operation is not implemented."

#define TXT_EXCEPTION_DEFMSG L"An error has occurred."


#endif

#endif