# Bad Sorts
### A collection of novel sorting algorithms

All sorting algorithms accept a space separated list of integers as command line parameters. Results are provided to `stdout` as a space separated list of integers.

May be compiled by running `make [sortname]` or `make all` to compile all.

## `rotsort`

Relies on bit rot in memory to sort. Waits a year, then checks if an array of integers is sorted due to memory degradation. If not, it waits another year, which it will continue doing until the array is sorted.

## `scalesort`

On a large enough scale, all numbers to sort are roughly equal. Relies on this to provide `O(1)` run time.
