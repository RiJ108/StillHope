
#ifndef ENTITYLIST_EXPORT_H
#define ENTITYLIST_EXPORT_H

#ifdef ENTITYLIST_STATIC_DEFINE
#  define ENTITYLIST_EXPORT
#  define ENTITYLIST_NO_EXPORT
#else
#  ifndef ENTITYLIST_EXPORT
#    ifdef entityList_EXPORTS
        /* We are building this library */
#      define ENTITYLIST_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define ENTITYLIST_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef ENTITYLIST_NO_EXPORT
#    define ENTITYLIST_NO_EXPORT 
#  endif
#endif

#ifndef ENTITYLIST_DEPRECATED
#  define ENTITYLIST_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef ENTITYLIST_DEPRECATED_EXPORT
#  define ENTITYLIST_DEPRECATED_EXPORT ENTITYLIST_EXPORT ENTITYLIST_DEPRECATED
#endif

#ifndef ENTITYLIST_DEPRECATED_NO_EXPORT
#  define ENTITYLIST_DEPRECATED_NO_EXPORT ENTITYLIST_NO_EXPORT ENTITYLIST_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef ENTITYLIST_NO_DEPRECATED
#    define ENTITYLIST_NO_DEPRECATED
#  endif
#endif

#endif /* ENTITYLIST_EXPORT_H */
