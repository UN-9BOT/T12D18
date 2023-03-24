#include "print_module.h"

#include "documentation_module.h"
char print_char(char ch) { return putchar(ch); }

void print_log(char (*print)(char), char *message) {
    time_t tme = time(NULL);
    char *log = Log_prefix;
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

void printModule(int *mask, int count, ...) {
    va_list target;
    va_start(target, count);
    for (int i = 0; i < count; i++) {
        char *aval = (mask[i] == 1) ? "available" : "unavailable";
        printf("%d. %-15s : %s\n", i + 1, va_arg(target, char *), aval);
    }
    va_end(target);
}
