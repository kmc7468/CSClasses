#ifndef SYSTEM_INVALIDCASTEXCEPTION_H
#define SYSTEM_INVALIDCASTEXCEPTION_H

#include "System.h"

namespace System
{
	class InvalidCastException : public Exception
	{
	public:
		explicit InvalidCastException() = default;
		explicit InvalidCastException(const String& message)
		{
			this->message = message;
		}
		explicit InvalidCastException(const String& message, Exception* innerEx)
		{
			this->message = message;
			innerException = innerEx;
		}
		explicit InvalidCastException(const ExceptionData& data)
		{
			this->message = data.Message();
			this->source = data.Source();
			this->targetsite = data.TargetSite();
			this->link = data.HelpLink();
			this->innerException = data.InnerException();
		}
		InvalidCastException(InvalidCastException &&sNewException)
		{
			message = sNewException.message;
			source = sNewException.source;
			link = sNewException.link;
			targetsite = sNewException.targetsite;
			innerException = sNewException.innerException;
			// FIXME targetsite, innerException ��������
		}
		InvalidCastException(const InvalidCastException& sNewException)
		{
			message = sNewException.message;
			source = sNewException.source;
			link = sNewException.link;
			targetsite = sNewException.targetsite;
			innerException = sNewException.innerException;
			// FIXME targetsite, innerException ��������
		}
		~InvalidCastException() = default;
	};
}

#endif