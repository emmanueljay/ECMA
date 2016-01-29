
<<< setup


<<< generate

Tried aggregator 1 time.
MIP Presolve eliminated 300 rows and 241 columns.
MIP Presolve modified 48 coefficients.
Reduced MIP has 479 rows, 402 columns, and 2079 nonzeros.
Reduced MIP has 350 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (1,24 ticks)
Found incumbent of value 1,000000 after 0,00 sec. (3,08 ticks)
Probing fixed 0 vars, tightened 11 bounds.
Probing time = 0,00 sec. (2,96 ticks)
Tried aggregator 1 time.
MIP Presolve modified 58 coefficients.
Reduced MIP has 479 rows, 402 columns, and 2079 nonzeros.
Reduced MIP has 350 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (1,01 ticks)
Probing time = 0,00 sec. (2,45 ticks)
Clique table members: 1462.
MIP emphasis: balance optimality and feasibility.
MIP search method: dynamic search.
Parallel mode: deterministic, using up to 4 threads.
Root relaxation solution time = 0,01 sec. (6,27 ticks)

        Nodes                                         Cuts/
   Node  Left     Objective  IInf  Best Integer    Best Bound    ItCnt     Gap

*     0+    0                            1,0000       25,0000      295     --- 
      0     0       24,9027   167        1,0000       24,9027      295     --- 
      0     0       24,9027    67        1,0000      Cuts: 28      298     --- 
      0     0       24,9027   109        1,0000      Cuts: 82      367     --- 
*     0+    0                            2,0000       24,9027      433     --- 
      0     0       24,7599    92        2,0000      Cuts: 62      433     --- 
      0     0       24,0000    91        2,0000      Cuts: 75      493     --- 
      0     0       24,0000    96        2,0000      Cuts: 45      580     --- 
      0     2       24,0000    35        2,0000       24,0000      580     --- 
Elapsed time = 0,27 sec. (160,08 ticks, tree = 0,01 MB, solutions = 2)
*     4+    4                            3,0000       24,0000      698  700,00%
    914   659       20,8102    52        3,0000       23,8891    28313  696,30%
*  1102   754      integral     0       13,0000       23,8891    34863   83,76%
   1836  1116       16,9634    64       13,0000       23,4715    62413   80,55%
*  2183+ 1284                           16,0000       23,2377    74918   45,24%
   2447  1390       24,0000    86       16,0000       23,1722    85114   44,83%
   2490  1414       23,0000   120       16,0000       23,1722    87316   44,83%
   2955  1238       21,4466    88       16,0000       23,1722   103114   44,83%
   3474  1273       17,3401    68       16,0000       23,0000   127791   43,75%
   4105  1320       21,8897   186       16,0000       22,8024   150705   42,51%
   4796  1465       21,5486    87       16,0000       22,5677   177527   41,05%
   7194  2803       19,2901    62       16,0000       21,8245   269768   36,40%
Elapsed time = 5,98 sec. (3775,20 ticks, tree = 9,29 MB, solutions = 5)
   9421  3714       20,6173    76       16,0000       21,3100   379903   33,19%
  11758  4572       19,9042   143       16,0000       20,8677   486382   30,42%
  14236  5331       19,6996    62       16,0000       20,5547   607234   28,47%
  17012  5992        cutoff             16,0000       20,2718   745312   26,70%
  18929  6407       18,3944    82       16,0000       20,1409   848924   25,88%
  21661  6972       18,0946    73       16,0000       19,9384   975596   24,62%
  23638  7179       19,1956    71       16,0000       19,7551  1075003   23,47%
  26308  7430       18,1508    60       16,0000       19,5685  1203655   22,30%
  28911  7580       17,9860   114       16,0000       19,3850  1316613   21,16%
  31365  7580       17,7547    63       16,0000       19,2530  1441374   20,33%
Elapsed time = 26,84 sec. (13340,89 ticks, tree = 6,85 MB, solutions = 5)
  33714  7585       17,2768    59       16,0000       19,1025  1556558   19,39%
  36430  7498        cutoff             16,0000       18,9401  1679069   18,38%
  39021  7284       17,4490   127       16,0000       18,8182  1794011   17,61%
  41857  6951       17,9689    85       16,0000       18,6439  1915134   16,52%
  43997  6545        cutoff             16,0000       18,5304  2014330   15,82%
  47054  5884        cutoff             16,0000       18,3632  2139198   14,77%
  50070  5227       17,3807    93       16,0000       18,1944  2254763   13,72%
  52658  4324       17,7837    74       16,0000       17,9939  2358618   12,46%
  54929  3340       17,0492    59       16,0000       17,7986  2456893   11,24%
  57071  2146        cutoff             16,0000       17,6004  2548765   10,00%
Elapsed time = 55,39 sec. (22894,29 ticks, tree = 1,36 MB, solutions = 5)

Clique cuts applied:  3
Cover cuts applied:  10
Flow cuts applied:  12
Mixed integer rounding cuts applied:  54
Zero-half cuts applied:  24
Lift and project cuts applied:  1
Gomory fractional cuts applied:  8

Root node processing (before b&c):
  Real time             =    0,27 sec. (159,82 ticks)
Parallel b&c, 4 threads:
  Real time             =   57,82 sec. (23551,62 ticks)
  Sync time (average)   =    2,13 sec.
  Wait time (average)   =    0,00 sec.
                          ------------
Total (root+branch&cut) =   58,09 sec. (23711,44 ticks)

<<< solve


OBJECTIVE: 16

x[1][1] = 0 x[1][2] = 1 x[1][3] = 0 x[1][4] = 0 x[1][5] = 0 x[1][6] = 0 x[1][7] = 0 x[1][8] = 0 
x[2][1] = 0 x[2][2] = 1 x[2][3] = 1 x[2][4] = 1 x[2][5] = 0 x[2][6] = 0 x[2][7] = 0 x[2][8] = 0 
x[3][1] = 0 x[3][2] = 0 x[3][3] = 1 x[3][4] = 1 x[3][5] = 0 x[3][6] = 0 x[3][7] = 0 x[3][8] = 0 
x[4][1] = 1 x[4][2] = 1 x[4][3] = 1 x[4][4] = 1 x[4][5] = 1 x[4][6] = 0 x[4][7] = 0 x[4][8] = 0 
x[5][1] = 1 x[5][2] = 1 x[5][3] = 1 x[5][4] = 1 x[5][5] = 1 x[5][6] = 0 x[5][7] = 0 x[5][8] = 0 


<<< post process


<<< done

