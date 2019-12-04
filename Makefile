all: buf dos

%: %.c
	gcc -g $< -o $@
