# [0x09. C - Static libraries](https://github.com/SifaKasena/0x09-static_libraries)
This directory contains tasks that cover the basics on C Static Libraries.

## Table of Content
- [Progress](#progress)
- [Resources](#resources)
- [Tasks](#tasks)
 - [Mandatory Tasks](#mandatory-tasks)
 - [Advanced Tasks](#advanced-tasks)
- [Author](#author)

## Progress
- [x] Mandatory Tasks
 - [x] Task 0
 - [x] Task 1

## Resources
> **Read or watch:**
> - [What Is A “C” Library? What Is It Good For?](https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ)
> - [Creating A Static “C” Library Using “ar” and “ranlib”](https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ)
> - [Using A “C” Library In A Program](https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ)
> - [What is difference between Dynamic and Static library(Static and Dynamic linking)](https://intranet.alxswe.com/rltoken/PexOGO-npR_ZDQk-SpOR9g)
>
> **man or help:**
> - `ar`
> - `ranlib`
> - `nm`

## Tasks
### Mandatory Tasks
0. #### A library is not a luxury but one of the necessities of life
> Create the static library `libmy.a` containing all the functions listed below:
```
> int _putchar(char c);
> int _islower(int c);
> int _isalpha(int c);
> int _abs(int n);
> int _isupper(int c);
> int _isdigit(int c);
> int _strlen(char *s);
> void _puts(char *s);
> char *_strcpy(char *dest, char *src);
> int _atoi(char *s);
> char *_strcat(char *dest, char *src);
> char *_strncat(char *dest, char *src, int n);
> char *_strncpy(char *dest, char *src, int n);
> int _strcmp(char *s1, char *s2);
> char *_memset(char *s, char b, unsigned int n);
> char *_memcpy(char *dest, char *src, unsigned int n);
> char *_strchr(char *s, char c);
> unsigned int _strspn(char *s, char *accept);
> char *_strpbrk(char *s, char *accept);
> char *_strstr(char *haystack, char *needle);
```

&emsp;File(s):  
- &emsp;&emsp;&emsp;[libmy.a](https://github.com/SifaKasena/0x09-static_libraries/libmy.a) - The created static library
- &emsp;&emsp;&emsp;[main.h](https://github.com/SifaKasena/0x09-static_libraries/main.h) - Header file containing all function prototypes
1. #### Without libraries what have we? We have no past and no future
> Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files that are in the current directory.

&emsp;File(s):  
- &emsp;&emsp;&emsp;[create_static_lib.sh](https://github.com/SifaKasena/0x09-static_libraries/create_static_lib.sh) - Shell script to create `liball.a` static library

### Advanced Tasks
There are no advanced tasks for this project.

## Author
- Github - [SifaKasena](https://github.com/SifaKasena)
- Twitter - [@Username]()
- Linkedin - [@Username]()
- Medium - [User Name]()
