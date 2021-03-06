#ifndef SYSTEM_XML_XPATH_XPATHITEM_H
#define SYSTEM_XML_XPATH_XPATHITEM_H

#include "../../../../Defines.h"

#include "../../Object.h"

namespace CppNet
{
	namespace System
	{
		namespace Xml
		{
			namespace XPath
			{
				class XPathItem : public Object
				{
				public:
					virtual Boolean IsNode() const = 0;
				};
			}
		}
	}
}

#endif