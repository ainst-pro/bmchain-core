#ifdef IS_TEST_NET
#include <bmchain/app/plugin.hpp>
#include <bmchain/chain/generic_custom_operation_interpreter.hpp>
#include <bmchain/chain/account_object.hpp>

#include <boost/test/unit_test.hpp>

#include "../common/database_fixture.hpp"

using namespace bmchain::chain;
using namespace bmchain::chain::test;
/*
namespace bmchain { namespace plugin_tests {

using namespace bmchain::app;
using namespace bmchain::chain;

struct test_a_operation : base_operation
{
   string account;

   void validate() { FC_ASSERT( account.size() ); }
};

struct test_b_operation : base_operation
{
   string account;

   void validate() { FC_ASSERT( account.size() ); }
};

typedef fc::static_variant<
   test_a_operation,
   test_b_operation >   test_op;

class test_plugin : public plugin
{
   public:
      test_plugin( application* app );

      std::string plugin_name()const override { return "TEST"; }

      std::shared_ptr< generic_custom_operation_interpreter< test_op > > _evaluator_registry;
};

DEFINE_PLUGIN_EVALUATOR( test_plugin, test_a_operation, test_a );
DEFINE_PLUGIN_EVALUATOR( test_plugin, test_b_operation, test_b );

void test_a_evaluator::do_apply( const test_a_operation& o )
{
   const auto& account = db().get_account( o.account );

   db().modify( account, [&]( account_object& a )
   {
      a.json_metadata = "a";
   });
}

void test_b_evaluator::do_apply( const test_b_operation& o )
{
   const auto& account = db().get_account( o.account );

   db().modify( account, [&]( account_object& a )
   {
      a.json_metadata = "b";
   });
}

test_plugin::test_plugin( application* app ) : plugin( app )
{
   _evaluator_registry = std::make_shared< generic_custom_operation_interpreter< test_op > >( database() );

   _evaluator_registry->register_evaluator< test_a_evaluator >( *this );
   _evaluator_registry->register_evaluator< test_b_evaluator >( *this );

   database().set_custom_operation_interpreter( plugin_name(), _evaluator_registry );
}

} } // bmchain::plugin_tests

BMCHAIN_DEFINE_PLUGIN( test, bmchain::plugin_tests::test_plugin )

FC_REFLECT( bmchain::plugin_tests::test_a_operation, (account) )
FC_REFLECT( bmchain::plugin_tests::test_b_operation, (account) )

DECLARE_OPERATION_TYPE( bmchain::plugin_tests::test_op );
FC_REFLECT_TYPENAME( bmchain::plugin_tests::test_op );
DEFINE_OPERATION_TYPE( bmchain::plugin_tests::test_op );
*/

BOOST_FIXTURE_TEST_SUITE( plugin_ops, clean_database_fixture );
/*
BOOST_AUTO_TEST_CASE( custom_json )
{
   try
   {

   }
   FC_LOG_AND_RETHROW()
}

BOOST_AUTO_TEST_CASE( custom_binary )
{
   try
   {

   }
   FC_LOG_AND_RETHROW()
}
*/
BOOST_AUTO_TEST_SUITE_END()
#endif