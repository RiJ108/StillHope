
#ifndef PERLINNOISE_EXPORT_H
#define PERLINNOISE_EXPORT_H

#ifdef PERLINNOISE_STATIC_DEFINE
#  define PERLINNOISE_EXPORT
#  define PERLINNOISE_NO_EXPORT
#else
#  ifndef PERLINNOISE_EXPORT
#    ifdef perlinNoise_EXPORTS
        /* We are building this library */
#      define PERLINNOISE_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define PERLINNOISE_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef PERLINNOISE_NO_EXPORT
#    define PERLINNOISE_NO_EXPORT 
#  endif
#endif

#ifndef PERLINNOISE_DEPRECATED
#  define PERLINNOISE_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef PERLINNOISE_DEPRECATED_EXPORT
#  define PERLINNOISE_DEPRECATED_EXPORT PERLINNOISE_EXPORT PERLINNOISE_DEPRECATED
#endif

#ifndef PERLINNOISE_DEPRECATED_NO_EXPORT
#  define PERLINNOISE_DEPRECATED_NO_EXPORT PERLINNOISE_NO_EXPORT PERLINNOISE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef PERLINNOISE_NO_DEPRECATED
#    define PERLINNOISE_NO_DEPRECATED
#  endif
#endif

#endif /* PERLINNOISE_EXPORT_H */
