
<<< setup


<<< generate

Tried aggregator 1 time.
MIP Presolve eliminated 0 rows and 1 columns.
Reduced MIP has 764 rows, 642 columns, and 3350 nonzeros.
Reduced MIP has 560 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (2,46 ticks)
Found incumbent of value 1,000000 after 0,01 sec. (5,29 ticks)
Probing fixed 0 vars, tightened 1 bounds.
Probing time = 0,00 sec. (3,57 ticks)
Tried aggregator 1 time.
Reduced MIP has 764 rows, 642 columns, and 3350 nonzeros.
Reduced MIP has 560 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (1,65 ticks)
Probing time = 0,00 sec. (2,53 ticks)
Clique table members: 2292.
MIP emphasis: balance optimality and feasibility.
MIP search method: dynamic search.
Parallel mode: deterministic, using up to 4 threads.
Root relaxation solution time = 0,01 sec. (9,83 ticks)

        Nodes                                         Cuts/
   Node  Left     Objective  IInf  Best Integer    Best Bound    ItCnt     Gap

*     0+    0                            1,0000       40,0000      378     --- 
      0     0       38,5129   235        1,0000       38,5129      378     --- 
      0     0       38,5129   107        1,0000       Cuts: 4      399     --- 
      0     0       38,4373   140        1,0000      Cuts: 50      509     --- 
      0     0       38,2990   142        1,0000      Cuts: 38      566     --- 
      0     0       38,2474   144        1,0000      Cuts: 57      665     --- 
*     0+    0                           31,0000       38,2474      665   23,38%
      0     0       38,1935   153       31,0000      Cuts: 55      735   23,20%
      0     0       37,9787   131       31,0000      Cuts: 55      853   22,51%
      0     0       37,7556   151       31,0000      Cuts: 56      964   21,79%
      0     0       37,6133   143       31,0000      Cuts: 52     1107   21,33%
      0     0       37,4140   133       31,0000      Cuts: 63     1211   20,69%
*     0+    0                           32,0000       37,4140     1211   16,92%
*     0+    0                           35,0000       37,4140     1305    6,90%
      0     0       37,3107   133       35,0000      Cuts: 60     1305    6,60%
      0     0       37,2847   136       35,0000      Cuts: 58     1391    6,53%
      0     0       37,2166   130       35,0000      Cuts: 45     1454    6,33%
      0     0       37,2089   138       35,0000      Cuts: 52     1520    6,31%
      0     0       36,4529    92       35,0000      Cuts: 51     1663    4,15%
      0     0       36,4529   128       35,0000      Cuts: 31     1727    4,15%
      0     0       36,4529    55       35,0000   ZeroHalf: 2     1737    4,15%
      0     0       36,4529    91       35,0000      Cuts: 29     1821    4,15%
      0     2       36,4529    83       35,0000       36,4200     1821    4,06%
Elapsed time = 0,74 sec. (407,62 ticks, tree = 0,01 MB, solutions = 4)

Clique cuts applied:  2
Implied bound cuts applied:  1
Flow cuts applied:  11
Mixed integer rounding cuts applied:  21
Zero-half cuts applied:  22
Gomory fractional cuts applied:  9

Root node processing (before b&c):
  Real time             =    0,74 sec. (407,09 ticks)
Parallel b&c, 4 threads:
  Real time             =    0,09 sec. (75,64 ticks)
  Sync time (average)   =    0,04 sec.
  Wait time (average)   =    0,00 sec.
                          ------------
Total (root+branch&cut) =    0,83 sec. (482,73 ticks)

<<< solve


OBJECTIVE: 35

x[1][1] = 1 x[1][2] = 1 x[1][3] = 1 x[1][4] = 1 x[1][5] = 1 x[1][6] = 1 x[1][7] = 1 x[1][8] = 1 
x[2][1] = 0 x[2][2] = 1 x[2][3] = 1 x[2][4] = 1 x[2][5] = 1 x[2][6] = 1 x[2][7] = 1 x[2][8] = 1 
x[3][1] = 1 x[3][2] = 1 x[3][3] = 1 x[3][4] = 1 x[3][5] = 1 x[3][6] = 1 x[3][7] = 1 x[3][8] = 1 
x[4][1] = 1 x[4][2] = 1 x[4][3] = 1 x[4][4] = 0 x[4][5] = 0 x[4][6] = 1 x[4][7] = 1 x[4][8] = 1 
x[5][1] = 1 x[5][2] = 1 x[5][3] = 1 x[5][4] = 0 x[5][5] = 0 x[5][6] = 1 x[5][7] = 1 x[5][8] = 1 


<<< post process


<<< done

