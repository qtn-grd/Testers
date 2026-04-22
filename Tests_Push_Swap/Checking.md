# PUSH_SWAP

## MANDATORY 📌

### Program 🖥️

- with no arguments

- with a list of one valid element
- with a list of one invalid argument
- with a list of two sorted elements
- with a list of two unsorted elements

- with a list mixing different positive and negative integers
- with a list containing duplicate integers
    including '0' and '-0'

- with a list containing '+' before positive numbers
- with a list containing both '+' and '-' before an integer

- with a list containing an integer exceeding limits
- with a list containing a float
- with a list containing an integer followed by an invalid character
- with a list of multiple strings
    valid or not
- with a list mixing integers and numeric strings


### Flags 🚩

- with one or two flags and no arguments
- with duplicate flags _(or more)_
- with two contradictory flags
- with two flags stuck together
- with only the bench flag
- with adaptive and three disorder levels: min, medium, max
- with a flag passed as a string

check differences with/without the adaptive flag
check behavior depending on flag placement


### Valgrind 🔬

- on the program alone
- on program & bench
- on program & selective flag
- on an already sorted list
- on a valid list to sort
- on an invalid list to sort


### Algorithms 📊

- check efficiency of each flag on lists:
    of size two
    of size three
    of size five
- check efficiency on lists
    of 100
    of 500
    of 1000

- without flags
- with each flag


## BONUS ✨

### Program 🖥️

- verify correct sorting of lists:
    already sorted initially
    correctly sorted manually
    incorrectly sorted manually

- check behavior with flags
- check behavior with invalid arguments
- compare with checker_linux


### Compilation ⚙️

- ability to have only `./push_swap` OR `./checker`


### Valgrind 🔬

- on an already sorted list _no operations_
- on a properly sortable list
- on a poorly sorted list

- with a non-existent operation