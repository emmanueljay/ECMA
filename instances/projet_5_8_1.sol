
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
Presolve time = 0,00 sec. (1,64 ticks)
Probing time = 0,00 sec. (2,53 ticks)
Clique table members: 2292.
MIP emphasis: balance optimality and feasibility.
MIP search method: dynamic search.
Parallel mode: deterministic, using up to 4 threads.
Root relaxation solution time = 0,01 sec. (12,54 ticks)

        Nodes                                         Cuts/
   Node  Left     Objective  IInf  Best Integer    Best Bound    ItCnt     Gap

*     0+    0                            1,0000       40,0000      433     --- 
      0     0       35,2392   253        1,0000       35,2392      433     --- 
      0     0       35,0210   101        1,0000      Cuts: 34      481     --- 
      0     0       28,6405    94        1,0000      Cuts: 88      560     --- 
      0     0       28,0696    98        1,0000      Cuts: 55      601     --- 
      0     0       27,9977    89        1,0000      Cuts: 22      638     --- 
      0     0       27,9194    64        1,0000      Cuts: 27      664     --- 
*     0+    0                            5,0000       27,9194      728  458,39%
      0     0       27,8338   121        5,0000      Cuts: 17      728  456,68%
      0     0       27,2690   119        5,0000      Cuts: 52      786  445,38%
      0     0       27,1400   107        5,0000      Cuts: 47      848  442,80%
      0     0       26,9829   125        5,0000      Cuts: 32      955  439,66%
      0     0       26,7990   118        5,0000      Cuts: 30     1031  435,98%
      0     0       26,5374   151        5,0000      Cuts: 27     1403  430,75%
      0     0       26,2351   136        5,0000      Cuts: 50     1512  424,70%
      0     0       25,9703   140        5,0000      Cuts: 35     1643  419,41%
      0     0       25,6649   126        5,0000      Cuts: 35     1689  413,30%
*     0+    0                           20,0000       25,6649     1689   28,32%
      0     0       25,3308   122       20,0000      Cuts: 42     1772   26,65%
      0     0       24,8291   117       20,0000      Cuts: 31     2009   24,15%
      0     0       24,4908   132       20,0000      Cuts: 54     2415   22,45%
      0     0       24,1198   124       20,0000      Cuts: 39     3183   20,60%
*     0+    0                           21,0000       24,1198     3998   14,86%
      0     0       23,7281   204       21,0000      Cuts: 38     3998   12,41%
      0     0       22,3301   126       21,0000      Cuts: 45     4094    6,33%
      0     0        cutoff             21,0000                   4097    0,00%
Elapsed time = 0,67 sec. (371,77 ticks, tree = 0,00 MB, solutions = 4)

Clique cuts applied:  2
Implied bound cuts applied:  18
Flow cuts applied:  1
Mixed integer rounding cuts applied:  25
Zero-half cuts applied:  41

Root node processing (before b&c):
  Real time             =    0,67 sec. (371,81 ticks)
Parallel b&c, 4 threads:
  Real time             =    0,00 sec. (0,00 ticks)
  Sync time (average)   =    0,00 sec.
  Wait time (average)   =    0,00 sec.
                          ------------
Total (root+branch&cut) =    0,67 sec. (371,81 ticks)

<<< solve


OBJECTIVE: 21

x[1][1] = 0 x[1][2] = 0 x[1][3] = 0 x[1][4] = 1 x[1][5] = 1 x[1][6] = 1 x[1][7] = 1 x[1][8] = 1 
x[2][1] = 0 x[2][2] = 0 x[2][3] = 0 x[2][4] = 0 x[2][5] = 1 x[2][6] = 1 x[2][7] = 1 x[2][8] = 1 
x[3][1] = 0 x[3][2] = 0 x[3][3] = 0 x[3][4] = 0 x[3][5] = 1 x[3][6] = 1 x[3][7] = 1 x[3][8] = 1 
x[4][1] = 0 x[4][2] = 0 x[4][3] = 0 x[4][4] = 1 x[4][5] = 1 x[4][6] = 1 x[4][7] = 1 x[4][8] = 1 
x[5][1] = 0 x[5][2] = 0 x[5][3] = 0 x[5][4] = 0 x[5][5] = 0 x[5][6] = 1 x[5][7] = 1 x[5][8] = 1 


<<< post process


<<< done

