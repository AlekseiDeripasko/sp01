#include <unistd.h>

void mx_matrix_voice(void)
{
    write(1, "\7", 1);
}

