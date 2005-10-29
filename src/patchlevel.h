#ifndef PATCHLEVEL_H__
#define PATCHLEVEL_H__ 1

/*--------------------------------------------------------------------------
 * Various version numbers and strings, collected here so that PRCS has
 * to change only one file.
 *--------------------------------------------------------------------------
 */

/* $Format: "#if $ReleaseMinor$ % 2 == 0"$ */
#if 3 % 2 == 0
#    define IS_STABLE_BRANCH 1
#else
#    define IS_DEV_BRANCH 1
#endif

/* $Format: "#define IS_DEVELOPMENT (!strcmp(\"$ReleaseType$\", \"dev\"))"$ */
#define IS_DEVELOPMENT (!strcmp("dev", "dev"))

/* $Format: "#define IS_MAINTENANCE (!strcmp(\"$ReleaseType$\", \"maint\"))"$ */
#define IS_MAINTENANCE (!strcmp("dev", "maint"))

/* $Format: "#define RELEASE_TYPE \"$ReleaseType$\""$ */
#define RELEASE_TYPE "dev"

/* $Format: "#define RELEASE_DATE \"$ProjectDate$\""$ */
#define RELEASE_DATE "Fri, 13 May 2005 23:38:38 -0600"

/* $Format: "#define PROJ_VERSION \"$ProjectVersion$\""$ */
#define PROJ_VERSION "3-3.701"

/* $Format: "#define DRIVER_VERSION \"$ReleaseVersion$\""$ */
#define DRIVER_VERSION "3.3.701"

/* $Format: "#define VERSION_MAJOR \"$ReleaseMajor$\""$ */
#define VERSION_MAJOR "3"

/* $Format: "#define VERSION_MINOR \"$ReleaseMinor$\""$ */
#define VERSION_MINOR "3"

/* $Format: "#define VERSION_MICRO \"$ReleaseMicro$\""$ */
#define VERSION_MICRO "701"

/* $Format: "#define LOCAL_LEVEL \"\""$ */
#define LOCAL_LEVEL ""

/* TODO: Add something like the perl local patchlevel management. */
/* TODO: Add LPC defines for the various version number parts */

#endif /* PATCHLEVEL_H__ */

