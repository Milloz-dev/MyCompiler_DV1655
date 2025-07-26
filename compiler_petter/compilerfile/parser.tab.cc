// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.





#include "parser.tab.hh"


// Unqualified %code blocks.
#line 17 "parser.yy"

  #define YY_DECL yy::parser::symbol_type yylex()
  YY_DECL;

  Node* root;
  extern int yylineno;

#line 54 "parser.tab.cc"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif



// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 127 "parser.tab.cc"

  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr)
#else

#endif
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_root: // root
      case symbol_kind::S_Goal: // Goal
      case symbol_kind::S_MainClass: // MainClass
      case symbol_kind::S_ClassDeclarations: // ClassDeclarations
      case symbol_kind::S_ClassDeclaration: // ClassDeclaration
      case symbol_kind::S_VarDeclarations: // VarDeclarations
      case symbol_kind::S_VarDeclaration: // VarDeclaration
      case symbol_kind::S_MethodDeclarations: // MethodDeclarations
      case symbol_kind::S_MethodDeclaration: // MethodDeclaration
      case symbol_kind::S_FormalParameters: // FormalParameters
      case symbol_kind::S_FormalParameterList: // FormalParameterList
      case symbol_kind::S_FormalParameter: // FormalParameter
      case symbol_kind::S_BlockStatements: // BlockStatements
      case symbol_kind::S_BlockStatement: // BlockStatement
      case symbol_kind::S_StatementList: // StatementList
      case symbol_kind::S_Statement: // Statement
      case symbol_kind::S_Type: // Type
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_factor: // factor
        value.YY_MOVE_OR_COPY< Node* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.YY_MOVE_OR_COPY< std::string* > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s)
  {
    switch (that.kind ())
    {
      case symbol_kind::S_root: // root
      case symbol_kind::S_Goal: // Goal
      case symbol_kind::S_MainClass: // MainClass
      case symbol_kind::S_ClassDeclarations: // ClassDeclarations
      case symbol_kind::S_ClassDeclaration: // ClassDeclaration
      case symbol_kind::S_VarDeclarations: // VarDeclarations
      case symbol_kind::S_VarDeclaration: // VarDeclaration
      case symbol_kind::S_MethodDeclarations: // MethodDeclarations
      case symbol_kind::S_MethodDeclaration: // MethodDeclaration
      case symbol_kind::S_FormalParameters: // FormalParameters
      case symbol_kind::S_FormalParameterList: // FormalParameterList
      case symbol_kind::S_FormalParameter: // FormalParameter
      case symbol_kind::S_BlockStatements: // BlockStatements
      case symbol_kind::S_BlockStatement: // BlockStatement
      case symbol_kind::S_StatementList: // StatementList
      case symbol_kind::S_Statement: // Statement
      case symbol_kind::S_Type: // Type
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_factor: // factor
        value.move< Node* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.move< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.move< std::string* > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_root: // root
      case symbol_kind::S_Goal: // Goal
      case symbol_kind::S_MainClass: // MainClass
      case symbol_kind::S_ClassDeclarations: // ClassDeclarations
      case symbol_kind::S_ClassDeclaration: // ClassDeclaration
      case symbol_kind::S_VarDeclarations: // VarDeclarations
      case symbol_kind::S_VarDeclaration: // VarDeclaration
      case symbol_kind::S_MethodDeclarations: // MethodDeclarations
      case symbol_kind::S_MethodDeclaration: // MethodDeclaration
      case symbol_kind::S_FormalParameters: // FormalParameters
      case symbol_kind::S_FormalParameterList: // FormalParameterList
      case symbol_kind::S_FormalParameter: // FormalParameter
      case symbol_kind::S_BlockStatements: // BlockStatements
      case symbol_kind::S_BlockStatement: // BlockStatement
      case symbol_kind::S_StatementList: // StatementList
      case symbol_kind::S_Statement: // Statement
      case symbol_kind::S_Type: // Type
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_factor: // factor
        value.copy< Node* > (that.value);
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.copy< int > (that.value);
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.copy< std::string* > (that.value);
        break;

      default:
        break;
    }

    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_root: // root
      case symbol_kind::S_Goal: // Goal
      case symbol_kind::S_MainClass: // MainClass
      case symbol_kind::S_ClassDeclarations: // ClassDeclarations
      case symbol_kind::S_ClassDeclaration: // ClassDeclaration
      case symbol_kind::S_VarDeclarations: // VarDeclarations
      case symbol_kind::S_VarDeclaration: // VarDeclaration
      case symbol_kind::S_MethodDeclarations: // MethodDeclarations
      case symbol_kind::S_MethodDeclaration: // MethodDeclaration
      case symbol_kind::S_FormalParameters: // FormalParameters
      case symbol_kind::S_FormalParameterList: // FormalParameterList
      case symbol_kind::S_FormalParameter: // FormalParameter
      case symbol_kind::S_BlockStatements: // BlockStatements
      case symbol_kind::S_BlockStatement: // BlockStatement
      case symbol_kind::S_StatementList: // StatementList
      case symbol_kind::S_Statement: // Statement
      case symbol_kind::S_Type: // Type
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_factor: // factor
        value.move< Node* > (that.value);
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.move< int > (that.value);
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.move< std::string* > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " (";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_root: // root
      case symbol_kind::S_Goal: // Goal
      case symbol_kind::S_MainClass: // MainClass
      case symbol_kind::S_ClassDeclarations: // ClassDeclarations
      case symbol_kind::S_ClassDeclaration: // ClassDeclaration
      case symbol_kind::S_VarDeclarations: // VarDeclarations
      case symbol_kind::S_VarDeclaration: // VarDeclaration
      case symbol_kind::S_MethodDeclarations: // MethodDeclarations
      case symbol_kind::S_MethodDeclaration: // MethodDeclaration
      case symbol_kind::S_FormalParameters: // FormalParameters
      case symbol_kind::S_FormalParameterList: // FormalParameterList
      case symbol_kind::S_FormalParameter: // FormalParameter
      case symbol_kind::S_BlockStatements: // BlockStatements
      case symbol_kind::S_BlockStatement: // BlockStatement
      case symbol_kind::S_StatementList: // StatementList
      case symbol_kind::S_Statement: // Statement
      case symbol_kind::S_Type: // Type
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_factor: // factor
        yylhs.value.emplace< Node* > ();
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        yylhs.value.emplace< int > ();
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        yylhs.value.emplace< std::string* > ();
        break;

      default:
        break;
    }



      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // root: Goal
#line 63 "parser.yy"
         {
        root = yystack_[0].value.as < Node* > ();
    }
#line 660 "parser.tab.cc"
    break;

  case 3: // Goal: MainClass ClassDeclarations
#line 69 "parser.yy"
                                {
        yylhs.value.as < Node* > () = new Node("Goal", "", yylineno);
        yylhs.value.as < Node* > ()->children.push_back(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->children.push_back(yystack_[0].value.as < Node* > ());
    }
#line 670 "parser.tab.cc"
    break;

  case 4: // MainClass: PUBLIC CLASS IDENTIFIER LBRACE PUBLIC STATIC VOID MAIN LPAREN STRING LBRACK RBRACK IDENTIFIER RPAREN LBRACE StatementList RBRACE RBRACE
#line 77 "parser.yy"
                                                                                                                                            {
        yylhs.value.as < Node* > () = new Node("MainClass", *yystack_[15].value.as < std::string* > (), yylineno);
        yylhs.value.as < Node* > ()->children.push_back(yystack_[2].value.as < Node* > ()); // $16 is the StatementList
        delete yystack_[15].value.as < std::string* > ();  // class name (IDENTIFIER)
        delete yystack_[5].value.as < std::string* > (); // main method param name (IDENTIFIER) — not used in AST
    }
#line 681 "parser.tab.cc"
    break;

  case 5: // ClassDeclarations: %empty
#line 86 "parser.yy"
                {
        yylhs.value.as < Node* > () = new Node("ClassDeclarations", "", yylineno);
    }
#line 689 "parser.tab.cc"
    break;

  case 6: // ClassDeclarations: ClassDeclarations ClassDeclaration
#line 89 "parser.yy"
                                       {
        yylhs.value.as < Node* > () = yystack_[1].value.as < Node* > ();
        yylhs.value.as < Node* > ()->children.push_back(yystack_[0].value.as < Node* > ());
    }
#line 698 "parser.tab.cc"
    break;

  case 7: // ClassDeclaration: CLASS IDENTIFIER LBRACE VarDeclarations MethodDeclarations RBRACE
#line 96 "parser.yy"
                                                                      {
        yylhs.value.as < Node* > () = new Node("ClassDeclaration", *yystack_[4].value.as < std::string* > (), yylineno);
        yylhs.value.as < Node* > ()->children.push_back(yystack_[2].value.as < Node* > ()); // var decls
        yylhs.value.as < Node* > ()->children.push_back(yystack_[1].value.as < Node* > ()); // method decls
        delete yystack_[4].value.as < std::string* > ();
    }
#line 709 "parser.tab.cc"
    break;

  case 8: // VarDeclarations: %empty
#line 105 "parser.yy"
                {
        yylhs.value.as < Node* > () = new Node("VarDeclarations", "", yylineno);
    }
#line 717 "parser.tab.cc"
    break;

  case 9: // VarDeclarations: VarDeclarations VarDeclaration
#line 108 "parser.yy"
                                   {
        yylhs.value.as < Node* > () = yystack_[1].value.as < Node* > ();
        yylhs.value.as < Node* > ()->children.push_back(yystack_[0].value.as < Node* > ());
    }
#line 726 "parser.tab.cc"
    break;

  case 10: // VarDeclaration: Type IDENTIFIER SEMICOLON
#line 115 "parser.yy"
                              {
        yylhs.value.as < Node* > () = new Node("VarDeclaration", *yystack_[1].value.as < std::string* > (), yylineno);
        yylhs.value.as < Node* > ()->children.push_back(yystack_[2].value.as < Node* > ()); // Type
        delete yystack_[1].value.as < std::string* > ();
    }
#line 736 "parser.tab.cc"
    break;

  case 11: // MethodDeclarations: %empty
#line 123 "parser.yy"
                {
        yylhs.value.as < Node* > () = new Node("MethodDeclarations", "", yylineno);
    }
#line 744 "parser.tab.cc"
    break;

  case 12: // MethodDeclarations: MethodDeclarations MethodDeclaration
#line 126 "parser.yy"
                                         {
        yylhs.value.as < Node* > () = yystack_[1].value.as < Node* > ();
        yylhs.value.as < Node* > ()->children.push_back(yystack_[0].value.as < Node* > ());
    }
#line 753 "parser.tab.cc"
    break;

  case 13: // MethodDeclaration: PUBLIC Type IDENTIFIER LPAREN FormalParameters RPAREN LBRACE BlockStatements RETURN expression SEMICOLON RBRACE
#line 133 "parser.yy"
                                                                                                                    {
        yylhs.value.as < Node* > () = new Node("MethodDeclaration", *yystack_[9].value.as < std::string* > (), yylineno);
        yylhs.value.as < Node* > ()->children.push_back(yystack_[10].value.as < Node* > ()); // return type
        yylhs.value.as < Node* > ()->children.push_back(yystack_[7].value.as < Node* > ()); // parameters
        yylhs.value.as < Node* > ()->children.push_back(yystack_[4].value.as < Node* > ()); // block statements
        yylhs.value.as < Node* > ()->children.push_back(yystack_[2].value.as < Node* > ()); // return expression
        delete yystack_[9].value.as < std::string* > ();
    }
#line 766 "parser.tab.cc"
    break;

  case 14: // FormalParameters: %empty
#line 144 "parser.yy"
                {
        yylhs.value.as < Node* > () = new Node("FormalParameters", "", yylineno);
    }
#line 774 "parser.tab.cc"
    break;

  case 15: // FormalParameters: FormalParameterList
#line 147 "parser.yy"
                        {
        yylhs.value.as < Node* > () = yystack_[0].value.as < Node* > ();
    }
#line 782 "parser.tab.cc"
    break;

  case 16: // FormalParameterList: FormalParameter
#line 153 "parser.yy"
                    {
        yylhs.value.as < Node* > () = new Node("FormalParameterList", "", yylineno);
        yylhs.value.as < Node* > ()->children.push_back(yystack_[0].value.as < Node* > ());
    }
#line 791 "parser.tab.cc"
    break;

  case 17: // FormalParameterList: FormalParameterList COMMA FormalParameter
#line 157 "parser.yy"
                                              {
        yylhs.value.as < Node* > () = yystack_[2].value.as < Node* > ();
        yylhs.value.as < Node* > ()->children.push_back(yystack_[0].value.as < Node* > ());
    }
#line 800 "parser.tab.cc"
    break;

  case 18: // FormalParameter: Type IDENTIFIER
#line 164 "parser.yy"
                    {
        yylhs.value.as < Node* > () = new Node("FormalParameter", *yystack_[0].value.as < std::string* > (), yylineno);
        yylhs.value.as < Node* > ()->children.push_back(yystack_[1].value.as < Node* > ()); // type
        delete yystack_[0].value.as < std::string* > ();
    }
#line 810 "parser.tab.cc"
    break;

  case 19: // BlockStatements: %empty
#line 172 "parser.yy"
                {
        yylhs.value.as < Node* > () = new Node("BlockStatements", "", yylineno);
    }
#line 818 "parser.tab.cc"
    break;

  case 20: // BlockStatements: BlockStatements BlockStatement
#line 175 "parser.yy"
                                   {
        yylhs.value.as < Node* > () = yystack_[1].value.as < Node* > ();
        yylhs.value.as < Node* > ()->children.push_back(yystack_[0].value.as < Node* > ());
    }
#line 827 "parser.tab.cc"
    break;

  case 21: // BlockStatement: VarDeclaration
#line 182 "parser.yy"
                   {
        yylhs.value.as < Node* > () = yystack_[0].value.as < Node* > ();
    }
#line 835 "parser.tab.cc"
    break;

  case 22: // BlockStatement: Statement
#line 185 "parser.yy"
              {
        yylhs.value.as < Node* > () = yystack_[0].value.as < Node* > ();
    }
#line 843 "parser.tab.cc"
    break;

  case 23: // StatementList: %empty
#line 191 "parser.yy"
                {
        yylhs.value.as < Node* > () = new Node("StatementList", "", yylineno);
    }
#line 851 "parser.tab.cc"
    break;

  case 24: // StatementList: StatementList Statement
#line 194 "parser.yy"
                            {
        yylhs.value.as < Node* > () = yystack_[1].value.as < Node* > ();
        yylhs.value.as < Node* > ()->children.push_back(yystack_[0].value.as < Node* > ());
    }
#line 860 "parser.tab.cc"
    break;

  case 25: // Statement: SYSTEMDOTOUTDOTPRINTLN LPAREN expression RPAREN SEMICOLON
#line 201 "parser.yy"
                                                              {
        yylhs.value.as < Node* > () = new Node("PrintStatement", "", yylineno);
        yylhs.value.as < Node* > ()->children.push_back(yystack_[2].value.as < Node* > ());
    }
#line 869 "parser.tab.cc"
    break;

  case 26: // Statement: IDENTIFIER ASSIGN expression SEMICOLON
#line 205 "parser.yy"
                                           {
        yylhs.value.as < Node* > () = new Node("AssignStatement", *yystack_[3].value.as < std::string* > (), yylineno);
        yylhs.value.as < Node* > ()->children.push_back(yystack_[1].value.as < Node* > ());
        delete yystack_[3].value.as < std::string* > ();
    }
#line 879 "parser.tab.cc"
    break;

  case 27: // Statement: IF LPAREN expression RPAREN Statement ELSE Statement
#line 210 "parser.yy"
                                                         {
        yylhs.value.as < Node* > () = new Node("IfStatement", "", yylineno);
        yylhs.value.as < Node* > ()->children.push_back(yystack_[4].value.as < Node* > ()); // condition
        yylhs.value.as < Node* > ()->children.push_back(yystack_[2].value.as < Node* > ()); // true branch
        yylhs.value.as < Node* > ()->children.push_back(yystack_[0].value.as < Node* > ()); // false branch
    }
#line 890 "parser.tab.cc"
    break;

  case 28: // Statement: SEMICOLON
#line 216 "parser.yy"
              {
        yylhs.value.as < Node* > () = new Node("EmptyStatement", ";", yylineno);
    }
#line 898 "parser.tab.cc"
    break;

  case 29: // Type: INT LBRACK RBRACK
#line 222 "parser.yy"
                      {
        yylhs.value.as < Node* > () = new Node("Type", "int[]", yylineno);
    }
#line 906 "parser.tab.cc"
    break;

  case 30: // Type: BOOLEAN
#line 225 "parser.yy"
            {
        yylhs.value.as < Node* > () = new Node("Type", "boolean", yylineno);
    }
#line 914 "parser.tab.cc"
    break;

  case 31: // Type: INT
#line 228 "parser.yy"
        {
        yylhs.value.as < Node* > () = new Node("Type", "int", yylineno);
    }
#line 922 "parser.tab.cc"
    break;

  case 32: // Type: IDENTIFIER
#line 231 "parser.yy"
               {
        yylhs.value.as < Node* > () = new Node("Type", *yystack_[0].value.as < std::string* > (), yylineno);
        delete yystack_[0].value.as < std::string* > ();
    }
#line 931 "parser.tab.cc"
    break;

  case 33: // expression: expression PLUSOP expression
#line 238 "parser.yy"
                                 {
        yylhs.value.as < Node* > () = new Node("AddExpression", "", yylineno);
        yylhs.value.as < Node* > ()->children.push_back(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->children.push_back(yystack_[0].value.as < Node* > ());
    }
#line 941 "parser.tab.cc"
    break;

  case 34: // expression: expression MINUSOP expression
#line 243 "parser.yy"
                                  {
        yylhs.value.as < Node* > () = new Node("SubExpression", "", yylineno);
        yylhs.value.as < Node* > ()->children.push_back(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->children.push_back(yystack_[0].value.as < Node* > ());
    }
#line 951 "parser.tab.cc"
    break;

  case 35: // expression: expression MULTOP expression
#line 248 "parser.yy"
                                 {
        yylhs.value.as < Node* > () = new Node("MultExpression", "", yylineno);
        yylhs.value.as < Node* > ()->children.push_back(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->children.push_back(yystack_[0].value.as < Node* > ());
    }
#line 961 "parser.tab.cc"
    break;

  case 36: // expression: NEW IDENTIFIER LPAREN RPAREN
#line 253 "parser.yy"
                                 {
        yylhs.value.as < Node* > () = new Node("NewObject", *yystack_[2].value.as < std::string* > (), yylineno);
        delete yystack_[2].value.as < std::string* > ();
    }
#line 970 "parser.tab.cc"
    break;

  case 37: // expression: expression DOT IDENTIFIER LPAREN RPAREN
#line 257 "parser.yy"
                                            {
        yylhs.value.as < Node* > () = new Node("MethodCall", *yystack_[2].value.as < std::string* > (), yylineno);
        yylhs.value.as < Node* > ()->children.push_back(yystack_[4].value.as < Node* > ());
        delete yystack_[2].value.as < std::string* > ();
    }
#line 980 "parser.tab.cc"
    break;

  case 38: // expression: expression DOT IDENTIFIER LPAREN expression RPAREN
#line 262 "parser.yy"
                                                       {
        yylhs.value.as < Node* > () = new Node("MethodCall", *yystack_[3].value.as < std::string* > (), yylineno);
        yylhs.value.as < Node* > ()->children.push_back(yystack_[5].value.as < Node* > ());
        yylhs.value.as < Node* > ()->children.push_back(yystack_[1].value.as < Node* > ());
        delete yystack_[3].value.as < std::string* > ();
    }
#line 991 "parser.tab.cc"
    break;

  case 39: // expression: factor
#line 268 "parser.yy"
           {
        yylhs.value.as < Node* > () = yystack_[0].value.as < Node* > ();
    }
#line 999 "parser.tab.cc"
    break;

  case 40: // factor: INTEGER
#line 274 "parser.yy"
            {
        yylhs.value.as < Node* > () = new Node("Int", std::to_string(yystack_[0].value.as < int > ()), yylineno);
    }
#line 1007 "parser.tab.cc"
    break;

  case 41: // factor: IDENTIFIER
#line 277 "parser.yy"
               {
        yylhs.value.as < Node* > () = new Node("Identifier", *yystack_[0].value.as < std::string* > (), yylineno);
        delete yystack_[0].value.as < std::string* > ();
    }
#line 1016 "parser.tab.cc"
    break;

  case 42: // factor: THIS
#line 281 "parser.yy"
         {
        yylhs.value.as < Node* > () = new Node("This", "this", yylineno);
    }
#line 1024 "parser.tab.cc"
    break;

  case 43: // factor: LPAREN expression RPAREN
#line 284 "parser.yy"
                             {
        yylhs.value.as < Node* > () = yystack_[1].value.as < Node* > ();
    }
#line 1032 "parser.tab.cc"
    break;


#line 1036 "parser.tab.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (YY_MOVE (msg));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;


      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // parser::context.
  parser::context::context (const parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char parser::yypact_ninf_ = -53;

  const signed char parser::yytable_ninf_ = -1;

  const signed char
  parser::yypact_[] =
  {
      12,    16,    27,   -53,   -53,    19,   -53,    24,   -10,    28,
     -53,    25,     1,    34,   -53,    38,    -5,    39,    32,   -53,
     -53,   -53,    33,    67,    42,    44,    -5,   -53,   -53,    40,
      68,   -53,    73,   -53,    55,    54,    58,    -5,    83,    59,
      53,   -53,    87,    61,    62,    -5,   -53,    64,   -53,   -53,
     -53,    15,    21,    69,    70,    72,    56,   -53,   -53,   -53,
     -53,    70,    71,   -53,    56,    56,    56,   -53,   -53,   -53,
      96,    56,    -2,   -53,   -53,     4,     7,    11,    75,    14,
      56,    56,    56,    74,    98,    76,   -53,    57,    77,   -53,
       0,     0,    78,   -53,    79,   -53,    92,   -53,    50,    57,
     -53,    17,   -53,   -53
  };

  const signed char
  parser::yydefact_[] =
  {
       0,     0,     0,     2,     5,     0,     1,     3,     0,     0,
       6,     0,     0,     0,     8,     0,    11,     0,    31,    32,
      30,     9,     0,     0,     0,     0,     0,     7,    12,     0,
       0,    29,     0,    10,     0,     0,     0,    14,     0,     0,
      15,    16,     0,     0,     0,     0,    18,     0,    19,    17,
      23,     0,     0,     0,    32,     0,     0,    28,    21,    20,
      22,     0,     0,    24,     0,     0,     0,    40,    41,    42,
       0,     0,     0,    39,     4,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,    43,
      33,    34,    35,    13,     0,    25,     0,    36,     0,     0,
      37,     0,    27,    38
  };

  const signed char
  parser::yypgoto_[] =
  {
     -53,   -53,   -53,   -53,   -53,   -53,   -53,    80,   -53,   -53,
     -53,   -53,    81,   -53,   -53,   -53,   -52,    65,     6,   -53
  };

  const signed char
  parser::yydefgoto_[] =
  {
       0,     2,     3,     4,     7,    10,    16,    21,    22,    28,
      39,    40,    41,    51,    59,    52,    60,    23,    72,    73
  };

  const signed char
  parser::yytable_[] =
  {
      63,    80,    81,    82,    18,    82,    19,    80,    81,    82,
      80,    81,    82,    20,    80,    81,    82,    80,    81,    82,
      80,    81,    82,    53,    18,     1,    54,     6,     5,    53,
       8,    11,    61,    20,    55,    96,     9,    56,    13,    12,
      55,    83,    14,    84,    85,    84,    26,   102,    15,    84,
      86,    87,    84,    17,    89,    24,    84,   103,    57,    84,
      67,    68,    84,    62,    57,    53,    67,    68,    61,    25,
      75,    76,    77,    69,    70,    27,    55,    79,    29,    69,
      70,    30,    31,    33,    35,    34,    90,    91,    92,    71,
     100,    32,    36,    37,    43,    71,    38,    45,    46,    44,
      57,    47,    42,    48,   101,    50,    65,    78,    64,    94,
      42,    66,    99,    74,    88,     0,    93,    97,    98,    95,
       0,     0,     0,    84,     0,     0,    49,     0,     0,     0,
       0,    58
  };

  const signed char
  parser::yycheck_[] =
  {
      52,     3,     4,     5,     9,     5,    11,     3,     4,     5,
       3,     4,     5,    18,     3,     4,     5,     3,     4,     5,
       3,     4,     5,     8,     9,    13,    11,     0,    12,     8,
      11,    41,    11,    18,    19,    87,    12,    22,    13,    11,
      19,    43,    41,    45,    40,    45,    13,    99,    14,    45,
      43,    40,    45,    15,    40,    16,    45,    40,    43,    45,
      10,    11,    45,    42,    43,     8,    10,    11,    11,    37,
      64,    65,    66,    23,    24,    42,    19,    71,    11,    23,
      24,    39,    38,    43,    11,    17,    80,    81,    82,    39,
      40,    26,    37,    39,    11,    39,    38,    44,    11,    40,
      43,    40,    37,    41,    98,    41,    36,    11,    39,    11,
      45,    39,    20,    42,    39,    -1,    42,    40,    39,    43,
      -1,    -1,    -1,    45,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    51
  };

  const signed char
  parser::yystos_[] =
  {
       0,    13,    47,    48,    49,    12,     0,    50,    11,    12,
      51,    41,    11,    13,    41,    14,    52,    15,     9,    11,
      18,    53,    54,    63,    16,    37,    13,    42,    55,    11,
      39,    38,    63,    43,    17,    11,    37,    39,    38,    56,
      57,    58,    63,    11,    40,    44,    11,    40,    41,    58,
      41,    59,    61,     8,    11,    19,    22,    43,    53,    60,
      62,    11,    42,    62,    39,    36,    39,    10,    11,    23,
      24,    39,    64,    65,    42,    64,    64,    64,    11,    64,
       3,     4,     5,    43,    45,    40,    43,    40,    39,    40,
      64,    64,    64,    42,    11,    43,    62,    40,    39,    20,
      40,    64,    62,    40
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    46,    47,    48,    49,    50,    50,    51,    52,    52,
      53,    54,    54,    55,    56,    56,    57,    57,    58,    59,
      59,    60,    60,    61,    61,    62,    62,    62,    62,    63,
      63,    63,    63,    64,    64,    64,    64,    64,    64,    64,
      65,    65,    65,    65
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     1,     2,    18,     0,     2,     6,     0,     2,
       3,     0,     2,    12,     0,     1,     1,     3,     2,     0,
       2,     1,     1,     0,     2,     5,     4,     7,     1,     3,
       1,     1,     1,     3,     3,     3,     4,     5,     6,     1,
       1,     1,     1,     3
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "PLUSOP", "MINUSOP",
  "MULTOP", "LP", "RP", "SYSTEMDOTOUTDOTPRINTLN", "INT", "INTEGER",
  "IDENTIFIER", "CLASS", "PUBLIC", "STATIC", "VOID", "MAIN", "STRING",
  "BOOLEAN", "IF", "ELSE", "WHILE", "RETURN", "THIS", "NEW", "TRUE",
  "FALSE", "AND", "OR", "EQ", "LT", "GT", "PLUS", "MINUS", "TIMES", "NOT",
  "ASSIGN", "LBRACK", "RBRACK", "LPAREN", "RPAREN", "LBRACE", "RBRACE",
  "SEMICOLON", "COMMA", "DOT", "$accept", "root", "Goal", "MainClass",
  "ClassDeclarations", "ClassDeclaration", "VarDeclarations",
  "VarDeclaration", "MethodDeclarations", "MethodDeclaration",
  "FormalParameters", "FormalParameterList", "FormalParameter",
  "BlockStatements", "BlockStatement", "StatementList", "Statement",
  "Type", "expression", "factor", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  parser::yyrline_[] =
  {
       0,    63,    63,    69,    77,    86,    89,    96,   105,   108,
     115,   123,   126,   133,   144,   147,   153,   157,   164,   172,
     175,   182,   185,   191,   194,   201,   205,   210,   216,   222,
     225,   228,   231,   238,   243,   248,   253,   257,   262,   268,
     274,   277,   281,   284
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 1571 "parser.tab.cc"

#line 290 "parser.yy"


