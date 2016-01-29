
<<< setup


<<< generate

Tried aggregator 1 time.
MIP Presolve eliminated 300 rows and 241 columns.
MIP Presolve modified 46 coefficients.
Reduced MIP has 479 rows, 402 columns, and 2072 nonzeros.
Reduced MIP has 350 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (1,23 ticks)
Probing fixed 0 vars, tightened 15 bounds.
Probing time = 0,00 sec. (3,38 ticks)
Tried aggregator 1 time.
MIP Presolve modified 62 coefficients.
Reduced MIP has 479 rows, 402 columns, and 2072 nonzeros.
Reduced MIP has 350 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (1,00 ticks)
Probing time = 0,00 sec. (2,49 ticks)
Clique table members: 1462.
MIP emphasis: balance optimality and feasibility.
MIP search method: dynamic search.
Parallel mode: deterministic, using up to 4 threads.
Root relaxation solution time = 0,01 sec. (5,17 ticks)

        Nodes                                         Cuts/
   Node  Left     Objective  IInf  Best Integer    Best Bound    ItCnt     Gap

      0     0       24,7178   162                     24,7178      276         
      0     0       24,6913   154                    Cuts: 37      303         
      0     0       24,6807   118                    Cuts: 82      365         
      0     0       24,6667   111                    Cuts: 84      425         
      0     0       24,5923   108                    Cuts: 80      500         
      0     0       24,2847   114                   Cuts: 104      582         
*     0+    0                            1,0000       24,2847      675     --- 
      0     0       23,9041   113        1,0000      Cuts: 98      675     --- 
      0     0       23,3386   118        1,0000      Cuts: 91      773     --- 
      0     0       22,9587   112        1,0000      Cuts: 82      865     --- 
      0     0       22,8742   101        1,0000     Cuts: 129      950     --- 
      0     0       22,6693    93        1,0000     Cuts: 127     1052     --- 
      0     0       22,3950    96        1,0000      Cuts: 98     1142     --- 
      0     0       22,1599    95        1,0000     Cuts: 148     1219     --- 
      0     0       22,1308    89        1,0000     Cuts: 138     1293     --- 
      0     0       21,9720   105        1,0000     Cuts: 216     1371     --- 
      0     0       21,7877    96        1,0000     Cuts: 219     1469     --- 
      0     0       21,4540    88        1,0000     Cuts: 219     1549     --- 
      0     0       21,0346    92        1,0000      Cuts: 32     1672     --- 
      0     0       20,6677   105        1,0000     Cuts: 156     1772     --- 
      0     0       20,2716    87        1,0000      Cuts: 55     1863     --- 
      0     0       18,8262   101        1,0000     Cuts: 150     2023     --- 
      0     0       18,1862    94        1,0000     Cuts: 147     2176     --- 
      0     0       18,0057   106        1,0000      Cuts: 76     2269     --- 
      0     0       17,8515   111        1,0000      Cuts: 69     2380     --- 
      0     0       17,8436   102        1,0000      Cuts: 77     2418     --- 
*     0+    0                            3,0000       17,8436     2418  494,79%
*     0+    0                            4,0000       17,8436     2418  346,09%
      0     0       17,8427    98        4,0000      Cuts: 80     2436  346,07%
*     0+    0                           12,0000       17,8427     2436   48,69%
*     0+    0                           13,0000       17,7756     2436   36,74%
      0     2       17,8427    47       13,0000       17,3201     2436   33,23%
Elapsed time = 0,64 sec. (338,22 ticks, tree = 0,01 MB, solutions = 5)
    352   136        cutoff             13,0000       15,4736    20540   19,03%

Flow cuts applied:  49
Mixed integer rounding cuts applied:  173
Zero-half cuts applied:  17

Root node processing (before b&c):
  Real time             =    0,64 sec. (337,88 ticks)
Parallel b&c, 4 threads:
  Real time             =    0,49 sec. (345,08 ticks)
  Sync time (average)   =    0,10 sec.
  Wait time (average)   =    0,00 sec.
                          ------------
Total (root+branch&cut) =    1,14 sec. (682,95 ticks)

<<< solve


OBJECTIVE: 13

x[1][1] = 0 x[1][2] = 0 x[1][3] = 1 x[1][4] = 1 x[1][5] = 1 x[1][6] = 0 x[1][7] = 0 x[1][8] = 0 
x[2][1] = 0 x[2][2] = 0 x[2][3] = 1 x[2][4] = 1 x[2][5] = 1 x[2][6] = 0 x[2][7] = 0 x[2][8] = 0 
x[3][1] = 1 x[3][2] = 1 x[3][3] = 1 x[3][4] = 1 x[3][5] = 1 x[3][6] = 0 x[3][7] = 0 x[3][8] = 0 
x[4][1] = 1 x[4][2] = 0 x[4][3] = 0 x[4][4] = 0 x[4][5] = 1 x[4][6] = 0 x[4][7] = 0 x[4][8] = 0 
x[5][1] = 0 x[5][2] = 0 x[5][3] = 0 x[5][4] = 0 x[5][5] = 0 x[5][6] = 0 x[5][7] = 0 x[5][8] = 0 


<<< post process


<<< done

