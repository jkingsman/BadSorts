all: rotsort scalesort

rotsort: rotsort.c
	gcc -o rotsort -Wall -Wpedantic -Wextra rotsort.c

scalesort: scalesort.c
	gcc -o scalesort -Wall -Wpedantic -Wextra scalesort.c

clean:
	rm -f rotsort scalesort a
