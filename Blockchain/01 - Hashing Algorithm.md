## Hashing Algorithm :

- A Block in blockchain is represented using :
  - Block number
  - Data - stores transaction details
  - Previous Hash
  - Hash - unique identifier of that block
- Hash is generated using SHA 256 algorithm.

## Hash generation :

- When any data like document, music, etc. is fed to SHA 256 algo, it generates an encrypted data i.e hash corresponding to it.
- The hash consists of 64 hexadecimal characters, each character of 4 bits. Thus, 64x4 = 256.
- The hash of first block (Genesis block) of blockchain is stored as Prev Hash in next block and so on.

## Requirements of Hashing Algorithm :

1. One way - On giving data to algorithm it can generate encrypted data but vice versa should not be possible.

2. Determinstic - On giving the same input even 100 times, the algo must generate the same output for it.

3. Fast computation

4. Withstand collisions - Cannot be hacked easily.

5. Avalanche effect - When you even make a small change in input, the whole output must be changed.
