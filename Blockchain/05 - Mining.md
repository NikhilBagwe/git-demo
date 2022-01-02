## Overview :

- Whenever we perform a transaction, the transaction goes into mempool area where all transactions are stored.
- Then the miners take the transaction from mempool and solve a mathematical problem.
- Then the miner who solves the mathematical problem, adds the block into blockchain also all the rest of the miners validate the block and then only add it in blockchain.
- The miner also get its reward.

### Nonce :

- Nonce is a number that miners use to solve their mathematical problem to generate the correct hash corresponding to target value.
- Miners try different numbers in place of nonce until they reach target value.
- This is the only field in a block that can be changed by miner.

### How mining works ?

- Target - It is a number that the block hash must be below for the block to be added on to the blockchain. The target changes after every 2016 blocks are mined to 
  ensure that blocks are mined every 10 minutes on average.
- The target is changed/decided by bitcoin algorithm.
- The target value can be one from possible hashes i.e '000..x64' to 'fff..x64'
- The miner must generate a hash which is below the target value. Then only it is a valid hash and the miner will be rewarded with bitcoin.
- So for that the miner needs to keep changing the value of 'Nonce' until valid hash is generated.
