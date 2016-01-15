
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
Root relaxation solution time = 0,01 sec. (11,55 ticks)

        Nodes                                         Cuts/
   Node  Left     Objective  IInf  Best Integer    Best Bound    ItCnt     Gap

*     0+    0                            1,0000       40,0000      414     --- 
      0     0       37,5672   237        1,0000       37,5672      414     --- 
*     0+    0                           32,0000       37,5672      453   17,40%
      0     0       37,5672   107       32,0000      Cuts: 11      453   15,59%
      0     0       37,5384   183       32,0000      Cuts: 54      616   15,59%
      0     0       37,3697   123       32,0000      Cuts: 22      637   15,59%
      0     0       37,1027   110       32,0000      Cuts: 47      703   15,59%
      0     0       36,8862   112       32,0000      Cuts: 40      761   15,27%
      0     0       36,7027   128       32,0000      Cuts: 56      845   14,70%
      0     0       36,6370   126       32,0000      Cuts: 57      907   14,49%
      0     0       36,2841   132       32,0000      Cuts: 65      977   13,39%
      0     0       36,0222   156       32,0000      Cuts: 80     1080   12,57%
      0     0       35,7359   155       32,0000      Cuts: 70     1243   11,67%
      0     0       35,2942   153       32,0000      Cuts: 93     1397   10,29%
      0     0       35,0437   146       32,0000      Cuts: 62     1486    9,51%
      0     0       34,8520   144       32,0000      Cuts: 55     1574    8,91%
      0     0       34,6312   202       32,0000      Cuts: 36     2287    7,32%
      0     0       34,4473   167       32,0000      Cuts: 84     2434    7,32%
      0     0       34,3360   124       32,0000      Cuts: 44     2594    7,30%
      0     0       34,2297   141       32,0000      Cuts: 60     2755    6,97%
      0     0       34,2118   167       32,0000      Cuts: 41     2889    6,91%
      0     0       34,2081   137       32,0000      Cuts: 48     2958    6,90%
      0     0       34,2046   147       32,0000      Cuts: 33     3040    6,89%
      0     2       34,2046   103       32,0000       34,2046     3040    6,89%
Elapsed time = 0,83 sec. (482,39 ticks, tree = 0,01 MB, solutions = 2)
    383   103        cutoff             32,0000       33,4779    18238    4,62%
    387   101       33,3755   109       32,0000       33,4779    23510    4,62%

Clique cuts applied:  18
Cover cuts applied:  1
Implied bound cuts applied:  9
Flow cuts applied:  5
Mixed integer rounding cuts applied:  28
Zero-half cuts applied:  51
Gomory fractional cuts applied:  15

Root node processing (before b&c):
  Real time             =    0,83 sec. (481,81 ticks)
Parallel b&c, 4 threads:
  Real time             =    0,90 sec. (752,79 ticks)
  Sync time (average)   =    0,29 sec.
  Wait time (average)   =    0,00 sec.
                          ------------
Total (root+branch&cut) =    1,72 sec. (1234,61 ticks)

<<< solve


OBJECTIVE: 32

x[1][1] = 1 x[1][2] = 1 x[1][3] = 1 x[1][4] = 1 x[1][5] = 1 x[1][6] = 1 x[1][7] = 1 x[1][8] = 1 
x[2][1] = 1 x[2][2] = 1 x[2][3] = 1 x[2][4] = 1 x[2][5] = 1 x[2][6] = 1 x[2][7] = 1 x[2][8] = 1 
x[3][1] = 1 x[3][2] = 1 x[3][3] = 1 x[3][4] = 1 x[3][5] = 1 x[3][6] = 1 x[3][7] = 1 x[3][8] = 1 
x[4][1] = 0 x[4][2] = 1 x[4][3] = 0 x[4][4] = 0 x[4][5] = 1 x[4][6] = 1 x[4][7] = 1 x[4][8] = 1 
x[5][1] = 0 x[5][2] = 0 x[5][3] = 0 x[5][4] = 0 x[5][5] = 0 x[5][6] = 1 x[5][7] = 1 x[5][8] = 1 


<<< post process


<<< done

