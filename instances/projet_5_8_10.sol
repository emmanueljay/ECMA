
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
Root relaxation solution time = 0,01 sec. (11,45 ticks)

        Nodes                                         Cuts/
   Node  Left     Objective  IInf  Best Integer    Best Bound    ItCnt     Gap

*     0+    0                            1,0000       40,0000      365     --- 
      0     0       32,0758   257        1,0000       32,0758      365     --- 
      0     0       32,0000    64        1,0000    MIRcuts: 2      418     --- 
*     0+    0                           32,0000       32,0000      418    0,00%
      0     0        cutoff             32,0000       32,0000      418    0,00%
Elapsed time = 0,17 sec. (105,59 ticks, tree = 0,00 MB, solutions = 2)

Mixed integer rounding cuts applied:  2

Root node processing (before b&c):
  Real time             =    0,17 sec. (105,62 ticks)
Parallel b&c, 4 threads:
  Real time             =    0,00 sec. (0,00 ticks)
  Sync time (average)   =    0,00 sec.
  Wait time (average)   =    0,00 sec.
                          ------------
Total (root+branch&cut) =    0,17 sec. (105,62 ticks)

<<< solve


OBJECTIVE: 32

x[1][1] = 0 x[1][2] = 0 x[1][3] = 0 x[1][4] = 1 x[1][5] = 1 x[1][6] = 1 x[1][7] = 1 x[1][8] = 1 
x[2][1] = 0 x[2][2] = 0 x[2][3] = 0 x[2][4] = 1 x[2][5] = 1 x[2][6] = 1 x[2][7] = 1 x[2][8] = 1 
x[3][1] = 0 x[3][2] = 0 x[3][3] = 1 x[3][4] = 1 x[3][5] = 1 x[3][6] = 1 x[3][7] = 1 x[3][8] = 1 
x[4][1] = 1 x[4][2] = 1 x[4][3] = 1 x[4][4] = 1 x[4][5] = 1 x[4][6] = 1 x[4][7] = 1 x[4][8] = 1 
x[5][1] = 1 x[5][2] = 1 x[5][3] = 1 x[5][4] = 1 x[5][5] = 1 x[5][6] = 1 x[5][7] = 1 x[5][8] = 1 


<<< post process


<<< done

