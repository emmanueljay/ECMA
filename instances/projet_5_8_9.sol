
<<< setup


<<< generate

Tried aggregator 1 time.
MIP Presolve eliminated 300 rows and 241 columns.
MIP Presolve modified 50 coefficients.
Reduced MIP has 479 rows, 402 columns, and 2081 nonzeros.
Reduced MIP has 350 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (1,24 ticks)
Found incumbent of value 1,000000 after 0,00 sec. (3,43 ticks)
Probing fixed 0 vars, tightened 27 bounds.
Probing time = 0,00 sec. (3,52 ticks)
Tried aggregator 1 time.
MIP Presolve modified 120 coefficients.
Reduced MIP has 479 rows, 402 columns, and 2081 nonzeros.
Reduced MIP has 350 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (1,02 ticks)
Probing time = 0,00 sec. (2,47 ticks)
Clique table members: 1462.
MIP emphasis: balance optimality and feasibility.
MIP search method: dynamic search.
Parallel mode: deterministic, using up to 4 threads.
Root relaxation solution time = 0,00 sec. (5,12 ticks)

        Nodes                                         Cuts/
   Node  Left     Objective  IInf  Best Integer    Best Bound    ItCnt     Gap

*     0+    0                            1,0000       25,0000      255     --- 
      0     0       24,0618   154        1,0000       24,0618      255     --- 
      0     0       23,8400   109        1,0000      Cuts: 40      297     --- 
      0     0       23,6460   111        1,0000      Cuts: 96      421     --- 
      0     0       23,5896   105        1,0000     Cuts: 125      502     --- 
      0     0       23,4095   108        1,0000     Cuts: 119      569     --- 
      0     0       23,1023   108        1,0000     Cuts: 117      651     --- 
      0     0       22,6858    93        1,0000     Cuts: 189      753     --- 
      0     0       22,2094    98        1,0000     Cuts: 107      827     --- 
      0     0       21,6933   105        1,0000     Cuts: 104      914     --- 
      0     0       21,1131   104        1,0000      Cuts: 79     1061     --- 
      0     0       20,8722   113        1,0000     Cuts: 111     1164     --- 
      0     0       20,6034   105        1,0000      Cuts: 91     1236     --- 
      0     0       20,3277    98        1,0000     Cuts: 112     1355     --- 
      0     0       20,0897    93        1,0000     Cuts: 129     1446     --- 
      0     0       19,7785    92        1,0000      Cuts: 63     1525     --- 
      0     0       19,6535    85        1,0000     Cuts: 147     1786     --- 
      0     0       19,2322   103        1,0000     Cuts: 175     1931     --- 
      0     0       19,0242   116        1,0000     Cuts: 148     2063     --- 
      0     0       18,4177   104        1,0000     Cuts: 123     2172     --- 
      0     0       17,8605   141        1,0000     Cuts: 138     2401     --- 
      0     0       17,3466   131        1,0000     Cuts: 114     2489     --- 
      0     0       16,7578   111        1,0000      Cuts: 68     2560     --- 
      0     0       16,0872   107        1,0000      Cuts: 82     2656     --- 
      0     0       15,8785   106        1,0000      Cuts: 57     2772     --- 
      0     0       15,7479   103        1,0000      Cuts: 58     2863     --- 
      0     0       15,5929    96        1,0000      Cuts: 31     2914     --- 
      0     0       15,5678   105        1,0000      Cuts: 23     2992     --- 
      0     0       15,5017    88        1,0000     Cuts: 109     3044     --- 
      0     0       15,5017   100        1,0000  ZeroHalf: 24     3102     --- 
      0     0       15,5017    90        1,0000   ZeroHalf: 2     3108     --- 
*     0+    0                            8,0000       15,5017     3108   93,77%
*     0+    0                            9,0000       15,5017     3108   72,24%
      0     2       15,5017    74        9,0000       15,5017     3108   72,24%
Elapsed time = 0,67 sec. (347,07 ticks, tree = 0,01 MB, solutions = 3)
    389   101       10,0740    97        9,0000       11,5102    32708   27,89%

Flow cuts applied:  20
Mixed integer rounding cuts applied:  138
Zero-half cuts applied:  10

Root node processing (before b&c):
  Real time             =    0,67 sec. (346,76 ticks)
Parallel b&c, 4 threads:
  Real time             =    0,46 sec. (310,83 ticks)
  Sync time (average)   =    0,07 sec.
  Wait time (average)   =    0,00 sec.
                          ------------
Total (root+branch&cut) =    1,12 sec. (657,59 ticks)

<<< solve


OBJECTIVE: 9

x[1][1] = 0 x[1][2] = 0 x[1][3] = 0 x[1][4] = 0 x[1][5] = 0 x[1][6] = 0 x[1][7] = 0 x[1][8] = 0 
x[2][1] = 1 x[2][2] = 1 x[2][3] = 1 x[2][4] = 1 x[2][5] = 0 x[2][6] = 0 x[2][7] = 0 x[2][8] = 0 
x[3][1] = 0 x[3][2] = 1 x[3][3] = 1 x[3][4] = 1 x[3][5] = 0 x[3][6] = 0 x[3][7] = 0 x[3][8] = 0 
x[4][1] = 0 x[4][2] = 0 x[4][3] = 1 x[4][4] = 1 x[4][5] = 0 x[4][6] = 0 x[4][7] = 0 x[4][8] = 0 
x[5][1] = 0 x[5][2] = 0 x[5][3] = 0 x[5][4] = 0 x[5][5] = 0 x[5][6] = 0 x[5][7] = 0 x[5][8] = 0 


<<< post process


<<< done

