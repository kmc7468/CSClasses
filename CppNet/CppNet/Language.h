#ifndef LANGUAGE_H
#define LANGUAGE_H

#if defined(LANG_KOR)
#define TXT_INVALID_CAST_DEFMSG "�߸��� ��ȯ ������ �߻��Ͽ����ϴ�."
#define TXT_INVAILD_CAST_CHAR2BOOL "Char�� Boolean���� ��ȯ�� �� �����ϴ�."
#define TXT_INVALID_CAST_DATETIME2BOOL "DateTime�� Boolean���� ��ȯ�� �� �����ϴ�."
#define TXT_INVALID_CAST_DATETIME2BYTE "DateTime�� Byte�� ��ȯ�� �� �����ϴ�."

#define TXT_FORMAT_DEFMSG "���� �Ǵ� ������ �߸��Ǿ� ������ �߻��Ͽ����ϴ�."
#define TXT_FORMAT_STRING2BOOL_NOTSTR "�߸��� ���ڿ��Դϴ�."

#define TXT_NOTIMPL_DEFMSG "��û�� �޼��� �Ǵ� ������ �������� �ʾҽ��ϴ�."

#define TXT_EXCEPTION_DEFMSG "������ �߻��Ͽ����ϴ�."

#define TXT_INVALID_OPER_DEFMSG "�޼��� ȣ���� ��ȿ���� �ʽ��ϴ�."


#elif defined(LANG_ESP)
#define TXT_INVALID_CAST_DEFMSG "Nevalida rolantaro escepto."
#define TXT_INVAILD_CAST_CHAR2BOOL "Vi ne povas konverti Char al Boolean."
#define TXT_INVALID_CAST_DATETIME2BOOL "Vi ne povas konverti DateTime al Boolean."
#define TXT_INVALID_CAST_DATETIME2BYTE "Vi ne povas konverti DateTime al Byte."

#define TXT_FORMAT_DEFMSG "Nevalida formato escepto."
#define TXT_FORMAT_STRING2BOOL_NOTSTR "Nevalida kordoj."

#define TXT_NOTIMPL_DEFMSG "Petitaj metodo a? operacio ne efektivigis."

#define TXT_EXCEPTION_DEFMSG "Eraro okazis."

#define TXT_INVALID_OPER_DEFMSG "La metodo alvoko estas nevalida."

#else
#define TXT_INVALID_CAST_DEFMSG "Invalid cast exception."
#define TXT_INVAILD_CAST_CHAR2BOOL "Can't cast a from Char to Boolean."
#define TXT_INVALID_CAST_DATETIME2BOOL "Can't cast a from DateTime to Boolean."
#define TXT_INVALID_CAST_DATETIME2BYTE "Can't cast a from DateTime to Byte."

#define TXT_FORMAT_DEFMSG "Invalid format exception."
#define TXT_FORMAT_STRING2BOOL_NOTSTR "Invalid string."

#define TXT_NOTIMPL_DEFMSG "Requested method or operation is not implemented."

#define TXT_EXCEPTION_DEFMSG "An error has occurred."

#define TXT_INVALID_OPER_DEFMSG "The method call is invalid."


#endif

#endif