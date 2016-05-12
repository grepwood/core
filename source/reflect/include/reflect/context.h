/*
 *	Reflect Library by Parra Studios
 *	Copyright (C) 2016 Vicente Eduardo Ferrer Garcia <vic798@gmail.com>
 *
 *	A library for provide reflection and metadata representation.
 *
 */

#ifndef REFLECT_CONTEXT_H
#define REFLECT_CONTEXT_H 1

#include <reflect/reflect_api.h>

#include <reflect/scope.h>

#ifdef __cplusplus
extern "C" {
#endif

struct context_type;

typedef struct context_type * context;

REFLECT_API context context_create(char * name);

REFLECT_API scope context_scope(context ctx);

REFLECT_API void context_destroy(context ctx);

#ifdef __cplusplus
}
#endif

#endif /* REFLECT_CONTEXT_H */
