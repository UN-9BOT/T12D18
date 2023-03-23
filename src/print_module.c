#include "print_module.h"
char print_char(char ch) { return putchar(ch); }

void print_log(char (*print)(char), char* message) {
    time_t tme = time(NULL);
    char* log = Log_prefix;
    char res[100];
    strftime(res, 100, "%H:%M:%S", localtime(&tme));
    for (int i = 0; *(log + i) != '\0'; i++) {
        print(*(log + i));
    }
    print(' ');
    for (int i = 0; *(res + i) != '\0'; i++) {
        print(*(res + i));
    }
    print(' ');
    for (int i = 0; *(message + i) != '\0'; i++) {
        print(*(message + i));
    }
}
