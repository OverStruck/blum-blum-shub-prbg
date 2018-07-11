# blum-blum-shub-prbg
C++ Implementation of the Blum-Blum-Shub Psudo Random Number Generator

Blum Blum Shub (B.B.S.) was proposed in 1986 by Lenore Blum, Manuel Blum and Michael Shub in a paper called *A Simple Unpredictable Pseudo-Random Number Generator*

BBS is a cryptographically secure psudo random number generator

## Getting Started

In order to use this generator you need to chose 3 numbers: P, Q and a seed.

**P and Q are to be large Blum prime numbers.**

A Blum prime number P is a number P congruent to 3 (modulus 4)

- That means: p ≡ 3 (mod 4)

Let N = (P * Q)

The seed should be a number between 1 and N - 1

Once you have those 3 numbers, you can simply call the constructor with those three parameters.
```
BBS numberGen(P, Q, seed);
```

Then you can call `getRandNum()` to generate a random number or `getRandBit()` to get a random bit.
The random bit is generated using `getRandNum() mod 2`

See [`blum_blum_shub_example.cpp`](blum_blum_shub_example.cpp) for an example of how to generate a sequence of numbers.

## License
This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details
