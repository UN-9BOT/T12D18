#include "documentation_module.h"
#include "print_module.h"

int main() {
#ifdef PRNT
    print_log(print_char, Module_load_success_message);
#endif
#ifdef DCMNT
    int *availability_mask = check_available_documentation_module(validate, Documents_count, Documents);
    printModule(availability_mask, Documents_count, Documents);
    free(availability_mask);
#endif
    return 0;
}
