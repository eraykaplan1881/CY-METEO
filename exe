#!/bin/bash

#--------------------------------------------------------------------------------------------
# FOR THE PRESENTATION
#--------------------------------------------------------------------------------------------

clear

BLUE='\033[0;34m' 
RED='\033[1;31m'
GREEN='\033[1;32m'
NC='\033[0m' # No Color

echo ""
echo -e "${BLUE}  ░█████╗░██╗░░░██╗░░░░░░███╗░░░███╗███████╗████████╗███████╗░█████╗░";
echo -e "${BLUE}  ██╔══██╗╚██╗░██╔╝░░░░░░████╗░████║██╔════╝╚══██╔══╝██╔════╝██╔══██╗";
echo -e "${BLUE}  ██║░░╚═╝░╚████╔╝░█████╗██╔████╔██║█████╗░░░░░██║░░░█████╗░░██║░░██║";
echo -e "${BLUE}  ██║░░██╗░░╚██╔╝░░╚════╝██║╚██╔╝██║██╔══╝░░░░░██║░░░██╔══╝░░██║░░██║";
echo -e "${BLUE}  ╚█████╔╝░░░██║░░░░░░░░░██║░╚═╝░██║███████╗░░░██║░░░███████╗╚█████╔╝";
echo -e "${BLUE}  ░╚════╝░░░░╚═╝░░░░░░░░░╚═╝░░░░░╚═╝╚══════╝░░░╚═╝░░░╚══════╝░╚════╝░${NC}";
echo ""

#--------------------------------------------------------------------------------------------
# FOR THE HELP COMMAND (--help)
#--------------------------------------------------------------------------------------------

for i in {1..19}
do
	if [[ "${!i}" == "--help" ]]
	then
		cat help.txt
		exit 1
	fi
done

#--------------------------------------------------------------------------------------------
# FOR SECURITY ( BASIC )
#--------------------------------------------------------------------------------------------
if [[ ! $@ =~ ^\-.+ ]]
then
	echo -e "${RED}you didn't type any options";
	exit 1;
fi

if [ "${20}" ]
then
	echo -e "${RED}only 19 options max";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
# FOR date1, date2, file, latitude1, latitude2, longitude1 and longitude2
#--------------------------------------------------------------------------------------------
if [[ $1 == "-d" ]]
then
	date1=$2
	date2=$3
elif [[ $2 == "-d" ]]
then
	date1=$3
	date2=$4
elif [[ $3 == "-d" ]]
then
	date1=$4
	date2=$5
elif [[ $4 == "-d" ]]
then
	date1=$5
	date2=$6
elif [[ $5 == "-d" ]]
then
	date1=$6
	date2=$7
elif [[ $6 == "-d" ]]
then
	date1=$7
	date2=$8
elif [[ $7 == "-d" ]]
then
	date1=$8
	date2=$9
elif [[ $8 == "-d" ]]
then
	date1=$9
	date2=${10}
elif [[ $9 == "-d" ]]
then
	date1=${10}
	date2=${11}
elif [[ ${10} == "-d" ]]
then
	date1=${11}
	date2=${12}
elif [[ ${11} == "-d" ]]
then
	date1=${12}
	date2=${13}
elif [[ ${12} == "-d" ]]
then
	date1=${13}
	date2=${14}
elif [[ ${13} == "-d" ]]
then
	date1=${14}
	date2=${15}
elif [[ ${14} == "-d" ]]
then
	date1=${15}
	date2=${16}
elif [[ ${15} == "-d" ]]
then
	date1=${16}
	date2=${17}
elif [[ ${16} == "-d" ]]
then
	date1=${17}
	date2=${18}
elif [[ ${17} == "-d" ]]
then
	date1=${18}
	date2=${19}
fi

if [[ $1 == "-f" ]]
then
	file=$2
elif [[ $2 == "-f" ]]
then
	file=$3
elif [[ $3 == "-f" ]]
then
	file=$4
elif [[ $4 == "-f" ]]
then
	file=$5
elif [[ $5 == "-f" ]]
then
	file=$6
elif [[ $6 == "-f" ]]
then
	file=$7
elif [[ $7 == "-f" ]]
then
	file=$8
elif [[ $8 == "-f" ]]
then
	file=$9
elif [[ $9 == "-f" ]]
then
	file=${10}
elif [[ ${10} == "-f" ]]
then
	file=${11}
elif [[ ${11} == "-f" ]]
then
	file=${12}
elif [[ ${12} == "-f" ]]
then
	file=${13}
elif [[ ${13} == "-f" ]]
then
	file=${14}
elif [[ ${14} == "-f" ]]
then
	file=${15}
elif [[ ${15} == "-f" ]]
then
	file=${16}
elif [[ ${16} == "-f" ]]
then
	file=${17}
elif [[ ${17} == "-f" ]]
then
	file=${18}
elif [[ ${18} == "-f" ]]
then
	file=${19}
fi

if [[ $1 == "-a" ]]
then
	latitude1=$2
	latitude2=$3
elif [[ $2 == "-a" ]]
then
	latitude1=$3
	latitude2=$4
elif [[ $3 == "-a" ]]
then
	latitude1=$4
	latitude2=$5
elif [[ $4 == "-a" ]]
then
	latitude1=$5
	latitude2=$6
elif [[ $5 == "-a" ]]
then
	latitude1=$6
	latitude2=$7
elif [[ $6 == "-a" ]]
then
	latitude1=$7
	latitude2=$8
elif [[ $7 == "-a" ]]
then
	latitude1=$8
	latitude2=$9
elif [[ $8 == "-a" ]]
then
	latitude1=$9
	latitude2=${10}
elif [[ $9 == "-a" ]]
then
	latitude1=${10}
	latitude2=${11}
elif [[ ${10} == "-a" ]]
then
	latitude1=${11}
	latitude2=${12}
elif [[ ${11} == "-a" ]]
then
	latitude1=${12}
	latitude2=${13}
elif [[ ${12} == "-a" ]]
then
	latitude1=${13}
	latitude2=${14}
elif [[ ${13} == "-a" ]]
then
	latitude1=${14}
	latitude2=${15}
elif [[ ${14} == "-a" ]]
then
	latitude1=${15}
	latitude2=${16}
elif [[ ${15} == "-a" ]]
then
	latitude1=${16}
	latitude2=${17}
elif [[ ${16} == "-a" ]]
then
	latitude1=${17}
	latitude2=${18}
elif [[ ${17} == "-a" ]]
then
	latitude1=${18}
	latitude2=${19}
fi

if [[ $1 == "-g" ]]
then
	longitude1=$2
	longitude2=$3
elif [[ $2 == "-g" ]]
then
	longitude1=$3
	longitude2=$4
elif [[ $3 == "-g" ]]
then
	longitude1=$4
	longitude2=$5
elif [[ $4 == "-g" ]]
then
	longitude1=$5
	longitude2=$6
elif [[ $5 == "-g" ]]
then
	longitude1=$6
	longitude2=$7
elif [[ $6 == "-g" ]]
then
	longitude1=$7
	longitude2=$8
elif [[ $7 == "-g" ]]
then
	longitude1=$8
	longitude2=$9
elif [[ $8 == "-g" ]]
then
	longitude1=$9
	longitude2=${10}
elif [[ $9 == "-g" ]]
then
	longitude1=${10}
	longitude2=${11}
elif [[ ${10} == "-g" ]]
then
	longitude1=${11}
	longitude2=${12}
elif [[ ${11} == "-g" ]]
then
	longitude1=${12}
	longitude2=${13}
elif [[ ${12} == "-g" ]]
then
	longitude1=${13}
	longitude2=${14}
elif [[ ${13} == "-g" ]]
then
	longitude1=${14}
	longitude2=${15}
elif [[ ${14} == "-g" ]]
then
	longitude1=${15}
	longitude2=${16}
elif [[ ${15} == "-g" ]]
then
	longitude1=${16}
	longitude2=${17}
elif [[ ${16} == "-g" ]]
then
	longitude1=${17}
	longitude2=${18}
elif [[ ${17} == "-g" ]]
then
	longitude1=${18}
	longitude2=${19}
fi
#--------------------------------------------------------------------------------------------
# FOR SECURITY ( UNKNWOWN OPTIONS )
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" != "-t1" && "${!i}" != "-t2" && "${!i}" != "-t3" && "${!i}" != "-p1" && "${!i}" != "-p2" && "${!i}" != "-p3" && "${!i}" != "-w" && "${!i}" != "-m" && "${!i}" != "-h" && "${!i}" != "-F" && "${!i}" != "-G" && "${!i}" != "-S" && "${!i}" != "-A" && "${!i}" != "-O" && "${!i}" != "-Q" && "${!i}" != "-d" && "${!i}" != $date1 && "${!i}" != $date2 && "${!i}" != "--tab" && "${!i}" != "--abr" && "${!i}" != "--avl" && "${!i}" != "--help" && "${!i}" != "-f" && "${!i}" != $file && "${!i}" != "-a" && "${!i}" != "-g" && "${!i}" != $latitude1 && "${!i}" != $latitude2 && "${!i}" != $longitude1 && "${!i}" != $longitude2 && "${!i}" != "" ]]
	then
		echo -e "${RED}unknown option"
		exit 1
	fi
done
#--------------------------------------------------------------------------------------------
# FOR SECURITY ( REPETITION )
#--------------------------------------------------------------------------------------------
dataTypeCount=0;
sortTypeCount=0;

tOPTCount=0
pOPTCount=0
wOPTCount=0
mOPTCount=0
hOPTCount=0
LocalisationOPTCount=0
aOPTCount=0
gOPTCount=0
tabOPTCount=0
abrOPTCount=0
avlOPTCount=0
fOPTCount=0

t1OPT=0
t2OPT=0
t3OPT=0
p1OPT=0
p2OPT=0
p3OPT=0
wOPT=0
mOPT=0
hOPT=0
FOPT=0
GOPT=0
SOPT=0
AOPT=0
OOPT=0
QOPT=0
aOPT=0
gOPT=0
dOPT=0
tabOPT=0
abrOPT=0
avlOPT=0
fOPT=0

#--------------------------------------------------------------------------------------------
# FOR -t1
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "-t1" ]]
	then
		#echo -e "${RED}-t1 option activated";
		((dataTypeCount++));
		((tOPTCount++));
		((t1OPT++));
	fi
done
#--------------------------------------------------------------------------------------------
# FOR -t2
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "-t2" ]]
	then
		#echo -e "${RED}-t2 option activated";
		((dataTypeCount++));
		((tOPTCount++));
		((t2OPT++));
	fi
done
#--------------------------------------------------------------------------------------------
# FOR -t3
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "-t3" ]]
	then
		#echo -e "${RED}-t3 option activated";
		((dataTypeCount++));
		((tOPTCount++));
		((t3OPT++));
	fi
done
#--------------------------------------------------------------------------------------------
if [[ $tOPTCount > 1 ]]
then
	echo -e "${RED}you typed at least twice the -t option";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
# FOR -p1
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "-p1" ]]
	then
		#echo -e "${RED}-p1 option activated";
		((dataTypeCount++));
		((pOPTCount++));
		((p1OPT++));
	fi
done
#--------------------------------------------------------------------------------------------
# FOR -p2
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "-p2" ]]
	then
		#echo -e "${RED}-p2 option activated";
		((dataTypeCount++));
		((pOPTCount++));
		((p2OPT++));
	fi
done
#--------------------------------------------------------------------------------------------
# FOR -p3
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "-p3" ]]
	then
		#echo -e "${RED}-p3 option activated";
		((dataTypeCount++));
		((pOPTCount++));
		((p3OPT++));
	fi
done
#--------------------------------------------------------------------------------------------
if [[ $pOPTCount > 1 ]]
then
	echo -e "${RED}you typed at least twice the -p option";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
# FOR -w
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "-w" ]]
	then
		#echo -e "${RED}-w option activated";
		((dataTypeCount++));
		((wOPTCount++));
		((wOPT++));
	fi
done
#--------------------------------------------------------------------------------------------
if [[ $wOPTCount > 1 ]]
then
	echo -e "${RED}you typed at least twice the -w option";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
# FOR -m
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "-m" ]]
	then
		#echo -e "${RED}-m option activated";
		((dataTypeCount++));
		((mOPTCount++));
		((mOPT++));
	fi
done
#--------------------------------------------------------------------------------------------
if [[ $mOPTCount > 1 ]]
then
	echo -e "${RED}you typed at least twice the -m option";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
# FOR -h
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "-h" ]]
	then
		#echo -e "${RED}-h option activated";
		((dataTypeCount++));
		((hOPTCount++));
		((hOPT++));
	fi
done
#--------------------------------------------------------------------------------------------
if [[ $hOPTCount > 1 ]]
then
	echo -e "${RED}you typed at least twice the -h option";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
# FOR -F LocalisationOPT=0
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "-F" ]]
	then
		#echo -e "${RED}-F option activated";
		((LocalisationOPTCount++));
		((FOPT++));
	fi
done
#--------------------------------------------------------------------------------------------
# FOR -G
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "-G" ]]
	then
		#echo -e "${RED}-G option activated";
		((LocalisationOPTCount++));
		((GOPT++));
	fi
done
#--------------------------------------------------------------------------------------------
# FOR -S
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "-S" ]]
	then
		#echo -e "${RED}-S option activated";
		((LocalisationOPTCount++));
		((SOPT++));
	fi
done
#--------------------------------------------------------------------------------------------
# FOR -A
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "-A" ]]
	then
		#echo -e "${RED}-A option activated";
		((LocalisationOPTCount++));
		((AOPT++));
	fi
done
#--------------------------------------------------------------------------------------------
# FOR -O
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "-O" ]]
	then
		#echo -e "${RED}-O option activated";
		((LocalisationOPTCount++));
		((OOPT++));
	fi
done
#--------------------------------------------------------------------------------------------
# FOR -Q
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "-Q" ]]
	then
		#echo -e "${RED}-Q option activated";
		((LocalisationOPTCount++));
		((QOPT++));
	fi
done
#--------------------------------------------------------------------------------------------
if [[ $LocalisationOPTCount > 1 ]]
then
	echo -e "${RED}you typed at least two location options";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
# FOR -a
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "-a" ]]
	then
		if [[ $latitude1 == "" || $latitude2 == "" ]]
		then
			echo -e "${RED}you didn't type the two latitudes";
			exit 1;

		elif [[ $latitude2 < $latitude1 ]]
		then
			echo -e "${RED}you didn't type the latitude correctly";
			exit 1;

		elif (( $latitude1 < -90 || $latitude2 < -90 || $latitude1 > 90 || $latitude2 > 90 ))
		then
			echo -e "${RED}you didn't type the latitude correctly";
			exit 1;
		else
			#echo -e "${RED}-a option activated";
			((aOPTCount++));
			((aOPT++));
		fi

	fi
done
#--------------------------------------------------------------------------------------------
if [[ $aOPTCount > 1 ]]
then
	echo -e "${RED}you typed at least twice the -a option";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
# FOR -g
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "-g" ]]
	then
		if [[ $longitude1 == "" || $longitude2 == "" ]]
		then
			echo -e "${RED}you didn't type the two longitudes";
			exit 1;

		elif [[ $longitude2 < $longitude1 ]]
		then
			echo -e "${RED}you didn't type the longitude correctly";
			exit 1;

		elif (( $longitude1 < -180 || $longitude2 < -180 || $longitude1 > 180 || $longitude2 > 180 ))
		then
			echo -e "${RED}you didn't type the longitude correctly";
			exit 1;
		else
			#echo -e "${RED}-g option activated";
			((gOPTCount++));
			((gOPT++));
		fi

	fi
done
#--------------------------------------------------------------------------------------------
if [[ $gOPTCount > 1 ]]
then
	echo -e "${RED}you typed at least twice the -g option";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
if [[ $LocalisationOPTCount == 1 && $aOPTCount == 1 ]]
then
	echo -e "${RED}you can't type a location option and a latitude option";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
if [[ $LocalisationOPTCount == 1 && $gOPTCount == 1 ]]
then
	echo -e "${RED}you can't type a location option and a longitude option";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
# FOR --tab
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "--tab" ]]
	then
		#echo -e "${RED}--tab option activated";
		((sortTypeCount++));
		((tabOPTCount++));
		((tabOPT++));
	fi
done
#--------------------------------------------------------------------------------------------
if [[ $tabOPTCount > 1 ]]
then
	echo -e "${RED}you typed at least twice the --tab option";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
# FOR --abr
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "--abr" ]]
	then
		#echo -e "${RED}--abr option activated";
		((sortTypeCount++));
		((abrOPTCount++));
		((abrOPT++));
	fi
done
#--------------------------------------------------------------------------------------------
if [[ $abrOPTCount > 1 ]]
then
	echo -e "${RED}you typed at least twice the --abr option";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
# FOR --avl
#--------------------------------------------------------------------------------------------
for i in {1..19}
do
	if [[ "${!i}" == "--avl" ]]
	then
		#echo -e "${RED}--avl option activated";
		((sortTypeCount++));
		((avlOPTCount++));
		((avlOPT++));
	fi
done
#--------------------------------------------------------------------------------------------
if [[ $avlOPTCount > 1 ]]
then
	echo -e "${RED}you typed at least twice the --avl option";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
if [[ $tabOPTCount == 1 && $abrOPTCount == 1 ]]
then
	echo -e "${RED}you can't type two sorting option";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
if [[ $tabOPTCount == 1 && $avlOPTCount == 1 ]]
then
	echo -e "${RED}you can't type two sorting option";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
if [[ $abrOPTCount == 1 && $avlOPTCount == 1 ]]
then
	echo -e "${RED}you can't type two sorting option";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
# FOR -d
#--------------------------------------------------------------------------------------------
date1Length=${#date1}
date2Length=${#date2}

for i in {1..19}
do
	if [[ "${!i}" == "-d" ]]
	then
		if [[ $date1Length != 10 || $date2Length != 10 ]]
		then
			echo -e "${RED}you didn't type the date correctly";
			exit 1;

		Ydate1="$(cut -d'-' -f1 <<<$date1)"
		Mdate1="$(cut -d'-' -f2 <<<$date1)"
		Ddate1="$(cut -d'-' -f3 <<<$date1)"

		Ydate2="$(cut -d'-' -f1 <<<$date2)"
		Mdate2="$(cut -d'-' -f2 <<<$date2)"
		Ddate2="$(cut -d'-' -f3 <<<$date2)"

		elif [[ $date1 == "" || $date2 == "" ]]
		then
			echo -e "${RED}you didn't type the two dates";
			exit 1;

		elif [[ $Ydate2 < $Ydate1 ]]
		then
			echo -e "${RED}you didn't type the date correctly";
			exit 1;
		elif [[ $Ydate2 == $Ydate1 && $Mdate2 < $Mdate1 ]]
		then
			echo -e "${RED}you didn't type the date correctly";
			exit 1;
		elif [[ $Ydate2 == $Ydate1 && $Mdate2 == $Mdate1 && $Ddate2 < $Ddate1 ]]
		then
			echo -e "${RED}you didn't type the date correctly";
			exit 1;

		else
			if echo $date1 | grep -qE '20[0-9][0-9]-(0[1-9]|1[0-2])-(0[1-9]|1[0-9]|2[0-9]|3[01])';
			then
				:
			else
				echo -e "${RED}you didn't type the date correctly";
   				exit 1;
			fi
			if echo $date2 | grep -qE '20[0-9][0-9]-(0[1-9]|1[0-2])-(0[1-9]|1[0-9]|2[0-9]|3[01])';
			then
				#echo -e "${RED}-d option activated";
				((dOPTCount++));
				((dOPT++));
			else
				echo -e "${RED}you didn't type the date correctly";
				exit 1;
			fi
		fi
	fi
done
#--------------------------------------------------------------------------------------------
if [[ $dOPTCount > 1 ]]
then
	echo -e "${RED}you typed at least twice the -d option";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
# FOR -f
#--------------------------------------------------------------------------------------------
if [[ $1 != "-f" && $2 != "-f" && $3 != "-f" && $4 != "-f" && $5 != "-f" && $6 != "-f" && $7 != "-f" && $8 != "-f" && $9 != "-f" && ${10} != "-f" && ${11} != "-f" && ${12} != "-f" && ${13} != "-f" && ${14} != "-f" && ${15} != "-f" && ${16} != "-f" && ${17} != "-f" && ${18} != "-f" ]]
then
	echo -e "${RED}you forgot the f option";
	exit 1;
fi

for i in {1..19}
do
	if [[ "${!i}" == "-f" ]]
	then
		((fOPTCount++));
		if [[ $file == "" ]]
		then
			echo -e "${RED}you didn't type any filename";
			exit 1;
		elif [[ -f "$file" ]];
		then
			csvCountFR=`awk 'BEGIN{FS=";"}END{print NF}' $file`
			csvCount=`awk 'BEGIN{FS=","}END{print NF}' $file`
			if [[ ( $csvCountFR == 15 || $csvCount == 15 ) && $file == *.csv ]]
			then
				#echo -e "${RED}$file is a valid CSV file"
				((fOPT++));
			else
				echo -e "${RED}$file isn't a valid file"
				exit 1
			fi
		else
			echo -e "${RED}$file isn't a valid file"
			exit 1
		fi
	fi
done

if [[ $fOPTCount > 1 ]]
then
	echo -e "${RED}you typed at least twice the -f option";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
# FOR SECURITY ( A LEAST ONE DATA TYPE OPTION )
#--------------------------------------------------------------------------------------------
if [[ $dataTypeCount == 0 ]]
then
	echo -e "${RED}you forgot to type a data type option${NC}";
	exit 1;
fi
#--------------------------------------------------------------------------------------------
# FOR SECURITY ( A LEAST ONE SORT TYPE OPTION )
#--------------------------------------------------------------------------------------------
if [[ $sortTypeCount == 0 ]]
then
	#echo -e "${RED}--avl option activated";
	((avlOPT++));
fi
#--------------------------------------------------------------------------------------------
# FILTERING

echo > tmpLocation1.csv
echo > tmpLocation1Bis.csv
echo > tmpLocation2.csv
echo > tmpDates.csv
echo > tmpTOPT.csv
echo > tmpPOPT.csv
echo > tmpWOPT.csv
echo > tmpMOPT.csv
echo > tmpHOPT.csv

echo > t1SORTED.csv
echo > t2SORTED.csv
echo > t3SORTED.csv
echo > p1SORTED.csv
echo > p2SORTED.csv
echo > p3SORTED.csv
echo > wSORTED.csv
echo > mSORTED.csv
echo > hSORTED.csv


# Location1 Filtering
# For -F
if [[ $FOPT == 1 ]]
then
	tail -n +2 $file | grep ";[4-5][0-9]\.[0-9]*,-*[0-9]\." >> tmpLocation1.csv
	sed '1d' tmpLocation1.csv > tmpLocation1Bis.csv
# For -G
elif [[ $GOPT == 1 ]]
then
	tail -n +2 $file | grep ";[0-9]\.[0-9]*,-5[0-9]" >> tmpLocation1.csv
	sed '1d' tmpLocation1.csv > tmpLocation1Bis.csv
# For -S
elif [[ $SOPT == 1 ]]
then
	tail -n +2 $file | grep ";[4-6][0-9]\.[0-9]*,-[4-6][0-9]" >> tmpLocation1.csv
	sed '1d' tmpLocation1.csv > tmpLocation1Bis.csv
# For -A
elif [[ $AOPT == 1 ]]
then
	tail -n +2 $file | grep ";[1-3][0-9]\.[0-9]*,-[6-9][0-9]" >> tmpLocation1.csv
	sed '1d' tmpLocation1.csv > tmpLocation1Bis.csv
# For -O
elif [[ $OOPT == 1 ]]
then
	tail -n +2 $file | grep ";-[1-6][0-9]\.[0-9]*,[4-9][0-9]" >> tmpLocation1.csv
	sed '1d' tmpLocation1.csv > tmpLocation1Bis.csv
# For -Q
elif [[ $QOPT == 1 ]]
then
	tail -n +2 $file | grep ";-[6-9][0-9]\.[0-9]*," >> tmpLocation1.csv
	sed '1d' tmpLocation1.csv > tmpLocation1Bis.csv
else
	cat $file > tmpLocation1Bis.csv
fi

#one=1
latitude1="${latitude1/,/.}"
#latitude1=$(echo $latitude1 $one | awk '{print $1 - $2}')
latitude2="${latitude2/,/.}"
#latitude2=$(echo $latitude2 $one | awk '{print $1 + $2}')

longitude1="${longitude1/,/.}"
#longitude1=$(echo $longitude1 $one | awk '{print $1 - $2}')
longitude2="${longitude2/,/.}"
#longitude2=$(echo $longitude2 $one | awk '{print $1 + $2}')

# For -a AND -g
if [[ $aOPT == 1 && $gOPT == 1 ]]
then
	cat tmpLocation1Bis.csv | awk -F ';|,' -vlatitude1=$latitude1 -vlatitude2=$latitude2 -vlongitude1=$longitude1 -vlongitude2=$longitude2 '{if (latitude1 <= $10 && latitude2 >= $10 && longitude1 <= $11 && longitude2 >= $11) print}' > tmpLocation2.csv
# For -a
elif [[ $aOPT == 1 ]]
then
	cat tmpLocation1Bis.csv | awk -F ';|,' -vlatitude1=$latitude1 -vlatitude2=$latitude2 '{if (latitude1 <= $10 && latitude2 >= $10) print}' > tmpLocation2.csv
# For -g
elif [[ $gOPT == 1 ]]
then	
	cat tmpLocation1Bis.csv | awk -F ';|,' -vlongitude1=$longitude1 -vlongitude2=$longitude2 '{if (longitude1 <= $11 && longitude2 >= $11) print}' > tmpLocation2.csv
else
	cat tmpLocation1Bis.csv > tmpLocation2.csv
fi


# Dates Filtering
if [[ $dOPT == 1 ]]
then	
	# Adding one day to $date2
	timestamp=$(date -d "$date2" +%s)
	timestamp=$((timestamp + 86400))
	date2=$(date -d "@$timestamp" +%Y-%m-%d)
	
	cat tmpLocation2.csv | awk -F ";" -vdate1=$date1 -vdate2=$date2 '{if (date1 <= $2 && date2 >= $2) print}' > tmpDates.csv
else
	cat tmpLocation2.csv > tmpDates.csv
fi


# DATA Type Filtering

gcc -o cy-meteo cy-meteo.c

if [[ $tabOPT == 1 ]]
then
	sortOPTVAR="--tab"
elif [[ $abrOPT == 1 ]]
then
	sortOPTVAR="--abr"
elif [[ $avlOPT == 1 ]]
then
	sortOPTVAR="--avl"
fi

# temperatures -t1
if [[ $t1OPT == 1 ]]
then
	cat tmpDates.csv | cut -d ';' -f1,11 > tmpTOPT.csv
	./cy-meteo -f tmpTOPT.csv -o t1SORTED.csv $sortOPTVAR -t1
fi

# temperatures -t2
if [[ $t2OPT == 1 ]]
then
	cat tmpDates.csv | cut -d ';' -f2,11 > tmpTOPT.csv
	./cy-meteo -f tmpTOPT.csv -o t2SORTED.csv $sortOPTVAR -t2
fi

# temperatures -t3
if [[ $t3OPT == 1 ]]
then
	cat tmpDates.csv | cut -d ';' -f1,2,11 > tmpTOPT.csv
	./cy-meteo -f tmpTOPT.csv -o t3SORTED.csv $sortOPTVAR -t3
fi


# station pressures -p1
if [[ $p1OPT == 1 ]]
then
	cat tmpDates.csv | cut -d ';' -f1,7 > tmpPOPT.csv
	./cy-meteo -f tmpPOPT.csv -o p1SORTED.csv $sortOPTVAR -p1
fi

# station pressures -p2
if [[ $p2OPT == 1 ]]
then
	cat tmpDates.csv | cut -d ';' -f2,7 > tmpPOPT.csv
	./cy-meteo -f tmpPOPT.csv -o p2SORTED.csv $sortOPTVAR -p2
fi

# station pressures -p3
if [[ $p3OPT == 1 ]]
then
	cat tmpDates.csv | cut -d ';' -f1,2,7 > tmpPOPT.csv
	./cy-meteo -f tmpPOPT.csv -o p3SORTED.csv $sortOPTVAR -p3
fi


# -w
if [[ $wOPT == 1 ]]
then
	cat tmpDates.csv | cut -d ';' -f1,4,5 > tmpWOPT.csv
	./cy-meteo -f tmpWOPT.csv -o wSORTED.csv $sortOPTVAR -w
fi

# -m
if [[ $mOPT == 1 ]]
then
	cat tmpDates.csv | cut -d ';' -f1,6 > tmpMOPT.csv
	./cy-meteo -f tmpMOPT.csv -o mSORTED.csv $sortOPTVAR -m -r
fi

# -h
if [[ $hOPT == 1 ]]
then
	cat tmpDates.csv | cut -d ';' -f1,14 > tmpHOPT.csv
	./cy-meteo -f tmpHOPT.csv -o hSORTED.csv $sortOPTVAR -h -r
fi

result=$?
if [ $result -eq 4 ]
then
	echo -e "${RED}Internal runtime error"
	exit 4
elif [ $result -eq 3 ]
then
	echo -e "${RED}Error with output data file"
	exit 3
elif [ $result -eq 2 ]
then
	echo -e "${RED}Error with input data file"
	exit 2
elif [ $result -eq 1 ]
then
	echo -e "${RED}Error on enabled options${NC}"
	#exit 1
elif [ $result -eq 0 ]
then
	echo -e "${GREEN}The C program was executed correctly and"
	echo -e "${GREEN}the requested operations were performed successfully.${NC}"

	if [[ $t1OPT == 1 ]]
	then
		#gnuplot t1.gp
		:
	fi
	
	if [[ $t2OPT == 1 ]]
	then
		#gnuplot t2.gp
		:
	fi
	
	if [[ $t3OPT == 1 ]]
	then
		#gnuplot t3.gp
		:
	fi
	
	if [[ $p1OPT == 1 ]]
	then
		#gnuplot p1.gp
		:
	fi
	
	if [[ $p2OPT == 1 ]]
	then
		#gnuplot p2.gp
		:
	fi
	
	if [[ $p3OPT == 1 ]]
	then
		#gnuplot p3.gp
		:
	fi
	
	if [[ $wOPT == 1 ]]
	then
		#gnuplot w.gp
		:
	fi
	
	if [[ $mOPT == 1 ]]
	then
		gnuplot m.gp
	fi

	if [[ $hOPT == 1 ]]
	then
		gnuplot h.gp
	fi
fi
















