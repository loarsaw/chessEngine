#include <iostream>
#include <stdio.h>
#include "defs.h"
using namespace std;
int main()
{
    AllInit();
    U64 playBitBoard = 0ULL;
    cout << "Started";
    PrintBitBoard(playBitBoard);

    playBitBoard |= (1ULL << SQ64(D2));
    cout << "PAWN ADDED";
    PrintBitBoard(playBitBoard);

    playBitBoard |= (1ULL << SQ64(G2));
    cout << "PAWN ADDED";
    PrintBitBoard(playBitBoard);

    return 0;
}
