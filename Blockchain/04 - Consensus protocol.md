## Consensus protocol :

- Used to :
  - Prevent attacks
  - Solve Competing chain problem
- Types of Consensus protocol :
  - Proof of Work
  - Proof of State
  - Others

### Proof of Work (POW) :

- Suppose a 'miner A'  mines a block and adds it to its blockchain, this information is sent to other miners. 
- Before adding that block into their blockchain, all miners will run a algorithm to check whether the block added by 'miner A' is valid or not.
- Once the algo is ran successfully, the miners will add the block and then 'miner A' will get its incentive for mining the block i.e some bitcoin.
- It takes very less time to run the algorithm.
  eg: Solving a rubik's cube might take hours, days, etc. for a person, but verifying whether it's solved correctly will take seconds.
  
### Solving Competing chain problem : 

- In the given n/w all miners have same blockchains.
- Suppose if 2 miners mine a block at the same time.
- They send information to the nearest miners. This leads to formation of 2 different blockchains, 1 blockchain having information about one block and so the other.
- In such case the Blockchain with longer width is considered and thus blockchain having small length, its nodes are discarded and nodes of longer blockchain are added to it.
  
### Note :

- The Consensus protocol of Blockchain is much better than the Byzantine Fault tolerance as Consensus protocol only needs 51% majority while Byzantine Fault tolerance
  needs approximately 66% majority.
