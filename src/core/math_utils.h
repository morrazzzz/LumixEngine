#pragma once


#include "core/lumix.h"
#include "core/vec3.h"

#ifdef max
#undef max
#endif

#ifdef min
#undef min
#endif


namespace Lumix
{
	namespace Math
	{
		static const float PI = 3.14159265f;

		LUMIX_CORE_API bool getRayPlaneIntersecion(const Vec3& origin, const Vec3& dir, const Vec3& plane_point, const Vec3& normal, float& out);
		LUMIX_CORE_API bool getRaySphereIntersection(const Vec3& origin, const Vec3& dir, const Vec3& center, float radius, Vec3& out);
		LUMIX_CORE_API bool getRayAABBIntersection(const Vec3& origin, const Vec3& dir, const Vec3& min, const Vec3& size, Vec3& out);

		template <typename T>
		LUMIX_FORCE_INLINE T min(T a, T b)
		{
			return a < b ? a : b;
		}

		template <typename T>
		LUMIX_FORCE_INLINE T max(T a, T b)
		{
			return a < b ? b : a;
		}

		template <typename T>
		LUMIX_FORCE_INLINE T maxValue(T a, T b)
		{
			return a < b ? b : a;
		}

		template <typename T>
		LUMIX_FORCE_INLINE T minValue(T a, T b)
		{
			return a > b ? b : a;
		}

		template <typename T>
		LUMIX_FORCE_INLINE T abs(T a)
		{
			return a > 0 ? a : -a;
		}

		template <typename T>
		LUMIX_FORCE_INLINE T signum(T a)
		{
			return a > 0 ? (T)1 : (a < 0 ? (T)-1 : 0);
		}

		template <typename T>
		LUMIX_FORCE_INLINE T clamp(T value, T min_value, T max_value)
		{
			return min(max(value, min_value), max_value);
		}

		template <typename T>
		bool isPowOfTwo(T n) 
		{ 
			return (n) && !(n & (n - 1));
		}

		LUMIX_FORCE_INLINE float degreesToRadians(float angle)
		{
			 return angle * PI / 180.0f;
		}

	}
}