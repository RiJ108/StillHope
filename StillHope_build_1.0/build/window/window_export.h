
#ifndef WINDOW_EXPORT_H
#define WINDOW_EXPORT_H

#ifdef WINDOW_STATIC_DEFINE
#  define WINDOW_EXPORT
#  define WINDOW_NO_EXPORT
#else
#  ifndef WINDOW_EXPORT
#    ifdef window_EXPORTS
        /* We are building this library */
#      define WINDOW_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define WINDOW_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef WINDOW_NO_EXPORT
#    define WINDOW_NO_EXPORT 
#  endif
#endif

#ifndef WINDOW_DEPRECATED
#  define WINDOW_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef WINDOW_DEPRECATED_EXPORT
#  define WINDOW_DEPRECATED_EXPORT WINDOW_EXPORT WINDOW_DEPRECATED
#endif

#ifndef WINDOW_DEPRECATED_NO_EXPORT
#  define WINDOW_DEPRECATED_NO_EXPORT WINDOW_NO_EXPORT WINDOW_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef WINDOW_NO_DEPRECATED
#    define WINDOW_NO_DEPRECATED
#  endif
#endif

#endif /* WINDOW_EXPORT_H */
