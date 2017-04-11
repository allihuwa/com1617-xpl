// $Id: funcdecl_node.h,v 1.3 2017/04/11 16:17:01 ist181045 Exp $ -*- c++ -*-
#ifndef __XPL_FUNCDECLNODE_H__
#define __XPL_FUNCDECLNODE_H__

#include <string>

#include <cdk/ast/basic_node.h>
#include <cdk/basic_type.h>

namespace xpl {

  class funcdecl_node : public cdk::basic_node {
    int _scope;
    basic_type *_type;
    std::string *_name;
    cdk::sequence_node *_arguments;

  public:
    inline funcdecl_node(int lineno, basic_type *type, std::string *name,
        cdk::sequence_node *arguments) : cdk::basic_node(lineno), _type(type),
        _name(name), _arguments(arguments) {}

  public:
    inline const int scope() const {
      return _scope;
    }
    
    inline basic_type *type() {
      return _type;
    }

    inline std::string *name() {
      return _name;
    }

    inline cdk::sequence_node *arguments() {
      return _arguments;
    }

    void accept(basic_ast_visitor *sp, int level) {
      sp->do_funcdecl_node(this, level);
    }

  };

} // xpl

#endif