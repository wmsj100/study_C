#
# MakeFile
# pi, 2019-05-06 21:11
#
CFILES=$(wildcard *.c)
MAKE_FILES=$(patsubst %.c, %.o, $(CFILES))
CLFILES=$(patsubst %.c, %, $(CFILES))

test:
	@echo $(CFILES)
	@echo $(MAKE_FILES)
	@echo $(CLFILES)

all:$(CFILES)
$(CFILES):$(MAKE_FILES)
	@echo "gcc -c $< -o $@"

clean:$(CLFILES)
$(CLFILES):
	echo "rm -f ../$@.o"
