/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef APP_DEPENDENCY_BAKE_CONFIG_H
#define APP_DEPENDENCY_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <pkg_helloworld>

/* Headers of private dependencies */
#ifdef APP_DEPENDENCY_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#if APP_DEPENDENCY_IMPL && defined _MSC_VER
#define APP_DEPENDENCY_EXPORT __declspec(dllexport)
#elif APP_DEPENDENCY_IMPL
#define APP_DEPENDENCY_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
#define APP_DEPENDENCY_EXPORT __declspec(dllimport)
#else
#define APP_DEPENDENCY_EXPORT
#endif

#endif

