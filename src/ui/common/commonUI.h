#ifndef COMMON_UI_H_
#define COMMON_UI_H_

/* Objects */

class CommonUI
{
private:
    int        terminal_width;
    static int getTerminalWidth();

public:
    CommonUI();
    int getTerminalWidthPub() const { return terminal_width; }
};

#endif
