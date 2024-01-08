#include "commonUI.h"

#include <sys/ioctl.h>
#include <unistd.h>

CommonUI::CommonUI() { terminal_width = getTerminalWidth(); }

int CommonUI::getTerminalWidth()
{
    struct winsize size;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
    return size.ws_col;
}
