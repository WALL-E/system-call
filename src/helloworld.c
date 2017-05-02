#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *message = "hello, world\n";
    size_t len = strlen(message);

    write(1, message, len);

    _exit(7);
}
