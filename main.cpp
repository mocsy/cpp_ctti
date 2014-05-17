#include <iostream>
#include "AutoReference.h"
using namespace std;
using namespace cpp_ctti;

int main()
{
    int x = 8;
    AutoReference<int> arInt(x);
    cout << arInt.typeID() << endl;
    cout << arInt.typeName() << endl;
    return 0;
}
