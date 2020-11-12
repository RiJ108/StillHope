
#ifndef WORLD_EXPORT_H
#define WORLD_EXPORT_H

#ifdef WORLD_STATIC_DEFINE
#  define WORLD_EXPORT
#  define WORLD_NO_EXPORT
#else
#  ifndef WORLD_EXPORT
#    ifdef world_EXPORTS
        /* We are building this library */
#      define WORLD_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define WORLD_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef WORLD_NO_EXPORT
#    define WORLD_NO_EXPORT 
#  endif
#endif

#ifndef WORLD_DEPRECATED
#  define WORLD_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef WORLD_DEPRECATED_EXPORT
#  define WORLD_DEPRECATED_EXPORT WORLD_EXPORT WORLD_DEPRECATED
#endif

#ifndef WORLD_DEPRECATED_NO_EXPORT
#  define WORLD_DEPRECATED_NO_EXPORT WORLD_NO_EXPORT WORLD_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef WORLD_NO_DEPRECATED
#    define WORLD_NO_DEPRECATED
#  endif
#endif

#endif /* WORLD_EXPORT_H */
