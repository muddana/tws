#ifndef __interpreter__
#define __interpreter__

    /*  ABSTRACT MACHINE OPERATIONS  */
 
#define HALTOP      1 /* 'HALT'        */
#define NOP             2 /* 'NOP'         */
#define LITOP           3 /* 'LIT'         */
#define LLVOP           4 /* 'LLV'         */
#define LGVOP           5 /* 'LGV'         */
#define SLVOP           6 /* 'SLV'         */
#define SGVOP           7 /* 'SGV'         */
#define LLIVOP          8 /* 'LLIV'        */
#define LGIVOP          9 /* 'LGIV'        */
#define SLIVOP         10 /* 'SLIV'        */
#define SGIVOP         11 /* 'SGIV'        */
#define LLAOP          12 /* 'LLA'         */
#define LGAOP          13 /* 'LGA'         */
#define LUVOP          14 /* 'LUV'         */
#define SUVOP          15 /* 'SUV'         */
#define UOPOP          16 /* 'UOP'         */
#define BOPOP          17 /* 'BOP'         */
#define POPOP          18 /* 'POP'         */
#define DUPOP          19 /* 'DUP'         */
#define SWAPOP         20 /* 'SWAP'        */
#define CALLOP         21 /* 'CALL'        */
#define RTNOP          22 /* 'RTN'         */
#define GOTOOP         23 /* 'GOTO'        */
#define CONDOP         24 /* 'COND'        */
#define CODEOP         25 /* 'CODE'        */
#define SOSOP          26 /* 'SOS'         */
 
    /* ABSTRACT MACHINE OPERANDS */
 
         /* UNARY OPERANDS */
#define UNOT           27 /* 'UNOT'        */
#define UNEG           28 /* 'UNEG'        */
#define USUCC          29 /* 'USUCC'       */
#define UPRED          30 /* 'UPRED'       */
         /* BINARY OPERANDS */
#define BAND           31 /* 'BAND'        */
#define BOR            32 /* 'BOR'         */
#define BPLUS          33 /* 'BPLUS'       */
#define BMINUS         34 /* 'BMINUS'      */
#define BMULT          35 /* 'BMULT'       */
#define BDIV           36 /* 'BDIV'        */
#define BMOD           37 /* 'BMOD'        */
#define BEXP           38 /* 'BEXP'        */
#define BEQ            39 /* 'BEQ'         */
#define BNE            40 /* 'BNE'         */
#define BLE            41 /* 'BLE'         */
#define BGE            42 /* 'BGE'         */
#define BLT            43 /* 'BLT'         */
#define BGT            44 /* 'BGT'         */
         /* OS SERVICE CALL OPERANDS */
#define TRACEX         45 /* 'TRACEX'      */
#define DUMPMEM        46 /* 'DUMPMEM'     */
#define OSINPUT        47 /* 'INPUT'       */
#define OSOUTPUT       48 /* 'OUTPUT'      */
#define OSOUTPUTL      49 /* 'OUTPUT'      */
#define OSEOF          50 /* 'EOF'         */
#define OSINPUTC       51 /* 'INPUTC'      */
#define OSOUTPUTC      52 /* 'OUTPUTC'     */
     /* SPECIAL SYSTEM CALLS */
#define LIMITOP        53 /* 'LIMIT'       */


#define StartInstruction 1
#define true	1
#define false   0

#endif
