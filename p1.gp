set datafile separator ";"
set title "p1 graphic"
set xlabel "ID station"
set ylabel "pression"
set autoscale x
set autoscale y
set errorbars linecolor black linewidth 0.5 dashtype '.'
set terminal png
set output 'p1.png'
plot "p1SORTED.csv"
