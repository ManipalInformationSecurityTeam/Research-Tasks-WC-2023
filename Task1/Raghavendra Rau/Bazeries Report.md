# Bazaries

The Bazeries Cipher, created by Etienne Bazeries, is a cipher containing a key and two square grids. The key is a two digit number and the grids are 5x5 with one letter omitted, usually J or X.

The way the code works is as follows:

Grid 1 is constructed by arranging the letters of the alphabet vertically.

|   | 1 | 2 | 3 | 4 | 5 |
|:-:|:-:|:-:|:-:|:-:|:-:|
| 1 | A | F | L | Q | V |
| 2 | B | G | M | R | W |
| 3 | C | H | N | S | X |
| 4 | D | I | O | T | Y |
| 5 | E | K | P | U | Z |

Key: 32 aka THIRTYTWO

Grid 2 is constructed by spelling out the key and then filling in the remaining letters of the alphabet.

|   | 1 | 2 | 3 | 4 | 5 |
|:-:|:-:|:-:|:-:|:-:|:-:|
| 1 | T | H | I | R | Y |
| 2 | W | O | A | B | C |
| 3 | D | E | F | G | K |
| 4 | L | M | N | P | Q |
| 5 | S | U | V | X | Z |

## Encoding

Let us take the word "CRYPT" to encode. 

Step 1: The word is split into alternating groups of digits according to the key. Since the key is 32, "CRYPT" is split into "CRY", "PT". 

Step 2: The groups are reversed and rejoined. "CRY", "PT" becomes "YRC", "TP" and then "YRCTP".

Step 3: Each letter is located on grid 1 and replaced by the letter occupying its corresponding position in grid 2. "Y" is in position (4,5) in grid 1. Thus it is replaced by the letter Q as it is located in position (4,5) in grid 2. Thus, "YRCTP" becomes "QBDPV". "QBDPV" is the encoded string. 

## Decoding

Let us take the word "QBDPV" to decode. To decode a work, the key must be known. Once the key is known, both grids can be constructed. 

Step 1: The word is split into alternating groups of digits according to the key. Since the key is 32, "QBDPV" is split into "QBD", "PV". 

Step 2: The groups are reversed and rejoined. "QBD", "PV" becomes "DBQ", "VP" and then"DBQVP".

Step 3: Each letter is located on grid 2 and replaced by the letter occupying its corresponding position in grid 1. "D" is in position (3,1) in grid 2. Thus it is replaced by the letter C as it is located in position (3,1) in grid 1. Thus, "DBQVP" becomes "CRYPT". "CRYPT" is the decoded string.




