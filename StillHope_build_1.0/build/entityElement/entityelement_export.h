
#ifndef ENTITYELEMENT_EXPORT_H
#define ENTITYELEMENT_EXPORT_H

#ifdef ENTITYELEMENT_STATIC_DEFINE
#  define ENTITYELEMENT_EXPORT
#  define ENTITYELEMENT_NO_EXPORT
#else
#  ifndef ENTITYELEMENT_EXPORT
#    ifdef entityElement_EXPORTS
        /* We are building this library */
#      define ENTITYELEMENT_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define ENTITYELEMENT_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef ENTITYELEMENT_NO_EXPORT
#    define ENTITYELEMENT_NO_EXPORT 
#  endif
#endif

#ifndef ENTITYELEMENT_DEPRECATED
#  define ENTITYELEMENT_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef ENTITYELEMENT_DEPRECATED_EXPORT
#  define ENTITYELEMENT_DEPRECATED_EXPORT ENTITYELEMENT_EXPORT ENTITYELEMENT_DEPRECATED
#endif

#ifndef ENTITYELEMENT_DEPRECATED_NO_EXPORT
#  define ENTITYELEMENT_DEPRECATED_NO_EXPORT ENTITYELEMENT_NO_EXPORT ENTITYELEMENT_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef ENTITYELEMENT_NO_DEPRECATED
#    define ENTITYELEMENT_NO_DEPRECATED
#  endif
#endif

#endif /* ENTITYELEMENT_EXPORT_H */
