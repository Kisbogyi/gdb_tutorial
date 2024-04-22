# How to debug basic files
#### How to compile with gcc
``` bash
gcc main.c -g # -g enables debug symbols
gdb a.out
```
*Debug symbols enables additional information in binary like function, variable names*

#### Debugging a running process
``` bash
gdb -p <process id>
```
__Running:__ 
- `tui`: runs gdb with text user interface
- `list`: list code that's currently in gdb
- `run`: runs the binary
- `break <breakpoint>`: create a break point (can be used with line number and function name)
- `info breakpoints`: list breakpoints
- `info registers`: prints info about registers 
- `info proc mappings`: prints memory map
- `x/s <memory addr>`: prints memory as string
- `start`: `break main` + `start`
- `bt`: prints backtrace
- `print <expr>`: prints stuff to stdout
- `c`: continues the running of the program, till next break point
- `n / next`: steps to next line in program
- `step`: steps into next line
- `jump *<addr>`: resumes program execution from a given address
- `<enter>`: repeats previous commands
	
__Debugging without debug symbols:__
- `disassemble <function name / range>`: dissassembles the function
- `layout asm`: prints assembly layout
- `set disassembly-flavor <intel>`: switches assembly to intel

## Demo debug code, and debug a running process
- `gdb -p <pid>`: attach to running process
- `frame / f`: prints current line and line number

## Reversable debugging
#### Command to run file while it does not crash
``` bash
while ./buggy; do echo Ok; done
```

 - `b main`: creates breakpoint at start of main
 - `b <exit>`: creates breakpoint at end of main
 - `command 2`: runs command when breakpoint 2 is hit
	 - `run`: runs code
	 - `end`: end recording
 - `command 1`: runs command when breakpoint 2 is hit
	 - `record`: records code steps
	 - `continue`: continues debugging
 - `set pagination off`: don't ask for input at end of large output
 - `reverse-stepi`: step backwards
# GEF:
`https://github.com/hugsy/gef`


