#ifndef COMMON_UI_H_
#define COMMON_UI_H_

/* Include Files */
#include <sys/ioctl.h>
#include <unistd.h>

#include <iostream>

/* Defines */

#define TERMINAL_WIDTH_SCALE 0.6
#define TERMINAL_WIDTH_MIN   50

/* Objects */

class CommonUI
{
private:
    int        terminal_width;
    static int getTerminalWidth();

public:
    CommonUI();
    explicit CommonUI(int user_set_width);
    void printDiv() const;
};

#endif
