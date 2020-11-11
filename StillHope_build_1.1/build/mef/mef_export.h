
#ifndef MEF_EXPORT_H
#define MEF_EXPORT_H

#ifdef MEF_STATIC_DEFINE
#  define MEF_EXPORT
#  define MEF_NO_EXPORT
#else
#  ifndef MEF_EXPORT
#    ifdef mef_EXPORTS
        /* We are building this library */
#      define MEF_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MEF_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MEF_NO_EXPORT
#    define MEF_NO_EXPORT 
#  endif
#endif

#ifndef MEF_DEPRECATED
#  define MEF_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef MEF_DEPRECATED_EXPORT
#  define MEF_DEPRECATED_EXPORT MEF_EXPORT MEF_DEPRECATED
#endif

#ifndef MEF_DEPRECATED_NO_EXPORT
#  define MEF_DEPRECATED_NO_EXPORT MEF_NO_EXPORT MEF_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef MEF_NO_DEPRECATED
#    define MEF_NO_DEPRECATED
#  endif
#endif

#endif /* MEF_EXPORT_H */
