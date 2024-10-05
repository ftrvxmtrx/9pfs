void	*emalloc(size_t) __attribute__((malloc, returns_nonnull));
void	*erealloc(void*, size_t) __attribute__((returns_nonnull));
void	*ecalloc(size_t, size_t) __attribute__((malloc, returns_nonnull));
char	*estrdup(const char *) __attribute__((malloc, returns_nonnull));
void	dprint(char*, ...);
