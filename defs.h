#ifndef DEFS_H
#define DEFS_H
#include <iostream>
#include <stdlib.h>

#define DEBUG // Enables the debug mode

#ifndef DEBUG
#define ASSERT(n) // Empty macro if DEBUG is not defined
#else
#define ASSERT(n)                                             \
    if (!(n))                                                 \
    {                                                         \
        std::cout << "Assertion failed: " << #n << std::endl; \
        std::cout << "Date: " << __DATE__ << std::endl;       \
        std::cout<<"FILE"<<__FILE__;
        std::cout<<"AT LINE"<<__LINE__;
        exit(1);                                              \
    }
#endif
typedef unsigned long long U64;
#define NAME "VICE 1.0"
#define BRD_SQ_NUM 120
#define MAX_MOVES_GAME 2048
enum
{
    EMPTY,
    wP,
    wN,
    wB,
    wR,
    wQ,
    wK,
    bP,
    bN,
    bB,
    bQ,
    bK
};
enum
{
    FILE_A,
    FILE_B,
    FILE_C,
    FILE_D,
    FILE_E,
    FILE_F,
    FILE_G,
    FILE_H,
    FILE_NONE
};

enum
{
    RANK_1, // 0
    RANK_2, // 1
    RANK_3, // 2
    RANK_4, // 3
    RANK_5, // 4
    RANK_6, // 5
    RANK_7, // 6
    RANK_8, // 7
    RANK_NONE
};

enum
{
    BLACK,
    WHITE,
    BOTH
};

enum
{
    A1 = 21,
    B1,
    C1,
    D1,
    E1,
    F1,
    G1,
    H1,
    A2 = 31,
    B2,
    C2,
    D2,
    E2,
    F2,
    G2,
    H2
};

enum
{
    WKCA = 1,
    WQCA = 2,
    BKCA = 4,
    BQCA = 8
};

typedef struct
{
    int move;
    int castlePerm;
    int enPas;
    int fiftyMove;
    U64 PosKey;
} S_UNDO;

typedef struct
{
    int pieces[BRD_SQ_NUM];
    U64 pawns[3];
    int KingSq[2];
    int side;
    int castlePerm;
    int enPass;
    int fiftyMove;

    int ply;
    int hisPlay;
    U64 posKey;
    int pceNum[13];
    int bigPce[3];
    int majPce[3];
    int minPce[3];
    S_UNDO history[MAX_MOVES_GAME];
    // piece list
    int pList[13][10];
} S_BOARD;

// MACROS
#define FR2SQ(f, r) ((21 + (f)) + ((r) * 10))

// GLOBALS
extern int Sq120ToSq64[BRD_SQ_NUM];
extern int Sq64To120[64];

// FUNCTIONS
extern void AllInit();
#endif