#include <eosiolib/eosio.hpp>
#include "../abieos-numeric-c-14/abieos_numeric.hpp"

using namespace eosio;

class hello : public eosio::contract {
  public:
      using contract::contract;

      /// @abi action
      void hi( account_name user ) {
        std::string pubkey_str = std::string("EOS6S7kyRBUnwhKwfz41E7hCv9swCzT6AicNb7Skiz4LAeY7wG9WJ");
        abieos::public_key pubkey = abieos::string_to_public_key(pubkey_str);
        printf("We will never reach this line because the line above throws eosio_assert!\n");
      }
};

EOSIO_ABI( hello, (hi) )
