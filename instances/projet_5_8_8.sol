
<<< setup


<<< generate

Tried aggregator 1 time.
MIP Presolve eliminated 300 rows and 241 columns.
MIP Presolve modified 50 coefficients.
Reduced MIP has 479 rows, 402 columns, and 2077 nonzeros.
Reduced MIP has 350 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (1,23 ticks)
Found incumbent of value 1,000000 after 0,01 sec. (3,66 ticks)
Probing fixed 0 vars, tightened 24 bounds.
Probing time = 0,00 sec. (3,58 ticks)
Tried aggregator 1 time.
MIP Presolve modified 124 coefficients.
Reduced MIP has 479 rows, 402 columns, and 2077 nonzeros.
Reduced MIP has 350 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (1,01 ticks)
Probing time = 0,00 sec. (2,48 ticks)
Clique table members: 1462.
MIP emphasis: balance optimality and feasibility.
MIP search method: dynamic search.
Parallel mode: deterministic, using up to 4 threads.
Root relaxation solution time = 0,01 sec. (6,22 ticks)

        Nodes                                         Cuts/
   Node  Left     Objective  IInf  Best Integer    Best Bound    ItCnt     Gap

*     0+    0                            1,0000       25,0000      291     --- 
      0     0       24,6409   196        1,0000       24,6409      291     --- 
      0     0       24,5803   165        1,0000      Cuts: 23      312     --- 
      0     0       24,5790   136        1,0000      Cuts: 80      381     --- 
      0     0       24,5783   113        1,0000      Cuts: 58      424     --- 
      0     0       24,5333   111        1,0000      Cuts: 69      517     --- 
      0     0       24,4603   104        1,0000      Cuts: 91      582     --- 
*     0+    0                            6,0000       24,4603      640  307,67%
      0     0       24,1236   101        6,0000      Cuts: 80      640  302,06%
      0     0       23,5792   100        6,0000     Cuts: 123      708  292,99%
      0     0       23,5090    91        6,0000     Cuts: 105      783  291,82%
      0     0       23,3882    88        6,0000     Cuts: 109      854  289,80%
      0     0       23,1211    92        6,0000     Cuts: 122      906  285,35%
      0     0       23,0449   108        6,0000     Cuts: 207      993  284,08%
      0     0       22,9612    99        6,0000     Cuts: 219     1030  282,69%
      0     0       22,6645    96        6,0000     Cuts: 219     1079  277,74%
      0     0       22,4161   106        6,0000     Cuts: 219     1168  273,60%
      0     0       22,1857   103        6,0000     Cuts: 219     1257  269,76%
      0     0       21,6877   102        6,0000     Cuts: 219     1354  261,46%
      0     0       21,4096    92        6,0000     Cuts: 201     1437  256,83%
      0     0       21,1487   103        6,0000     Cuts: 200     1574  252,48%
      0     0       20,8312   102        6,0000      Cuts: 99     1654  247,19%
      0     0       20,7808    96        6,0000      Cuts: 95     1777  246,35%
      0     0       19,9771    95        6,0000      Cuts: 84     1896  232,95%
      0     0       19,7009    93        6,0000     Cuts: 134     1984  228,35%
      0     0       18,8636   110        6,0000     Cuts: 118     2113  214,39%
      0     0       18,4600   108        6,0000     Cuts: 101     2256  207,67%
*     0+    0                           10,0000       18,4600     2355   84,60%
      0     0       18,2076   110       10,0000     Cuts: 126     2355   79,09%
      0     0       16,6788   119       10,0000     Cuts: 191     2634   66,79%
      0     0       16,2296    88       10,0000     Cuts: 219     2765   62,30%
      0     0       16,2238    63       10,0000      Cuts: 42     2831   62,24%
      0     0       16,2238    63       10,0000      Cuts: 20     2878   62,24%
*     0+    0                           12,0000       16,2238     2878   35,20%
      0     0       16,2238    55       12,0000   ZeroHalf: 2     2892   35,20%
*     0+    0                           14,0000       16,2238     2892   15,88%
      0     2       16,2238    40       14,0000       16,2238     2892   15,88%
Elapsed time = 0,76 sec. (396,04 ticks, tree = 0,01 MB, solutions = 5)

Clique cuts applied:  2
Flow cuts applied:  21
Mixed integer rounding cuts applied:  66
Zero-half cuts applied:  6

Root node processing (before b&c):
  Real time             =    0,76 sec. (395,77 ticks)
Parallel b&c, 4 threads:
  Real time             =    0,02 sec. (11,71 ticks)
  Sync time (average)   =    0,01 sec.
  Wait time (average)   =    0,00 sec.
                          ------------
Total (root+branch&cut) =    0,77 sec. (407,47 ticks)

<<< solve


OBJECTIVE: 14

x[1][1] = 0 x[1][2] = 0 x[1][3] = 1 x[1][4] = 1 x[1][5] = 1 x[1][6] = 0 x[1][7] = 0 x[1][8] = 0 
x[2][1] = 0 x[2][2] = 0 x[2][3] = 1 x[2][4] = 1 x[2][5] = 1 x[2][6] = 0 x[2][7] = 0 x[2][8] = 0 
x[3][1] = 0 x[3][2] = 0 x[3][3] = 1 x[3][4] = 1 x[3][5] = 1 x[3][6] = 0 x[3][7] = 0 x[3][8] = 0 
x[4][1] = 0 x[4][2] = 0 x[4][3] = 1 x[4][4] = 1 x[4][5] = 1 x[4][6] = 0 x[4][7] = 0 x[4][8] = 0 
x[5][1] = 0 x[5][2] = 0 x[5][3] = 0 x[5][4] = 1 x[5][5] = 1 x[5][6] = 0 x[5][7] = 0 x[5][8] = 0 


<<< post process


<<< done

