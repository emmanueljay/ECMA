
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
Root relaxation solution time = 0,01 sec. (12,95 ticks)

        Nodes                                         Cuts/
   Node  Left     Objective  IInf  Best Integer    Best Bound    ItCnt     Gap

*     0+    0                            1,0000       40,0000      437     --- 
      0     0       37,9482   250        1,0000       37,9482      437     --- 
      0     0       37,8571   200        1,0000      Cuts: 17      498     --- 
      0     0       37,7523   194        1,0000      Cuts: 68      611     --- 
*     0+    0                            8,0000       37,7523      728  371,90%
      0     0       37,7202   186        8,0000      Cuts: 51      728  371,50%
      0     0       37,6383   168        8,0000      Cuts: 48      790  370,48%
      0     0       37,4769   157        8,0000      Cuts: 62      899  368,46%
      0     0       37,0087   156        8,0000      Cuts: 77     1065  362,61%
*     0+    0                           31,0000       37,0087     1065   19,38%
*     0+    0                           33,0000       37,0087     4652   12,15%
      0     0       36,6814   243       33,0000      Cuts: 73     4652    6,57%
      0     0       35,5143   203       33,0000      Cuts: 75     4816    6,57%
      0     0       35,3880   223       33,0000      Cuts: 29     5221    6,57%
      0     0       35,2720   194       33,0000      Cuts: 52     5346    6,57%
      0     0       35,1627   165       33,0000      Cuts: 37     5454    6,55%
      0     0       35,1627   178       33,0000      Cuts: 37     5612    6,55%
      0     0       35,1627   143       33,0000   ZeroHalf: 4     5651    6,55%
      0     0       35,1627   164       33,0000      Cuts: 37     5790    6,55%
      0     2       35,1627   125       33,0000       35,1627     5790    6,55%
Elapsed time = 1,06 sec. (612,11 ticks, tree = 0,01 MB, solutions = 4)
    160    85       34,3445   166       33,0000       34,9427    14861    5,89%
    579   196       34,2470   225       33,0000       34,5079    31890    4,57%
    818   158       34,1338   255       33,0000       34,4362    45364    4,35%
   1043   118       34,1169   111       33,0000       34,2428    59766    3,77%

Clique cuts applied:  8
Implied bound cuts applied:  8
Flow cuts applied:  8
Mixed integer rounding cuts applied:  19
Zero-half cuts applied:  34
Gomory fractional cuts applied:  13

Root node processing (before b&c):
  Real time             =    1,05 sec. (608,95 ticks)
Parallel b&c, 4 threads:
  Real time             =    1,40 sec. (1175,18 ticks)
  Sync time (average)   =    0,45 sec.
  Wait time (average)   =    0,00 sec.
                          ------------
Total (root+branch&cut) =    2,45 sec. (1784,13 ticks)

<<< solve


OBJECTIVE: 33

x[1][1] = 1 x[1][2] = 0 x[1][3] = 1 x[1][4] = 1 x[1][5] = 1 x[1][6] = 1 x[1][7] = 1 x[1][8] = 1 
x[2][1] = 1 x[2][2] = 1 x[2][3] = 1 x[2][4] = 1 x[2][5] = 1 x[2][6] = 1 x[2][7] = 1 x[2][8] = 1 
x[3][1] = 0 x[3][2] = 1 x[3][3] = 1 x[3][4] = 1 x[3][5] = 1 x[3][6] = 1 x[3][7] = 1 x[3][8] = 1 
x[4][1] = 0 x[4][2] = 0 x[4][3] = 1 x[4][4] = 1 x[4][5] = 1 x[4][6] = 1 x[4][7] = 1 x[4][8] = 1 
x[5][1] = 0 x[5][2] = 0 x[5][3] = 1 x[5][4] = 0 x[5][5] = 1 x[5][6] = 1 x[5][7] = 1 x[5][8] = 1 


<<< post process


<<< done

