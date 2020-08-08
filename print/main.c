#include "../includes/index.h"

int main(void)
{
    console print = init_print();

    print.error("Test of message with print.error.\n");
    print.warn("An error occured. Please try again later.\n");
    print.logger("Test of message with print.logger.\n");
    return (0);
}
