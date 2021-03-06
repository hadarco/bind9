#include <stdio.h>
#include <openssl/opensslv.h>

int main() {
        if (OPENSSL_VERSION_NUMBER >= 0x10101000L) {
                return (0);
        }
        printf("\n\nFound   OPENSSL_VERSION_NUMBER %#010x\n",
               OPENSSL_VERSION_NUMBER);
        printf("Require OPENSSL_VERSION_NUMBER 0x10101000L or greater (1.1.1)\n\n");
        return (1);
}
