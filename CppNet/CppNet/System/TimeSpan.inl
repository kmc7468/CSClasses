#include "TimeSpan.h"
using namespace System;

Int64 TimeSpan::Ticks() const
{
	return ticks;
}

Int32 TimeSpan::Days() const
{
	return (Int32)(ticks / TicksPerDay);
}

Int32 TimeSpan::Hours() const
{
	return (Int32)((ticks / TicksPerHour) % 24);
}

Int32 TimeSpan::Milliseconds() const
{
	return (Int32)((ticks / TicksPerMillisecond) % 1000);
}

Int32 TimeSpan::Minutes() const
{
	return (Int32)((ticks / TicksPerMinute) % 60);
}

Int32 TimeSpan::Seconds() const
{
	return (Int32)((ticks / TicksPerSecond) % 60);
}

Double TimeSpan::TotalDays() const
{
	return ((Double)ticks) * DaysPerTick;
}

Double TimeSpan::TotalHours() const
{
	return (Double)ticks * HoursPerTick;
}

Double TimeSpan::TotalMilliseconds() const
{
	return (Double)ticks * MillisecondsPerTick;
}

Double TimeSpan::TotalMinutes() const
{
	return (Double)ticks * MinutesPerTick;
}

Double TimeSpan::TotalSeconds() const
{
	return (Double)ticks * SecondsPerTick;
}