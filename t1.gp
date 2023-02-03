set datafile separator ';'
set title 't1 graphic'
set xlabel ' ID station'
set ylabel 'temperatrure'
set autoscale x
set autoscale y
set yrange [-40:60]
set errorbars linecolor black linewidth 0.5 dashtype '.'
set terminal png
set output 't1.png'
plot "t1SORTED.csv"
