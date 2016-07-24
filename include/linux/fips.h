#ifndef _FIPS_H
#define _FIPS_H

#ifdef CONFIG_CRYPTO_FIPS
extern int fips_enabled;
extern int fips_panic;
extern int fips_allow_others;
extern void set_fips_error(void);
extern int fips_error(void);
extern int get_cc_mode_state(void);
#else
#define fips_enabled 0
#define fips_panic 0
#define fips_allow_others 1

static inline void set_fips_error(void)
{
	return;
}
static inline int fips_error(void)
{
	return 0;
}
#endif

#endif
