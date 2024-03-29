# libc
It is a x86 libc(C17 ballot) Linux/BSD implementation for fun and profit.
The project's idea is to create from scratch the lib C[^1], based on the Lib C proposal[^2].

# Keyworkds
|||||
|---|---|---|---|
|auto|extern|short|while|
|break|float|signed|_Alignas|
|case|for|sizeof|_Alignof|
|char|goto|static|_Atomic|
|const|if|struct|_Bool|
|continue|inline|switch|_Complex|
|default|int|typedef|_Generic|
|do|long|union|_Imaginary|
|double|register|unsigned|_Noreturn|
|else|restrict|void|_Static_assert|
|enum|return|volatile|_Thread_local|

# Storage-clas specifiers
 typedef

 extern

 static

 _Thread_local

 auto

 register

# Type specifiers
 void

 char

 short

 int

 long

 float

 double

 signed

 unsigned

 _Bool

 _Complex

# Function Specifiers
 _Noreturn

 inline

# Type qualifiers
 const

 restrict

 volatile

 _Atomic

# Alignment specifier
 _Alignas (type-name|constant-expression)

# Headers

| Header | Implementation Status |
|:--------|--------:|
|assert.h| wip |
|complex.h| 0% |
|ctype.h| 0%|
|errno.h| wip|
|fenv.h|0%|
|float.h|0%|
|inttypes.h|0%|
|iso646.h|wip|
|limits.h|0%|
|locale.h|0%|
|math.h|0%|
|setjmp.h|0%|
|signal.h|0%|
|stdalign.h|0%|
|stdarg.h|0%|
|stdatomic.h|0%|
|stdbool.h|0%|
|stddef.h|0%|
|stdint.h|0%|
|stdio.h|0%|
|stdlib.h|0%|
|stdnoreturn.h|wip|
|string.h|0%|
|tgmath.h|0%|
|threads.h|0%|
|time.h|0%|
|uchar.h|0%|
|wchar.h|0%|
|wctype.h|0%|


# References
[^1]: https://www.iso-9899.info/wiki/The_Standard
[^2]: https://web.archive.org/web/20181230041359if_/http://www.open-std.org/jtc1/sc22/wg14/www/abq/c17_updated_proposed_fdis.pdf
