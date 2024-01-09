#include "commonUI.h"

CommonUI::CommonUI() { terminal_width = getTerminalWidth(); }
CommonUI::CommonUI(int user_set_width) { terminal_width = user_set_width; }

int CommonUI::getTerminalWidth()
{
    int            current_width;
    struct winsize size;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
    if (size.ws_col > TERMINAL_WIDTH_MIN) {
        current_width = static_cast<int>(size.ws_col * TERMINAL_WIDTH_SCALE);
    } else {
        current_width = size.ws_col;
    }
    return current_width;
}

void CommonUI::printDiv() const
{
    std::cout << std::endl;

    for (int i = 0; i < terminal_width; i++) {
        std::cout << '=';
    }

    std::cout << std::endl;
}

void CommonUI::printCenter(std::string contents) const
{
    int left_padding = (terminal_width / 2) - (contents.size() / 2);

    for (int pad = 0; pad < left_padding; pad++) {
        std::cout << ' ';
    }

    std::cout << contents << std::endl;
}
