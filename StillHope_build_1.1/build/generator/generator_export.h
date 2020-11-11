
#ifndef GENERATOR_EXPORT_H
#define GENERATOR_EXPORT_H

#ifdef GENERATOR_STATIC_DEFINE
#  define GENERATOR_EXPORT
#  define GENERATOR_NO_EXPORT
#else
#  ifndef GENERATOR_EXPORT
#    ifdef generator_EXPORTS
        /* We are building this library */
#      define GENERATOR_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define GENERATOR_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef GENERATOR_NO_EXPORT
#    define GENERATOR_NO_EXPORT 
#  endif
#endif

#ifndef GENERATOR_DEPRECATED
#  define GENERATOR_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef GENERATOR_DEPRECATED_EXPORT
#  define GENERATOR_DEPRECATED_EXPORT GENERATOR_EXPORT GENERATOR_DEPRECATED
#endif

#ifndef GENERATOR_DEPRECATED_NO_EXPORT
#  define GENERATOR_DEPRECATED_NO_EXPORT GENERATOR_NO_EXPORT GENERATOR_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef GENERATOR_NO_DEPRECATED
#    define GENERATOR_NO_DEPRECATED
#  endif
#endif

#endif /* GENERATOR_EXPORT_H */
