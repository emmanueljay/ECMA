
<<< setup


<<< generate

Tried aggregator 1 time.
MIP Presolve eliminated 0 rows and 1 columns.
Reduced MIP has 764 rows, 642 columns, and 3350 nonzeros.
Reduced MIP has 560 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (2,47 ticks)
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
Root relaxation solution time = 0,01 sec. (12,37 ticks)

        Nodes                                         Cuts/
   Node  Left     Objective  IInf  Best Integer    Best Bound    ItCnt     Gap

*     0+    0                            1,0000       40,0000      400     --- 
      0     0       38,2492   280        1,0000       38,2492      400     --- 
*     0+    0                            3,0000       38,2492      459     --- 
      0     0       38,0000   142        3,0000       Cuts: 5      459     --- 
*     0+    0                           35,0000       38,0000      459    8,57%
      0     0       38,0000   130       35,0000      Cuts: 46      520    8,57%
      0     0       38,0000   145       35,0000  ZeroHalf: 40      621    8,57%
*     0+    0                           38,0000       38,0000      621    0,00%
      0     0        cutoff             38,0000       38,0000      621    0,00%
Elapsed time = 0,25 sec. (149,49 ticks, tree = 0,00 MB, solutions = 4)

Cover cuts applied:  1
Mixed integer rounding cuts applied:  2
Zero-half cuts applied:  16
Gomory fractional cuts applied:  1

Root node processing (before b&c):
  Real time             =    0,25 sec. (149,53 ticks)
Parallel b&c, 4 threads:
  Real time             =    0,00 sec. (0,00 ticks)
  Sync time (average)   =    0,00 sec.
  Wait time (average)   =    0,00 sec.
                          ------------
Total (root+branch&cut) =    0,25 sec. (149,53 ticks)

<<< solve


OBJECTIVE: 38

x[1][1] = 0 x[1][2] = 0 x[1][3] = 1 x[1][4] = 1 x[1][5] = 1 x[1][6] = 1 x[1][7] = 1 x[1][8] = 1 
x[2][1] = 1 x[2][2] = 1 x[2][3] = 1 x[2][4] = 1 x[2][5] = 1 x[2][6] = 1 x[2][7] = 1 x[2][8] = 1 
x[3][1] = 1 x[3][2] = 1 x[3][3] = 1 x[3][4] = 1 x[3][5] = 1 x[3][6] = 1 x[3][7] = 1 x[3][8] = 1 
x[4][1] = 1 x[4][2] = 1 x[4][3] = 1 x[4][4] = 1 x[4][5] = 1 x[4][6] = 1 x[4][7] = 1 x[4][8] = 1 
x[5][1] = 1 x[5][2] = 1 x[5][3] = 1 x[5][4] = 1 x[5][5] = 1 x[5][6] = 1 x[5][7] = 1 x[5][8] = 1 


<<< post process


<<< done

