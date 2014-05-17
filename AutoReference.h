
///
#include "StlTypes.h"
#include <string>

namespace cpp_ctti
{

   struct AutoReferenceBase
   {
      virtual unsigned typeID() = 0;
   };
   template <class U>
   struct AutoReference : public AutoReferenceBase
   {
      typedef U InnerType;
      AutoReference()
         :mObject(0)
      {}
      AutoReference(U& obj)
         :mObject(obj)
      {}
      U& operator*()
      {
         return mObject;
      }
      U* operator->()
      {
         return &mObject;
      }
      virtual unsigned typeID() { return types::_typeID<U>(); }
      virtual std::string typeName()
      {
#if defined (_MSC_VER)
         std::string funcName(__FUNCSIG__);
         std::string::size_type found = funcName.find("AutoReference<");
         if (found!=std::string::npos)
         {
            std::string type(funcName.substr(found+14));
            std::string::size_type found2 = type.find(">");
            if (found2!=std::string::npos)
            {
               return type.substr(0,found2);
            }
         }
         return funcName;
#else
         std::string funcName(__PRETTY_FUNCTION__);
         std::string::size_type found = funcName.find("with U = ");
         if (found!=std::string::npos)
         {
            std::string type(funcName.substr(found+9));
            std::string::size_type found2 = type.find(";");
            if (found2!=std::string::npos)
            {
               return type.substr(0,found2);
            }
         }
         return funcName;
#endif
         return "U";
      }
   private:
      U& mObject;
   };

}
