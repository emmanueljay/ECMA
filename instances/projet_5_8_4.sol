
<<< setup


<<< generate

Tried aggregator 1 time.
MIP Presolve eliminated 300 rows and 241 columns.
MIP Presolve modified 39 coefficients.
Reduced MIP has 479 rows, 402 columns, and 2087 nonzeros.
Reduced MIP has 350 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (1,25 ticks)
Found incumbent of value 1,000000 after 0,00 sec. (3,11 ticks)
Probing fixed 0 vars, tightened 17 bounds.
Probing time = 0,00 sec. (3,16 ticks)
Tried aggregator 1 time.
MIP Presolve modified 61 coefficients.
Reduced MIP has 479 rows, 402 columns, and 2087 nonzeros.
Reduced MIP has 350 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (1,02 ticks)
Probing time = 0,00 sec. (2,44 ticks)
Clique table members: 1462.
MIP emphasis: balance optimality and feasibility.
MIP search method: dynamic search.
Parallel mode: deterministic, using up to 4 threads.
Root relaxation solution time = 0,01 sec. (5,57 ticks)

        Nodes                                         Cuts/
   Node  Left     Objective  IInf  Best Integer    Best Bound    ItCnt     Gap

*     0+    0                            1,0000       25,0000      272     --- 
      0     0       24,6932   156        1,0000       24,6932      272     --- 
      0     0       24,0000   111        1,0000      Cuts: 28      289     --- 
      0     0       24,0000   121        1,0000      Cuts: 99      435     --- 
      0     0       24,0000    97        1,0000      Cuts: 13      483     --- 
      0     0       24,0000   112        1,0000      Cuts: 67      570     --- 
      0     2       24,0000    53        1,0000       24,0000      570     --- 
Elapsed time = 0,30 sec. (183,87 ticks, tree = 0,01 MB, solutions = 1)
*     4+    4                            2,0000       24,0000      694     --- 
*     5+    5                            3,0000       24,0000      719  700,00%
*    46    43      integral     0       18,0000       24,0000     2450   33,33%
    897   592       22,3558   139       18,0000       23,0000    27793   27,78%
   2046  1242       19,0342    83       18,0000       22,4947    60322   24,97%
   2463  1469       21,2632    37       18,0000       21,2632    71990   18,13%
   2569   352       19,2287    97       18,0000       19,9647    75864   10,91%

Clique cuts applied:  1
Cover cuts applied:  1
Flow cuts applied:  49
Mixed integer rounding cuts applied:  203
Zero-half cuts applied:  14

Root node processing (before b&c):
  Real time             =    0,30 sec. (183,61 ticks)
Parallel b&c, 4 threads:
  Real time             =    3,77 sec. (2251,18 ticks)
  Sync time (average)   =    0,24 sec.
  Wait time (average)   =    0,00 sec.
                          ------------
Total (root+branch&cut) =    4,07 sec. (2434,79 ticks)

<<< solve


OBJECTIVE: 18

x[1][1] = 1 x[1][2] = 1 x[1][3] = 1 x[1][4] = 0 x[1][5] = 0 x[1][6] = 0 x[1][7] = 0 x[1][8] = 0 
x[2][1] = 1 x[2][2] = 1 x[2][3] = 1 x[2][4] = 0 x[2][5] = 0 x[2][6] = 0 x[2][7] = 0 x[2][8] = 0 
x[3][1] = 1 x[3][2] = 1 x[3][3] = 0 x[3][4] = 1 x[3][5] = 0 x[3][6] = 0 x[3][7] = 0 x[3][8] = 0 
x[4][1] = 1 x[4][2] = 1 x[4][3] = 1 x[4][4] = 1 x[4][5] = 1 x[4][6] = 0 x[4][7] = 0 x[4][8] = 0 
x[5][1] = 0 x[5][2] = 1 x[5][3] = 1 x[5][4] = 1 x[5][5] = 1 x[5][6] = 0 x[5][7] = 0 x[5][8] = 0 


<<< post process


<<< done

