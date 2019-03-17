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

#ifndef ECS_GRAPHICS_BAKE_CONFIG_H
#define ECS_GRAPHICS_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs>
#include <flecs.components.transform>
#include <flecs.components.geometry>
#include <flecs.components.graphics>
#include <flecs.components.input>
#include <flecs.systems.sdl2>

/* Headers of private dependencies */
#ifdef ECS_GRAPHICS_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#if ECS_GRAPHICS_IMPL && defined _MSC_VER
#define ECS_GRAPHICS_EXPORT __declspec(dllexport)
#elif ECS_GRAPHICS_IMPL
#define ECS_GRAPHICS_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
#define ECS_GRAPHICS_EXPORT __declspec(dllimport)
#else
#define ECS_GRAPHICS_EXPORT
#endif

#endif

