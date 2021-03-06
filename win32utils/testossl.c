#include <openssl/ssl.h>

int
main(void)
{
        SSL_CTX *ctx = SSL_CTX_new(SSLv23_method());
        SSL_CTX_free(ctx);
        return(0);
}
