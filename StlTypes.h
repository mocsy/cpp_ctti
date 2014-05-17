
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
}
