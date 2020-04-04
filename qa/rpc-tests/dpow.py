#!/usr/bin/env python3
# Copyright (c) 2018 The Hush developers

from test_framework.test_framework import BitcoinTestFramework
from test_framework.util import assert_equal, initialize_chain_clean, \
    start_node, stop_node, wait_bitcoinds

class DPoWTest(BitcoinTestFramework):

    def setup_chain(self):
        print("Initializing test directory "+self.options.tmpdir)
        num_nodes = 1
        initialize_chain_clean(self.options.tmpdir, num_nodes)

    def setup_network(self):
        self.nodes = []
        self.is_network_split = False
        self.nodes.append(start_node(0, self.options.tmpdir))
        self.sync_all()

    def run_test(self):
        self.nodes[0].generate(3)
        rpc = self.nodes[0]

        result = rpc.getinfo()
        print (result)
        # regtest should have no notarization data, this test makes sure we do not see mainnet values as well!
        #print(result['notarized'])
        #print(result['notarizedhash'])
        #print(result['notarizedtxid'])
        #assert_equal(0,0)
        assert_equal(result['notarized'],0)
        assert_equal(result['notarizedhash'],'0000000000000000000000000000000000000000000000000000000000000000')
        assert_equal(result['notarizedtxid'],'0000000000000000000000000000000000000000000000000000000000000000')

if __name__ == '__main__':
    DPoWTest().main()