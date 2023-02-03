set datafile separator ";"
set xdata time
set timefmt "%Y:%m"
set format x "%Y:%m"
set terminal png
set output 't2.png'
plot "t2SORTED.csv"
