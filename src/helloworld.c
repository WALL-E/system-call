#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>

void sigroutine(int dunno) {
    _exit(1);
}

int main(int argc, char *argv[])
{
    char *message = "hello, world\n";
    size_t len = strlen(message);
    char buf;

    while(1) {
        signal(SIGINT, sigroutine);
        write(1, message, len);

        read(1, &buf, 1);
    }

    _exit(0);
}
