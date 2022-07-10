#ifndef ASSERT_H__
#define ASSERT_H__

#if NDEBUG
  #define assert(ignore) ((void)0)
#else
  #define assert(expr) \
      if (0 == expr) {fprintf(stderr, "Assertion failed: expr, function %s, file %s, line %d.", __func__, __FILE__, __LINE__);abort();}
#endif
#define static_assert(expr,str) __Static_assert(expr,str)

#endif
