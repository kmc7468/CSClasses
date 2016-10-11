#ifndef CPPNET_KMC_INTEGER_H
#define CPPNET_KMC_INTEGER_H

#include "../../Defines.h"

#include "../../System/Object.h"
#include "../../System/Byte.h"
#include "../../System/Int64.h"

using namespace std;
using namespace System;

namespace CppNet
{
	namespace KMC
	{
		class Integer final : public Object
		{
		private:
			Byte* data = nullptr;
			size_t len = 0;
			/* len�� �ڷ����� �����ϸ� �� ���� ������ ǥ���� �� �ֽ��ϴ�.
			�����ϰ� �� ��� �ݵ�� unsigned�� ���ּ���. signed�� ������ unsigned�� ���� ������ŭ��
			ǥ���� �� �ְ� �˴ϴ�.
			Byte=2^255��ŭ�� �� ó�� ����
			UInt16=2^65535��ŭ�� �� ó�� ����
			UInt32=2^(2^32-1)��ŭ�� �� ó�� ����
			UInt64=2^(2^64-1)��ŭ�� �� ó�� ����*/

		public:
			Integer();
			Integer(Int64 i);
			Integer(const Integer& i);
			Integer(Integer&& i);
			~Integer();

		private:
			void resize(size_t newsize);

		public:
			Integer operator+(const Integer& i) const;
			Integer& operator+=(const Integer& i);

		public:
			String ToString() const override;
		};
	}
}

#endif