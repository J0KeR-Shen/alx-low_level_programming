#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the message "and that piece of art is useful"
 * to the standard error, followed by a new line, using the write system call.
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
size_t length = strlen(message);
ssize_t written = write(STDERR_FILENO, message, length);

if (written == -1) {
perror("Error");
exit(errno);
}

return (1);
}

