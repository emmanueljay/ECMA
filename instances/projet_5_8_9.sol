
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
Root relaxation solution time = 0,01 sec. (14,16 ticks)

        Nodes                                         Cuts/
   Node  Left     Objective  IInf  Best Integer    Best Bound    ItCnt     Gap

*     0+    0                            1,0000       40,0000      441     --- 
      0     0       35,9695   287        1,0000       35,9695      441     --- 
      0     0       34,6745   228        1,0000      Cuts: 34      496     --- 
*     0+    0                           11,0000       34,6745     1276  215,22%
      0     0       33,0957   158       11,0000     Cuts: 121     1276  200,87%
      0     0       32,5799   149       11,0000     Cuts: 112     1676  196,18%
      0     0       32,3505   149       11,0000      Cuts: 57     1734  194,10%
      0     0       32,1182   125       11,0000      Cuts: 58     1892  191,98%
      0     0       31,8603   110       11,0000      Cuts: 44     1960  189,64%
*     0+    0                           13,0000       31,8603     1960  145,08%
      0     0       31,5142   110       13,0000      Cuts: 43     2055  142,42%
      0     0       31,1674   107       13,0000      Cuts: 54     2259  139,75%
      0     0       30,8422   103       13,0000      Cuts: 40     2368  137,25%
      0     0       30,5220   141       13,0000      Cuts: 38     2558  134,78%
      0     0       30,2036   115       13,0000      Cuts: 41     2663  132,34%
      0     0       29,8810   124       13,0000      Cuts: 48     2832  129,85%
      0     0       29,6010   120       13,0000      Cuts: 46     2928  127,70%
      0     0       29,3292   121       13,0000      Cuts: 45     3016  125,61%
      0     0       28,9628   143       13,0000      Cuts: 47     3140  122,79%
      0     0       28,5620   130       13,0000      Cuts: 45     3273  119,71%
      0     0       28,2340   132       13,0000      Cuts: 55     3469  117,18%
      0     0       28,0794   111       13,0000     Cuts: 130     3537  116,00%
      0     0       27,6948   109       13,0000      Cuts: 48     3619  113,04%
      0     0       27,6164   114       13,0000      Cuts: 37     3730  112,43%
      0     0       27,6164    95       13,0000  ZeroHalf: 32     3771  112,43%
      0     0       27,6164    73       13,0000   ZeroHalf: 2     3789  112,43%
      0     0       27,6164    87       13,0000  ZeroHalf: 22     3854  112,43%
*     0+    0                           15,0000       27,6164     3854   84,11%
*     0+    0                           16,0000       27,6164     3854   72,60%
      0     2       27,6164    48       16,0000       27,6164     3854   72,60%
Elapsed time = 1,01 sec. (559,83 ticks, tree = 0,01 MB, solutions = 5)
*     5+    5                           19,0000       27,6164     4066   45,35%
*    13+   13                           22,0000       27,6164     4389   25,53%
    147   104       26,3424   286       22,0000       27,1648    14552   23,48%
    348   168       24,8151    88       22,0000       26,2480    30268   19,31%
    547   233       23,5667   232       22,0000       25,7595    48038   17,09%
    656   242       24,3093    87       22,0000       25,5146    65269   15,98%
    780   219       23,1056   251       22,0000       25,3969    84602   15,44%
*  1156   318      integral     0       23,0000       24,8542   108383    8,06%

Clique cuts applied:  6
Implied bound cuts applied:  11
Flow cuts applied:  2
Mixed integer rounding cuts applied:  77
Zero-half cuts applied:  52
Gomory fractional cuts applied:  8

Root node processing (before b&c):
  Real time             =    1,01 sec. (556,71 ticks)
Parallel b&c, 4 threads:
  Real time             =    2,24 sec. (1625,81 ticks)
  Sync time (average)   =    0,45 sec.
  Wait time (average)   =    0,00 sec.
                          ------------
Total (root+branch&cut) =    3,25 sec. (2182,52 ticks)

<<< solve


OBJECTIVE: 23

x[1][1] = 0 x[1][2] = 0 x[1][3] = 0 x[1][4] = 0 x[1][5] = 1 x[1][6] = 1 x[1][7] = 1 x[1][8] = 1 
x[2][1] = 0 x[2][2] = 0 x[2][3] = 0 x[2][4] = 0 x[2][5] = 1 x[2][6] = 1 x[2][7] = 1 x[2][8] = 1 
x[3][1] = 0 x[3][2] = 0 x[3][3] = 1 x[3][4] = 1 x[3][5] = 1 x[3][6] = 1 x[3][7] = 1 x[3][8] = 1 
x[4][1] = 0 x[4][2] = 0 x[4][3] = 1 x[4][4] = 0 x[4][5] = 0 x[4][6] = 1 x[4][7] = 1 x[4][8] = 1 
x[5][1] = 0 x[5][2] = 0 x[5][3] = 1 x[5][4] = 1 x[5][5] = 0 x[5][6] = 1 x[5][7] = 1 x[5][8] = 1 


<<< post process


<<< done

