# GCC Cheatsheet

## Basic Usage
Compile one or more source files into a specified executable. If no executable is specified, the file will be output as `a.out`.

```
gcc source-file1.c sourcefile2.c, ... --output executable
```

## Common Flags

### Compile without linking (**-c**)

```
gcc -c ...
```

### Run pre-process only without compiling, assembling, or linking (**-E**)

```
gcc -E ...
```

### Compile only without assembling or linking (**-S**)

```
gcc -S ...
```
