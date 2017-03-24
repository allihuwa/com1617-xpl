//
// **** AUTOMATICALLY GENERATED BY mknodedecls.pl -- DO NOT EDIT ****
//
#ifdef __NODE_DECLARATIONS_ONLY__

//---------------------------------------------------------------------------
//     THESE ARE PREDEFINED NODES, AVAILABLE FROM THE CDK
//---------------------------------------------------------------------------

namespace cdk {
  class basic_node; class nil_node; class data_node;
  class sequence_node; class expression_node;
  template <typename StoredType> class literal_node;
  class double_node; class integer_node; class string_node;
  class unary_expression_node; 
  class neg_node; class not_node;
  class binary_expression_node;
  class add_node;   class sub_node; class mul_node; class div_node;
  class mod_node;   class lt_node;  class le_node;  class ge_node;  
  class gt_node;    class eq_node;  class ne_node; 
  class and_node; class or_node;
  class lvalue_node; class identifier_node;
  class rvalue_node; class assignment_node;
} // namespace cdk

//---------------------------------------------------------------------------
//     THESE ARE THE NODES DEFINED SPECIFICALLY FOR THIS APPLICATION
//---------------------------------------------------------------------------

namespace xpl {
class sweep_down_node; 
class identity_node; 
class stop_node; 
class return_node; 
class vardecl_node; 
class index_node; 
class null_node; 
class malloc_node; 
class invocation_node; 
class block_node; 
class evaluation_node; 
class next_node; 
class position_node; 
class function_node; 
class read_node; 
class while_node; 
class sweep_up_node; 
class if_else_node; 
class print_node; 
class if_node; 

} // namespace xpl

//---------------------------------------------------------------------------
//     A L I A S E S
//---------------------------------------------------------------------------

#else /* !defined(__NODE_DECLARATIONS_ONLY__) */

#ifndef __AUTOMATIC_NODE_ALLNODES_H__
#define __AUTOMATIC_NODE_ALLNODES_H__

//---------------------------------------------------------------------------
//     THESE ARE PREDEFINED NODES, AVAILABLE FROM THE CDK
//---------------------------------------------------------------------------

#include <cdk/ast/data_node.h>
#include <cdk/ast/nil_node.h>
#include <cdk/ast/sequence_node.h>
#include <cdk/ast/integer_node.h>
#include <cdk/ast/double_node.h>
#include <cdk/ast/string_node.h>
#include <cdk/ast/neg_node.h>
#include <cdk/ast/not_node.h>
#include <cdk/ast/add_node.h>
#include <cdk/ast/sub_node.h>
#include <cdk/ast/mul_node.h>
#include <cdk/ast/div_node.h>
#include <cdk/ast/mod_node.h>
#include <cdk/ast/lt_node.h>
#include <cdk/ast/gt_node.h>
#include <cdk/ast/ge_node.h>
#include <cdk/ast/le_node.h>
#include <cdk/ast/ne_node.h>
#include <cdk/ast/eq_node.h>
#include <cdk/ast/and_node.h>
#include <cdk/ast/or_node.h>
#include <cdk/ast/identifier_node.h>
#include <cdk/ast/rvalue_node.h>
#include <cdk/ast/assignment_node.h>

//---------------------------------------------------------------------------
//     THESE ARE THE NODES DEFINED SPECIFICALLY FOR THIS APPLICATION
//---------------------------------------------------------------------------

#include "ast/sweep_down_node.h"
#include "ast/identity_node.h"
#include "ast/stop_node.h"
#include "ast/return_node.h"
#include "ast/vardecl_node.h"
#include "ast/index_node.h"
#include "ast/null_node.h"
#include "ast/malloc_node.h"
#include "ast/invocation_node.h"
#include "ast/block_node.h"
#include "ast/evaluation_node.h"
#include "ast/next_node.h"
#include "ast/position_node.h"
#include "ast/function_node.h"
#include "ast/read_node.h"
#include "ast/while_node.h"
#include "ast/sweep_up_node.h"
#include "ast/if_else_node.h"
#include "ast/print_node.h"
#include "ast/if_node.h"


//---------------------------------------------------------------------------
//     T H E    E N D
//---------------------------------------------------------------------------

#endif /* !defined(__AUTOMATIC_NODE_ALLNODES_H__) */

#endif /* !defined(__NODE_DECLARATIONS_ONLY__) */
