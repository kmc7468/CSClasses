#ifndef SYSTEM_ARGUMENTEXCEPTION_H
#define SYSTEM_ARGUMENTEXCEPTION_H

#include "../../Defines.h"

#include "Exception.h"
#include "SystemException.h"
#include "String.h"

namespace CppNet
{
	namespace System
	{
		class ArgumentException : public SystemException
		{
		public:
			ArgumentException() = default;
			ArgumentException(const String& message, const String& paramName = "");
			ArgumentException(const String& message, Exception* innerEx, const String& paramName = "");
			ArgumentException(const ExceptionData& data, const String& paramName = "");
			ArgumentException(ArgumentException &&sNewException);
			ArgumentException(const ArgumentException& sNewException);
			~ArgumentException() = default;

		protected:
			String paramName;

		public:
			ArgumentException& operator=(ArgumentException&& ex);
			ArgumentException& operator=(const ArgumentException& ex);

		public:
			String Message() const override;

		public:
			virtual String ParamName() const;
		};
	}
}

#endif