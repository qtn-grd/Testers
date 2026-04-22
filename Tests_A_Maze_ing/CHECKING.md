# A_MAZE_ING

## Checking 🔍


### Before Launch 📦

- presence of the `a_maze_ing.py` file
- presence of the `Makefile`
- presence of the `README`
- presence of the `mazegen package` _(.whl / .tar.gz files)_
- presence / absence of a `config.txt` file / other name

check if the README is complete with:
- base --> first line + Description + Instructions + Resources
- subject additions --> config file details + algorithms (who/why) + reusable parts + team distribution/evolution + AI usage

check that the Makefile works with the required commands:
- install + run + debug + clean + lint


### Behavior 🤖

How does the program behave if:

- wrong number of arguments, wrong order of arguments, missing arguments
- missing config file
- different config file name
- different config file type
- config file without read permissions

What happens if the evaluator sets the config file name as the output_file?


### Parsing 🧩

How does the program react if:

- a parameter is missing
- a parameter is duplicated
- a parameter receives the wrong type
- a parameter is left without an associated value
- parameters are written in lowercase / uppercase / mixed case, including boolean values

- there are one or more lines starting with '#'
- there are one or more empty lines
- there are one or more lines with invalid content outside parsing rules
- there are '0' or multiple '=' on a line
- there are more ',' than necessary on a line

- some values are set to 0 or negative

- the SEED is placed somewhere other than last

- a conflict is created between entry and exit
- one or more conflicts are created between entry/exit and logo

- check a very small maze, a very large maze, a single-row maze, and a single-column maze


### Functionality 🛠️

- ability to change colors
- ability to regenerate the maze
- ability to display or hide the solution
- visible difference when `Perfect` = `True` or `False`

- what happens if random commands are entered in the menu, or `Ctrl-C` / `Ctrl-D` is used

- verify correct creation of each output, in the right format, and identical when using the same seed

- what happens if output file permissions are removed