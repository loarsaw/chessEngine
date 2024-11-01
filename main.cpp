#include <iostream>
#include <stdio.h>
#include "defs.h"
using namespace std;
int main()
{
    AllInit();
    int num = 3;
    int ryan = 45;
    ASSERT(num == ryan);
    return 0;
}
