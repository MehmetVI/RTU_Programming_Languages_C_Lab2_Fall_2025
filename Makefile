CC      ?= gcc
CFLAGS  ?= -std=c11 -Wall -Wextra -Wpedantic -O2
OUTDIR  ?= lab2

all: lab2_1 lab2_2 lab2_3

$(OUTDIR):
	mkdir -p $(OUTDIR)

lab2_1: | $(OUTDIR)
	$(CC) $(CFLAGS) src/lab2_1.c -o $(OUTDIR)/lab2_1

lab2_2: | $(OUTDIR)
	$(CC) $(CFLAGS) src/lab2_2.c -o $(OUTDIR)/lab2_2

lab2_3: | $(OUTDIR)
	$(CC) $(CFLAGS) src/lab2_3.c -o $(OUTDIR)/lab2_3

rebuild: clean all

clean:
	rm -f $(OUTDIR)/*

.PHONY: all rebuild clean
