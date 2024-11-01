#include <iostream>
#include <stdio.h>
#include "defs.h"
void PrintBitBoard(U64 bb)
{
    U64 shiftMe = 1ULL;
    int rank = 0;
    int file = 0;
    int sq = 0;
    int sq64 = 0;

    std::cout << "\n";
    for (rank = RANK_8; rank >= RANK_1; --rank)
    {
        for (file = FILE_A; file <= FILE_H; ++file)
        {
            sq = FR2SQ(file, rank);
            sq64 = SQ64(sq);
            if ((shiftMe << sq64) && bb)
                std::cout << "X";
            else
                std::cout << "-";
        }
        std::cout << "\n";
    }
    std::cout << "\n\n";
}
