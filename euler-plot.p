# Instructions:
#   Type the following commands at the terminal:
#       gnuplot
#       load "eulerPlot.p"

plot "euler.dat" using 1:2 title "Euler's solution"
set term wxt
