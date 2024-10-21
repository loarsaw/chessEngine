#ifndef DEFS_H
#define DEFS_H
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
    RANK_1,
    RANK_2,
    RANK_3,
    RANK_4,
    RANK_5,
    RANK_6,
    RANK_7,
    RANK_8,
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

} S_BOARD;

#endif