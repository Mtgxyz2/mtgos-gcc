#undef TARGET_MTGOS
#define TARGET_MTGOS 1

#define LIB_SPEC "-lc -lmtg"

#define STARTFILE_SPEC "crt0.o%s crti.0%s crtbegin.o%s"

#define ENDFILE_SPEC "crtend.o%s ctrn.o%s"

#undef NO_IMPLICIT_EXTERN_C
#define NO_IMPLICIT_EXTERN_C 1

#undef TARGET_OS_CPP_BUILTINS
#define TARGET_OS_CPP_BUILTINS() \
    do { \
        builtin_define("__mtgos__"); \
        builtin_define("__unix__"); \
        builtin_assert("system=mtgos"); \
        builtin_assert("system=unix"); \
        builtin_assert("system=posix"); \
    } while(0);
