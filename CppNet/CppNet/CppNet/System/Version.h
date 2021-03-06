#ifndef SYSTEM_VERSION_H
#define SYSTEM_VERSION_H

#include "../../Defines.h"

#include "../System/Object.h"
#include "../System/ICloneable.h"
#include "../System/IComparable.h"
#include "../System/IEquatable.h"

namespace CppNet
{
	namespace System
	{
		class Version final : public Object, public ICloneable, public IComparable<>, public IComparable<Version>, public IEquatable<Version>
		{
		public:
			Version() = default;
			Version(Int32 major, Int32 minor, Int32 build, Int32 revision);
			Version(Int32 major, Int32 minor, Int32 build);
			Version(Int32 major, Int32 minor);
			Version(Int32 major);
			Version(const String& version);
			Version(Version&& ver);
			Version(const Version& ver);
			~Version() = default;

		private:
			Int32 major, minor, build, revision;

		public:
			inline Object Clone() override;
			inline Int32 CompareTo(const Object& obj) const override;
			inline Int32 CompareTo(const Version& obj) const override;
			inline Boolean Equals(const Version& obj) const override;
			inline Boolean Equals(const Object& obj) const override;

		public:
			Boolean operator==(const Object& obj) const override;
			Boolean operator!=(const Object& obj) const override;

		public:
			static Version Parse(const String& input);
		};
	}
}

#include "Version.inl"

#endif