set datafile separator ";"
set xdata time
set timefmt "%Y:%m"
set format x "%Y:%m"
set terminal png
set output 'p2.png'
plot "p2SORTED.csv"
