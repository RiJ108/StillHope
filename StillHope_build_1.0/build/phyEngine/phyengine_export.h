
#ifndef PHYENGINE_EXPORT_H
#define PHYENGINE_EXPORT_H

#ifdef PHYENGINE_STATIC_DEFINE
#  define PHYENGINE_EXPORT
#  define PHYENGINE_NO_EXPORT
#else
#  ifndef PHYENGINE_EXPORT
#    ifdef phyEngine_EXPORTS
        /* We are building this library */
#      define PHYENGINE_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define PHYENGINE_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef PHYENGINE_NO_EXPORT
#    define PHYENGINE_NO_EXPORT 
#  endif
#endif

#ifndef PHYENGINE_DEPRECATED
#  define PHYENGINE_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef PHYENGINE_DEPRECATED_EXPORT
#  define PHYENGINE_DEPRECATED_EXPORT PHYENGINE_EXPORT PHYENGINE_DEPRECATED
#endif

#ifndef PHYENGINE_DEPRECATED_NO_EXPORT
#  define PHYENGINE_DEPRECATED_NO_EXPORT PHYENGINE_NO_EXPORT PHYENGINE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef PHYENGINE_NO_DEPRECATED
#    define PHYENGINE_NO_DEPRECATED
#  endif
#endif

#endif /* PHYENGINE_EXPORT_H */
