set datafile separator ";"
set title textcolor "red"
set title "m graphic"
set xlabel "longitude"
set ylabel "latitude"
set pm3d
set dgrid3d 100,100,3
set autoscale x
set autoscale y
set terminal png
set output 'm.png'
splot "mSORTED.csv"
