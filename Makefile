#Makefile
TGT = rntxt
OBJS = rn.o
LIBS = "" 

.SUFFIXES: .cpp .o

$(TGT): $(OBJS)
	g++ -o $(TGT) $(LIBS) $^

.cpp.o:
	g++ -c $<

.PHONY: clean
clean:
	$(RM) $(TGT) $(OBJS)
