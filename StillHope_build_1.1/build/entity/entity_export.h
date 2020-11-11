
#ifndef ENTITY_EXPORT_H
#define ENTITY_EXPORT_H

#ifdef ENTITY_STATIC_DEFINE
#  define ENTITY_EXPORT
#  define ENTITY_NO_EXPORT
#else
#  ifndef ENTITY_EXPORT
#    ifdef entity_EXPORTS
        /* We are building this library */
#      define ENTITY_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define ENTITY_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef ENTITY_NO_EXPORT
#    define ENTITY_NO_EXPORT 
#  endif
#endif

#ifndef ENTITY_DEPRECATED
#  define ENTITY_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef ENTITY_DEPRECATED_EXPORT
#  define ENTITY_DEPRECATED_EXPORT ENTITY_EXPORT ENTITY_DEPRECATED
#endif

#ifndef ENTITY_DEPRECATED_NO_EXPORT
#  define ENTITY_DEPRECATED_NO_EXPORT ENTITY_NO_EXPORT ENTITY_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef ENTITY_NO_DEPRECATED
#    define ENTITY_NO_DEPRECATED
#  endif
#endif

#endif /* ENTITY_EXPORT_H */
