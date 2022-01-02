## Nonce range :

- We generate as much hashes as different nonce are there.
- Nonce is a finite 32 bit number so we can generate 4 billion (4x10^9) different nonce numbers.
- As per the SHA 256 algo, 64 bit hash can be generated and the total number of hashes that can be generated is 10^77.
- Here we cna see, ( 4x10^9 << 10^77 )
- Thus, we cannot generate the nonces for the remaining hashes (after 4 billion) and if our target lies in that range, we cannot generate the required hash as nonce is exhausted.
- There not enough nonce to generate valid hash. Here we use 'Timestamp' to solve this problem.

## Timestamp :

- The timestamp is a small data stored in each block as a unique serial and whose main function is to determine the exact moment in which the block has been mined
  and validated by the blockchain network.
- It is uses unix time as timestamp.
- The Unix epoch (or Unix time) is the number of seconds that have elapsed since January 1, 1970.
- Suppose if a miner exhausts 4 billion nonce in 40 seconds.
- In 0.5 sec he exhauts 0.5 billion nonce. As soon as he reaches 1 sec, the timestamp will change, thus due to avalanche effect the whole hash will change. So the miner will
  start again from 0 nonce and thus will never run out of nonce range.
- There is a problem with timestamp that in mining pool, the power of generating hashes is even more as multiple computers are connected in a n/w. So in very less time (0.0004 sec)
  they generate so many hashes that they exhaust the nonce range (4 billion) even before the timestamp is changed.
