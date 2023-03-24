GC=gcc -Wall -Werror -Wextra

all: print_module
print_module:
	$(GC) main_module_entry_point.c print_module.c -o ../build/Quest_1

documentation_module:
	$(GC) main_module_entry_point.c documentation_module.c print_module.c -o ../build/Quest_2

clean:
	rm -rf ../build/*
