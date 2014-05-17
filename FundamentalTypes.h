
///Complete list of fundamental types in C++:
///Even numbers are types, odd numbers are pointers
///http://www.cplusplus.com/doc/tutorial/variables/

namespace types
{
   template<typename T>
   unsigned _typeID() { return 0; }
   
   ///Boolean type	bool
   template<>
   unsigned _typeID<bool>() { return 1; }

   ///Character types
   ///char	Exactly one byte in size. At least 8 bits.
   template<>
   unsigned _typeID<char>() { return 2; }
   template<>
   unsigned _typeID<char*>() { return 3; }
#if __cplusplus >= 201103L
   ///char16_t	Not smaller than char. At least 16 bits.
   template<>
   unsigned _typeID<char16_t>() { return 4; }
   template<>
   unsigned _typeID<char16_t*>() { return 5; }
   ///char32_t	Not smaller than char16_t. At least 32 bits.
   template<>
   unsigned _typeID<char32_t>() { return 6; }
   template<>
   unsigned _typeID<char32_t*>() { return 7; }
#endif
   ///wchar_t	Can represent the largest supported character set.
   template<>
   unsigned _typeID<wchar_t>() { return 8; }
   template<>
   unsigned _typeID<wchar_t*>() { return 9; }

   ///Integer types (signed)
   ///signed char	Same size as char. At least 8 bits.
   template<>
   unsigned _typeID<signed char>() { return 10; }
   template<>
   unsigned _typeID<signed char*>() { return 11; }
   ///signed short int	Not smaller than char. At least 16 bits.
   template<>
   unsigned _typeID<signed short int>() { return 12; }
   template<>
   unsigned _typeID<signed short int*>() { return 13; }
   ///signed int	Not smaller than short. At least 16 bits.
   template<>
   unsigned _typeID<signed int>() { return 14; }
   template<>
   unsigned _typeID<signed int*>() { return 15; }
   ///signed long int	Not smaller than int. At least 32 bits.
   template<>
   unsigned _typeID<signed long int>() { return 16; }
   template<>
   unsigned _typeID<signed long int*>() { return 17; }
   ///signed long long int	Not smaller than long. At least 64 bits.
   template<>
   unsigned _typeID<signed long long int>() { return 18; }
   template<>
   unsigned _typeID<signed long long int*>() { return 19; }

   ///Integer types (unsigned)
   ///unsigned char	(same size as their signed counterparts)
   template<>
   unsigned _typeID<unsigned char>() { return 20; }
   template<>
   unsigned _typeID<unsigned char*>() { return 21; }
   ///unsigned short int
   template<>
   unsigned _typeID<unsigned short int>() { return 22; }
   template<>
   unsigned _typeID<unsigned short int*>() { return 23; }
   ///unsigned int
   template<>
   unsigned _typeID<unsigned int>() { return 24; }
   template<>
   unsigned _typeID<unsigned int*>() { return 25; }
   ///unsigned long int
   template<>
   unsigned _typeID<unsigned long int>() { return 26; }
   template<>
   unsigned _typeID<unsigned long int*>() { return 27; }
   ///unsigned long long int
   template<>
   unsigned _typeID<unsigned long long int>() { return 28; }
   template<>
   unsigned _typeID<unsigned long long int*>() { return 29; }

   ///Floating-point types
   ///float
   template<>
   unsigned _typeID<float>() { return 30; }
   template<>
   unsigned _typeID<float*>() { return 31; }
   ///double	Precision not less than float
   template<>
   unsigned _typeID<double>() { return 32; }
   template<>
   unsigned _typeID<double*>() { return 33; }
   ///long double	Precision not less than double
   template<>
   unsigned _typeID<long double>() { return 34; }
   template<>
   unsigned _typeID<long double*>() { return 35; }
   ///Void type	void	no storage
   template<>
   unsigned _typeID<void>() { return 36; }
   template<>
   unsigned _typeID<void*>() { return 37; }
#if __cplusplus >= 201103L
   ///Null pointer	decltype(nullptr)
   template<>
   unsigned _typeID<decltype(nullptr)>() { return 38; }
   template<>
   unsigned _typeID<decltype(nullptr)*>() { return 39; }
#endif
}
