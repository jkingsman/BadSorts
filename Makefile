all: rotsort scalesort bigdataquicksort conwaysort

rotsort: rotsort.c
	gcc -o rotsort -Wall -Wpedantic -Wextra rotsort.c

scalesort: scalesort.c
	gcc -o scalesort -Wall -Wpedantic -Wextra scalesort.c

bigdataquicksort: bigdataquicksort.c
	gcc -o bigdataquicksort -Wall -Wpedantic -Wextra bigdataquicksort.c

conwaysort: bigdataquicksort.c
	gcc -o conwaysort -Wall -Wpedantic -Wextra conwaysort.c

clean:
	rm -f rotsort scalesort bigdataquicksort conwaysort a
