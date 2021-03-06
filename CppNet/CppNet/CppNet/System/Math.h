#ifndef SYSTEM_MATH_H
#define SYSTEM_MATH_H

#include "../../Defines.h"

#include "../../SystemTypes.h"

#include "../KMC/Decimal.h"

#include <cmath>

namespace CppNet
{
	namespace System
	{
		class Math final : public Object
		{
		public:
			Math() = default;
			Math(Math &&sNewMath) = delete;
			Math(const Math &sNewMath) = delete;
			~Math() = default;

		public:
			Math &operator=(Math &&sNewMath) = delete;
			Math &operator=(const Math &sNewMath) = delete;

		public:
			static const Double PI;
			static const Double E;
			static const Int32 C;
			static const UInt64 C2;

			static inline Double Abs(Double d);
			static inline Int64 Abs(Int64 integer);
			static inline Int32 Abs(Int32 integer);
			static inline Int16 Abs(Int16 integer);
			static inline Double Acos(Double d);
			static inline Double Asin(Double d);
			static inline Double Atan(Double d);
			static inline Double Atan2(Double d, Double d2);
			static inline Int64 BigMul(Int32 integer, Int32 integer2);
			static inline Double Ceiling(Double d);
			static inline Double Cos(Double d);
			static inline Double Cosh(Double d);
			static inline Int64 DivRem(Int64 a, Int64 b, Int64& result);
			static inline Int32 DivRem(Int32 a, Int32 b, Int32& result);
			static inline Double Exp(Double d);
			static inline Double IEEERemainder(Double a, Double b);
			static inline Double Log(Double d);
			static inline Double Log(Double d, Double newBase);
			static inline Double Log10(Double d);
			static inline Byte Max(Byte b, Byte b2);
			static inline Double Max(Double d, Double d2);
			static inline Int16 Max(Int16 integer, Int16 integer2);
			static inline Int32 Max(Int32 integer, Int32 integer2);
			static inline Int64 Max(Int64 integer, Int64 integer2);
			static inline UInt16 Max(UInt16 integer, UInt16 integer2);
			static inline UInt32 Max(UInt32 integer, UInt32 integer2);
			static inline UInt64 Max(UInt64 integer, UInt64 integer2);
			static inline Single Max(Single d, Single d2);
			static inline Byte Min(Byte b, Byte b2);
			static inline Double Min(Double d, Double d2);
			static inline Int16 Min(Int16 integer, Int16 integer2);
			static inline Int32 Min(Int32 integer, Int32 integer2);
			static inline Int64 Min(Int64 integer, Int64 integer2);
			static inline UInt16 Min(UInt16 integer, UInt16 integer2);
			static inline UInt32 Min(UInt32 integer, UInt32 integer2);
			static inline UInt64 Min(UInt64 integer, UInt64 integer2);
			static inline Single Min(Single d, Single d2);
			static inline Double Pow(Double d, Double d2);
			static inline KMC::Decimal Pow(KMC::Decimal base, KMC::Decimal exp);
			static inline Double Round(Double d);
			static inline Double Round(Double d, Int32 digits);
			static inline Double Sign(Double d);
			static inline Single Sign(Single d);
			static inline Double Sin(Double d);
			static inline Double Sinh(Double d);
			static inline Double Sqrt(Double d);
			static inline Double Tan(Double d);
			static inline Double Tanh(Double d);
			static inline Double Truncaste(Double d);

			static inline UInt64 Factorial(UInt64 i);
			static inline UInt64 Fibonacci(UInt64 i);

			static inline KMC::Decimal Energy(KMC::Decimal m);

			static std::vector<Int64> PrimeNumbers(Int64 min, Int64 max);
			static std::vector<UInt64> PrimeNumbers(UInt64 min, UInt64 max);
		};
	}
}

#include "Math.inl"

#endif