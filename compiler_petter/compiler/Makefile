CXX = g++
CXXFLAGS = -std=c++11 -Wall

LEX = flex
YACC = /usr/local/opt/bison/bin/bison


LEX_SRC = lexer.flex
YACC_SRC = parser.yy

LEX_OUT = lex.yy.cc
YACC_OUT_CC = parser.tab.cc
YACC_OUT_HH = parser.tab.hh

OBJS = $(LEX_OUT:.cc=.o) $(YACC_OUT_CC:.cc=.o) main.o
EXEC = Mjcompiler

all: $(EXEC)

$(LEX_OUT): $(LEX_SRC) $(YACC_OUT_HH)
	$(LEX) -o $@ $<

$(YACC_OUT_CC) $(YACC_OUT_HH): $(YACC_SRC)
	$(YACC) -d -o $(YACC_OUT_CC) $(YACC_SRC)

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

main.o: main.cc
	$(CXX) $(CXXFLAGS) -c main.cc -o main.o

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)
	chmod +x $(EXEC)

clean:
	rm -f $(EXEC) $(LEX_OUT) $(YACC_OUT_CC) $(YACC_OUT_HH) *.o tree.dot tree.pdf

tree: tree.dot
	dot -Tpdf tree.dot -o tree.pdf
