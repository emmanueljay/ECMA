
<<< setup


<<< generate

Tried aggregator 1 time.
MIP Presolve eliminated 300 rows and 241 columns.
MIP Presolve modified 44 coefficients.
Reduced MIP has 479 rows, 402 columns, and 2087 nonzeros.
Reduced MIP has 350 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (1,25 ticks)
Found incumbent of value 1,000000 after 0,00 sec. (3,18 ticks)
Probing fixed 0 vars, tightened 27 bounds.
Probing time = 0,00 sec. (3,41 ticks)
Tried aggregator 1 time.
MIP Presolve modified 71 coefficients.
Reduced MIP has 479 rows, 402 columns, and 2087 nonzeros.
Reduced MIP has 350 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (1,02 ticks)
Probing time = 0,00 sec. (2,49 ticks)
Clique table members: 1462.
MIP emphasis: balance optimality and feasibility.
MIP search method: dynamic search.
Parallel mode: deterministic, using up to 4 threads.
Root relaxation solution time = 0,00 sec. (4,94 ticks)

        Nodes                                         Cuts/
   Node  Left     Objective  IInf  Best Integer    Best Bound    ItCnt     Gap

*     0+    0                            1,0000       25,0000      255     --- 
      0     0       24,8120   173        1,0000       24,8120      255     --- 
      0     0       24,8078    73        1,0000       Cuts: 7      277     --- 
      0     0       24,0000    72        1,0000      Cuts: 87      323     --- 
      0     0       24,0000    83        1,0000      Cuts: 75      398     --- 
*     0+    0                            2,0000       24,0000      529     --- 
      0     0       24,0000   114        2,0000      Cuts: 91      529     --- 
      0     2       24,0000    77        2,0000       24,0000      529     --- 
Elapsed time = 0,34 sec. (181,96 ticks, tree = 0,01 MB, solutions = 2)
*    14+   14                            3,0000       24,0000     1855  700,00%
*    14+   14                            4,0000       24,0000     1855  500,00%
*    14+   14                            5,0000       24,0000     1855  380,00%
*   661+  480                           16,0000       23,7388    20591   48,37%
    768   552       21,2205    60       16,0000       23,7048    22358   48,15%
*  1133+  771                           17,0000       23,3466    29421   37,33%
*  1216   822      integral     0       18,0000       23,3466    30885   29,70%
   2116  1181        cutoff             18,0000       23,0000    54745   27,78%
   2481  1422       23,0000    24       18,0000       22,9371    64836   27,43%
   2495  1430       22,8200   155       18,0000       22,9371    67518   27,43%
   2805  1131       22,8075   144       18,0000       22,9371    80459   27,43%
   3457   829       20,5389   107       18,0000       21,1352    99894   17,42%
   4052   618       19,6727    60       18,0000       20,6227   119773   14,57%
   4804   623       19,4279   169       18,0000       20,1514   142876   11,95%

Clique cuts applied:  4
Cover cuts applied:  1
Flow cuts applied:  10
Mixed integer rounding cuts applied:  85
Zero-half cuts applied:  19
Lift and project cuts applied:  1
Gomory fractional cuts applied:  2

Root node processing (before b&c):
  Real time             =    0,34 sec. (181,69 ticks)
Parallel b&c, 4 threads:
  Real time             =    4,29 sec. (2779,70 ticks)
  Sync time (average)   =    0,45 sec.
  Wait time (average)   =    0,00 sec.
                          ------------
Total (root+branch&cut) =    4,63 sec. (2961,39 ticks)

<<< solve


OBJECTIVE: 18

x[1][1] = 1 x[1][2] = 1 x[1][3] = 0 x[1][4] = 1 x[1][5] = 1 x[1][6] = 0 x[1][7] = 0 x[1][8] = 0 
x[2][1] = 0 x[2][2] = 1 x[2][3] = 1 x[2][4] = 1 x[2][5] = 1 x[2][6] = 0 x[2][7] = 0 x[2][8] = 0 
x[3][1] = 0 x[3][2] = 0 x[3][3] = 0 x[3][4] = 1 x[3][5] = 1 x[3][6] = 0 x[3][7] = 0 x[3][8] = 0 
x[4][1] = 1 x[4][2] = 1 x[4][3] = 1 x[4][4] = 1 x[4][5] = 0 x[4][6] = 0 x[4][7] = 0 x[4][8] = 0 
x[5][1] = 1 x[5][2] = 1 x[5][3] = 1 x[5][4] = 1 x[5][5] = 0 x[5][6] = 0 x[5][7] = 0 x[5][8] = 0 


<<< post process


<<< done

