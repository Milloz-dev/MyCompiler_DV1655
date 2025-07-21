#ifndef NLEXER_H
#define NLEXER_H

#if !defined(yyFlexLexerOnce)
#include <FlexLexer.h>
#endif

#include "parser.tab.hh"  // Include the parser header

class NLexer : public yyFlexLexer
{
public:
    NLexer(std::istream *in) : yyFlexLexer(in) {}  // Constructor to accept input stream
    virtual yy::parser::symbol_type yylex();       // Ensure it returns correct type
};

#endif  // NLEXER_H
