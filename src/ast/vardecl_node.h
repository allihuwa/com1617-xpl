// $Id: vardecl_node.h,v 1.4 2017/04/11 16:17:01 ist181045 Exp $ -*- c++ -*-
#ifndef __XPL_VARDECLNODE_H__
#define __XPL_VARDECLNODE_H__

#include <string>

#include <cdk/ast/basic_node.h>
#include <cdk/basic_type.h>

namespace xpl {

  class vardecl_node : public cdk::basic_node {
    int _scope;
    basic_type *_type;
    std::string *_name;

  public:
    inline vardecl_node(int lineno, basic_type *type,
        std::string *name) : cdk::basic_node(lineno), _type(type), _name(name) {
    }

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

    void accept(basic_ast_visitor *sp, int level) {
      sp->do_vardecl_node(this, level);
    }

  };

} // xpl

#endif