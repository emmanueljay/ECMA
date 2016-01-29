
<<< setup


<<< generate

Tried aggregator 1 time.
MIP Presolve eliminated 300 rows and 241 columns.
MIP Presolve modified 50 coefficients.
Reduced MIP has 479 rows, 402 columns, and 2074 nonzeros.
Reduced MIP has 350 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (1,23 ticks)
Probing fixed 0 vars, tightened 33 bounds.
Probing time = 0,00 sec. (3,53 ticks)
Tried aggregator 1 time.
MIP Presolve modified 125 coefficients.
Reduced MIP has 479 rows, 402 columns, and 2074 nonzeros.
Reduced MIP has 350 binaries, 0 generals, 0 SOSs, and 0 indicators.
Presolve time = 0,00 sec. (1,01 ticks)
Probing time = 0,00 sec. (2,51 ticks)
Clique table members: 1462.
MIP emphasis: balance optimality and feasibility.
MIP search method: dynamic search.
Parallel mode: deterministic, using up to 4 threads.
Root relaxation solution time = 0,01 sec. (6,85 ticks)

        Nodes                                         Cuts/
   Node  Left     Objective  IInf  Best Integer    Best Bound    ItCnt     Gap

      0     0       23,1670   188                     23,1670      299         
      0     0       22,6132   157                    Cuts: 70      404         
      0     0       22,2257   110                   Cuts: 128      581         
*     0+    0                            1,0000       22,2257      641     --- 
      0     0       21,8122   105        1,0000     Cuts: 106      641     --- 
      0     0       21,6728   119        1,0000      Cuts: 94      891     --- 
      0     0       21,1834   135        1,0000      Cuts: 83     1369     --- 
      0     0       20,6285    97        1,0000     Cuts: 140     1516     --- 
      0     0       20,1419    99        1,0000      Cuts: 87     1596     --- 
      0     0       19,5308    96        1,0000      Cuts: 46     1692     --- 
      0     0       19,0946    91        1,0000      Cuts: 36     1766     --- 
      0     0       18,5103    94        1,0000      Cuts: 40     1862     --- 
      0     0       18,3061    81        1,0000      Cuts: 91     1889     --- 
      0     0       17,9488    78        1,0000      Cuts: 67     1921     --- 
      0     0       17,5488    76        1,0000      Cuts: 64     1969     --- 
      0     0       16,7207    74        1,0000      Cuts: 65     2009     --- 
      0     0       16,0425    73        1,0000      Cuts: 39     2052     --- 
      0     0       15,6301    87        1,0000      Cuts: 60     2108     --- 
      0     0       15,0942    87        1,0000      Cuts: 88     2137     --- 
      0     0       14,6320    74        1,0000      Cuts: 66     2264     --- 
*     0+    0                            2,0000       14,6320     2264  631,60%
      0     0       14,2804    89        2,0000      Cuts: 85     2379  614,02%
      0     0       13,6447    91        2,0000      Cuts: 45     2466  582,23%
      0     0       13,0445    87        2,0000      Cuts: 51     2554  552,23%
      0     0       12,3668    79        2,0000      Cuts: 52     2688  518,34%
      0     0       11,8900    88        2,0000      Cuts: 79     2793  494,50%
      0     0       11,7273    76        2,0000      Cuts: 32     2891  486,36%
      0     0       11,7273    81        2,0000  ZeroHalf: 15     2923  486,36%
      0     0       11,7273    73        2,0000       Cuts: 9     2959  486,36%
      0     2       11,7273    73        2,0000       11,7273     2959  486,36%
Elapsed time = 0,53 sec. (281,49 ticks, tree = 0,01 MB, solutions = 2)
*    93+   39                            3,0000        9,3572    13676  211,91%
*   195+   39                            4,0000        8,4594    19007  111,49%

Clique cuts applied:  1
Flow cuts applied:  12
Mixed integer rounding cuts applied:  67
Zero-half cuts applied:  14

Root node processing (before b&c):
  Real time             =    0,53 sec. (281,22 ticks)
Parallel b&c, 4 threads:
  Real time             =    0,23 sec. (154,05 ticks)
  Sync time (average)   =    0,03 sec.
  Wait time (average)   =    0,00 sec.
                          ------------
Total (root+branch&cut) =    0,76 sec. (435,27 ticks)

<<< solve


OBJECTIVE: 4

x[1][1] = 1 x[1][2] = 0 x[1][3] = 0 x[1][4] = 0 x[1][5] = 0 x[1][6] = 0 x[1][7] = 0 x[1][8] = 0 
x[2][1] = 1 x[2][2] = 0 x[2][3] = 0 x[2][4] = 0 x[2][5] = 0 x[2][6] = 0 x[2][7] = 0 x[2][8] = 0 
x[3][1] = 1 x[3][2] = 0 x[3][3] = 0 x[3][4] = 0 x[3][5] = 0 x[3][6] = 0 x[3][7] = 0 x[3][8] = 0 
x[4][1] = 1 x[4][2] = 0 x[4][3] = 0 x[4][4] = 0 x[4][5] = 0 x[4][6] = 0 x[4][7] = 0 x[4][8] = 0 
x[5][1] = 0 x[5][2] = 0 x[5][3] = 0 x[5][4] = 0 x[5][5] = 0 x[5][6] = 0 x[5][7] = 0 x[5][8] = 0 


<<< post process


<<< done

