CLEOS:=cleos
CONTRACT_ACCOUNT:=abieosabieos
PK:=EOS6KAV4we7bezueZ31pWf26aa8JpTe1Edp5kj298ZKBuN7c7t8D5


all: build abi

build:
	eosiocpp -o test.wast test.cpp

abi:
	eosiocpp -g test.abi test.cpp

deploy: all
	$(CLEOS) set contract $(CONTRACT_ACCOUNT) ../test

setup:
	$(CLEOS) system newaccount --stake-net "1.0000 EOS" --stake-cpu "1.0000 EOS" --buy-ram-kbytes 1000 eosio $(CONTRACT_ACCOUNT) $(PK) $(PK)

test:
	cleos push action $(CONTRACT_ACCOUNT) hi '["eosio"]' -p eosio
