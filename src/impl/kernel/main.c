#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_LIGHT_GREEN, PRINT_COLOR_BLACK);
    print_str("\n\n\n\n\n\n\n");
    print_str("                              Welcome to our 64-bit kernel!\n");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("                                Developed by:\n");
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("                                    -Avinesh Pratap Singh\n");
    print_str("                                    -Rahul Agrawal\n");
    print_str("                                    -Brijesh Kumar\n");
    print_str("                                    -Ritik Gupta\n");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);

    print_str("                                Mentored by:\n");
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);

    print_str("                                    -Ms. Diksha Rangwani\n");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);

    print_str("                                Course Instructor:\n");
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);

    print_str("                                    -Dr. Hari Om\n\n");
    print_set_color(PRINT_COLOR_LIGHT_CYAN, PRINT_COLOR_BLACK);
    print_str("                                   IIT(ISM) DHANBAD");
}
