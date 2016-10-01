#ifndef CPPNET_KMC_FRACTION_H
#define CPPNET_KMC_FRACTION_H

#include <tuple>

#include "../../SystemTypes.h"
using namespace System;

#include "Decimal.h"

namespace CppNet
{
	namespace KMC
	{
		template<typename integer = UInt32>
		class Fraction final : public Object
		{
		public:
			Fraction(integer denominator);
			Fraction(integer numerator, integer denominator);
			Fraction(const Decimal& decimal);
			Fraction(const String& fraction);
			Fraction(const Fraction<integer>& f);
			Fraction(Fraction<integer>&& f);
			~Fraction() = default;

		private:
			integer numerator = 1; // ����
			integer denominator = 1; // �и�

			static inline integer gcd(integer a, integer b); // �ִ� �����
			static inline integer lcm(integer a, integer b); // �ּ� �����

		public:
			Fraction<integer>& operator=(const Fraction<integer>& f);
			Fraction<integer>& operator=(Fraction<integer>&& f);

		public: 
			// ���
			inline Fraction<integer> ROAF();
			// ���
			inline std::tuple<Fraction<integer>, Fraction<integer>> RTCD(const Fraction<integer>& extra);
		};

		using Fraction64 = Fraction<UInt64>;
		using Fraction32 = Fraction<UInt32>;
		using Fraction16 = Fraction<UInt16>;
		using Fraction8 = Fraction<Byte>;
	}
}

#include "Fraction.inl"

#endif