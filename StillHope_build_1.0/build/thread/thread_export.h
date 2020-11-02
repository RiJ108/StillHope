
#ifndef THREAD_EXPORT_H
#define THREAD_EXPORT_H

#ifdef THREAD_STATIC_DEFINE
#  define THREAD_EXPORT
#  define THREAD_NO_EXPORT
#else
#  ifndef THREAD_EXPORT
#    ifdef thread_EXPORTS
        /* We are building this library */
#      define THREAD_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define THREAD_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef THREAD_NO_EXPORT
#    define THREAD_NO_EXPORT 
#  endif
#endif

#ifndef THREAD_DEPRECATED
#  define THREAD_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef THREAD_DEPRECATED_EXPORT
#  define THREAD_DEPRECATED_EXPORT THREAD_EXPORT THREAD_DEPRECATED
#endif

#ifndef THREAD_DEPRECATED_NO_EXPORT
#  define THREAD_DEPRECATED_NO_EXPORT THREAD_NO_EXPORT THREAD_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef THREAD_NO_DEPRECATED
#    define THREAD_NO_DEPRECATED
#  endif
#endif

#endif /* THREAD_EXPORT_H */
