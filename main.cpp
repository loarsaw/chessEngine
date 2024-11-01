#include <iostream>
#include <stdio.h>
#include "defs.h"
using namespace std;
int main()
{
    AllInit();
    int num = 10;
    int nuts = 40;
    ASSERT(num == nuts);
    return 0;
}
