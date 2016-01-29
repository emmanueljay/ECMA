
<<< setup


<<< generate

Tried aggregator 1 time.
MIP Presolve eliminated 300 rows and 241 columns.
MIP Presolve modified 47 coefficients.
Reduced MIP has 479 rows, 402 columns, and 2087 nonzeros.
Reduced MIP has 350 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,01 sec. (1,25 ticks)
Found incumbent of value 1,000000 after 0,01 sec. (3,32 ticks)
Probing fixed 0 vars, tightened 34 bounds.
Probing time = 0,00 sec. (3,42 ticks)
Tried aggregator 1 time.
MIP Presolve modified 69 coefficients.
Reduced MIP has 479 rows, 402 columns, and 2087 nonzeros.
Reduced MIP has 350 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (1,02 ticks)
Probing time = 0,00 sec. (2,49 ticks)
Clique table members: 1462.
MIP emphasis: balance optimality and feasibility.
MIP search method: dynamic search.
Parallel mode: deterministic, using up to 4 threads.
Root relaxation solution time = 0,00 sec. (5,21 ticks)

        Nodes                                         Cuts/
   Node  Left     Objective  IInf  Best Integer    Best Bound    ItCnt     Gap

*     0+    0                            1,0000       25,0000      264     --- 
      0     0       24,6191   166        1,0000       24,6191      264     --- 
      0     0       24,0000   124        1,0000      Cuts: 41      312     --- 
      0     0       24,0000   133        1,0000      Cuts: 73      422     --- 
*     0+    0                            3,0000       24,0000      505  700,00%
      0     0       24,0000   105        3,0000      Cuts: 53      505  696,08%
      0     0       23,9042   129        3,0000     Cuts: 122      805  696,08%
      0     0       23,8256   112        3,0000     Cuts: 126      906  694,19%
      0     0       23,6606   108        3,0000     Cuts: 146     1031  688,69%
      0     0       23,5437   104        3,0000     Cuts: 175     1074  684,79%
      0     0       23,3193   102        3,0000     Cuts: 134     1158  677,31%
      0     0       23,0236    99        3,0000     Cuts: 113     1209  667,45%
      0     0       22,7939   102        3,0000      Cuts: 86     1268  659,80%
      0     0       22,2928   100        3,0000     Cuts: 154     1345  643,09%
      0     0       22,0760    95        3,0000      Cuts: 97     1456  635,87%
      0     0       21,8250    98        3,0000     Cuts: 106     1583  627,50%
      0     0       21,4404   107        3,0000     Cuts: 129     1680  614,68%
      0     0       20,1201   111        3,0000     Cuts: 136     1841  570,67%
      0     0       19,9850    67        3,0000     Cuts: 172     1974  566,17%
      0     0       19,6683    64        3,0000     Cuts: 219     2024  555,61%
      0     0       19,6053    80        3,0000      Cuts: 86     2077  553,51%
      0     0       19,5384    57        3,0000     Cuts: 108     2104  551,28%
      0     0       19,5384    31        3,0000   ZeroHalf: 6     2115  551,28%
*     0+    0                            4,0000       19,5384     2115  388,46%
      0     2       19,5384    31        4,0000       19,5384     2115  388,46%
Elapsed time = 0,60 sec. (311,29 ticks, tree = 0,01 MB, solutions = 3)
*     5+    5                            5,0000       19,4546     2977  289,09%
*    91+   85                           13,0000       18,4751    12548   42,12%
    223   160       15,6933   212       13,0000       17,7667    23322   36,67%
*   372+  242                           14,0000       17,4661    37593   24,76%
*   427+  196                           15,0000       17,1816    41869   14,54%
    580    35        cutoff             15,0000       16,8038    48069   12,03%

Clique cuts applied:  11
Implied bound cuts applied:  6
Flow cuts applied:  107
Mixed integer rounding cuts applied:  209
Zero-half cuts applied:  36

Root node processing (before b&c):
  Real time             =    0,60 sec. (310,91 ticks)
Parallel b&c, 4 threads:
  Real time             =    0,70 sec. (493,98 ticks)
  Sync time (average)   =    0,09 sec.
  Wait time (average)   =    0,00 sec.
                          ------------
Total (root+branch&cut) =    1,30 sec. (804,88 ticks)

<<< solve


OBJECTIVE: 15

x[1][1] = 0 x[1][2] = 0 x[1][3] = 0 x[1][4] = 1 x[1][5] = 0 x[1][6] = 0 x[1][7] = 0 x[1][8] = 0 
x[2][1] = 0 x[2][2] = 0 x[2][3] = 0 x[2][4] = 1 x[2][5] = 1 x[2][6] = 0 x[2][7] = 0 x[2][8] = 0 
x[3][1] = 0 x[3][2] = 1 x[3][3] = 1 x[3][4] = 1 x[3][5] = 1 x[3][6] = 0 x[3][7] = 0 x[3][8] = 0 
x[4][1] = 0 x[4][2] = 0 x[4][3] = 1 x[4][4] = 1 x[4][5] = 1 x[4][6] = 0 x[4][7] = 0 x[4][8] = 0 
x[5][1] = 1 x[5][2] = 1 x[5][3] = 1 x[5][4] = 1 x[5][5] = 1 x[5][6] = 0 x[5][7] = 0 x[5][8] = 0 


<<< post process


<<< done

