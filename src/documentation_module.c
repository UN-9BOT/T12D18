#include "documentation_module.h"

int validate(char* data) {
    int validation_result = !strcmp(data, Available_document);
    return validation_result;
}

int* check_available_documentation_module(int (*validate)(char*), int document_count, ...) {
    int* result = (int*)malloc(document_count * sizeof(int));
    va_list target;
    va_start(target, document_count);
    int c = 0;
    /* char* trash; */
    for (int i = 0; i < document_count; i++) {
        result[c++] = validate(va_arg(target, char*));
    }
    va_end(target);
    return (result);
}
