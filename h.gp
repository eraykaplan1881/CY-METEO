set datafile separator ";"
set terminal png
set output 'h.png'
set contour base
set pm3d
unset surface
set xrange [-10:10]
set yrange [-0.5:0.5]
set autoscale x
set autoscale y
set dgrid 60,60
set hidden3d   
set datafile separator ","
set view map     
splot "hSORTED.csv"
