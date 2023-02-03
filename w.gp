set datafile separator ";"
set title "w graphic"
set xlabel " longitute"
set ylabel "latitude"
set autoscale x
set autoscale y
set terminal png
set output 'w.png'
plot "wSORTED.csv"
