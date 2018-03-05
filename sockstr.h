/*
 * smtpc - SMTP / LMTP client
 */

#include <stdarg.h>
#include <sys/types.h>
#include <unistd.h>

#define SOCKSTR_ERRSIZE (128)
#define SOCKSTR_BUFSIZE (8192)

typedef struct {
    char *nodename;
    char *servname;
    char *path;
    int timeout;

    int _sock;
    int _errnum;
    char _errstr[SOCKSTR_ERRSIZE];
    ssize_t _bufcnt;
    char *_bufptr;
    char _buf[SOCKSTR_BUFSIZE];
} sockstr_t;

extern sockstr_t *sockstr_new(char *, char *, char *);
extern void sockstr_destroy(sockstr_t *);
extern char *sockstr_errstr(sockstr_t *);
extern int sockstr_client_connect(sockstr_t *);
extern ssize_t sockstr_getline(sockstr_t *, char **, size_t *, int);
extern ssize_t sockstr_getstatus(sockstr_t *, char **, size_t *);
extern ssize_t sockstr_vprintf(sockstr_t *, const char *, va_list);
extern ssize_t sockstr_printf(sockstr_t *, const char *, ...);
extern ssize_t sockstr_putdata(sockstr_t *, void *, size_t, char *, int,
			       int);
