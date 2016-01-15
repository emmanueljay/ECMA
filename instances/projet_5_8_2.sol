
<<< setup


<<< generate

Tried aggregator 1 time.
MIP Presolve eliminated 0 rows and 1 columns.
Reduced MIP has 764 rows, 642 columns, and 3350 nonzeros.
Reduced MIP has 560 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (2,46 ticks)
Found incumbent of value 1,000000 after 0,01 sec. (5,28 ticks)
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
Root relaxation solution time = 0,01 sec. (12,58 ticks)

        Nodes                                         Cuts/
   Node  Left     Objective  IInf  Best Integer    Best Bound    ItCnt     Gap

*     0+    0                            1,0000       40,0000      438     --- 
      0     0       36,3843   247        1,0000       36,3843      438     --- 
      0     0       34,9563   206        1,0000      Cuts: 30      489     --- 
*     0+    0                            3,0000       34,9563      646     --- 
      0     0       33,6013   152        3,0000     Cuts: 103      646     --- 
      0     0       32,8990   160        3,0000      Cuts: 71      967  996,63%
      0     0       32,6119   134        3,0000      Cuts: 71     1088  987,06%
      0     0       32,3652   120        3,0000      Cuts: 46     1196  978,84%
      0     0       32,1732   119        3,0000      Cuts: 50     1363  972,44%
*     0+    0                           26,0000       32,1732     1363   23,74%
      0     0       32,0110   106       26,0000      Cuts: 32     1471   23,12%
*     0+    0                           27,0000       32,0110     1471   18,56%
      0     0       31,7906   134       27,0000      Cuts: 46     1635   17,74%
      0     0       31,3565   121       27,0000      Cuts: 47     1697   16,14%
      0     0       30,9680   138       27,0000      Cuts: 44     1841   14,70%
      0     0       30,6139   111       27,0000      Cuts: 36     1943   13,38%
      0     0       30,2607   134       27,0000      Cuts: 54     2066   12,08%
      0     0       30,1917   129       27,0000      Cuts: 36     2160   11,82%
      0     0       30,1294   115       27,0000      Cuts: 28     2243   11,59%
      0     0       30,0729   122       27,0000      Cuts: 42     2380   11,38%
*     0+    0                           28,0000       30,0729     2466    7,40%
      0     0       30,0474   127       28,0000      Cuts: 34     2466    7,31%
      0     0       29,9569   144       28,0000      Cuts: 53     2808    6,99%
      0     0       29,9554   143       28,0000      Cuts: 62     2948    6,98%
      0     0       29,9548   110       28,0000       Cuts: 2     2960    6,98%
      0     0       29,9548   117       28,0000      Cuts: 37     3044    6,98%
      0     2       29,9548    84       28,0000       29,9548     3044    6,98%
Elapsed time = 0,85 sec. (480,77 ticks, tree = 0,01 MB, solutions = 5)

Implied bound cuts applied:  3
Flow cuts applied:  3
Mixed integer rounding cuts applied:  56
Zero-half cuts applied:  13
Gomory fractional cuts applied:  6

Root node processing (before b&c):
  Real time             =    0,85 sec. (480,27 ticks)
Parallel b&c, 4 threads:
  Real time             =    0,15 sec. (151,97 ticks)
  Sync time (average)   =    0,10 sec.
  Wait time (average)   =    0,00 sec.
                          ------------
Total (root+branch&cut) =    1,00 sec. (632,24 ticks)

<<< solve


OBJECTIVE: 28

x[1][1] = 0 x[1][2] = 0 x[1][3] = 1 x[1][4] = 0 x[1][5] = 1 x[1][6] = 1 x[1][7] = 1 x[1][8] = 1 
x[2][1] = 0 x[2][2] = 0 x[2][3] = 1 x[2][4] = 1 x[2][5] = 1 x[2][6] = 1 x[2][7] = 1 x[2][8] = 1 
x[3][1] = 0 x[3][2] = 0 x[3][3] = 1 x[3][4] = 1 x[3][5] = 1 x[3][6] = 1 x[3][7] = 1 x[3][8] = 1 
x[4][1] = 0 x[4][2] = 0 x[4][3] = 1 x[4][4] = 1 x[4][5] = 1 x[4][6] = 1 x[4][7] = 1 x[4][8] = 1 
x[5][1] = 0 x[5][2] = 0 x[5][3] = 1 x[5][4] = 1 x[5][5] = 0 x[5][6] = 1 x[5][7] = 1 x[5][8] = 1 


<<< post process


<<< done

