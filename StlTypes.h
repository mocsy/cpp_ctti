
///
#include "FundamentalTypes.h"
#include <string>
#include <exception>

namespace types
{
   template<>
   unsigned _typeID<std::string>() { return 40; }
   template<>
   unsigned _typeID<std::string*>() { return 41; }
   template<>
   unsigned _typeID<std::exception>() { return 42; }
   template<>
   unsigned _typeID<std::exception*>() { return 43; }
}
