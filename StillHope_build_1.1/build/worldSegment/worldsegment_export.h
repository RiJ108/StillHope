
#ifndef WORLDSEGMENT_EXPORT_H
#define WORLDSEGMENT_EXPORT_H

#ifdef WORLDSEGMENT_STATIC_DEFINE
#  define WORLDSEGMENT_EXPORT
#  define WORLDSEGMENT_NO_EXPORT
#else
#  ifndef WORLDSEGMENT_EXPORT
#    ifdef worldSegment_EXPORTS
        /* We are building this library */
#      define WORLDSEGMENT_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define WORLDSEGMENT_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef WORLDSEGMENT_NO_EXPORT
#    define WORLDSEGMENT_NO_EXPORT 
#  endif
#endif

#ifndef WORLDSEGMENT_DEPRECATED
#  define WORLDSEGMENT_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef WORLDSEGMENT_DEPRECATED_EXPORT
#  define WORLDSEGMENT_DEPRECATED_EXPORT WORLDSEGMENT_EXPORT WORLDSEGMENT_DEPRECATED
#endif

#ifndef WORLDSEGMENT_DEPRECATED_NO_EXPORT
#  define WORLDSEGMENT_DEPRECATED_NO_EXPORT WORLDSEGMENT_NO_EXPORT WORLDSEGMENT_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef WORLDSEGMENT_NO_DEPRECATED
#    define WORLDSEGMENT_NO_DEPRECATED
#  endif
#endif

#endif /* WORLDSEGMENT_EXPORT_H */
