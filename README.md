# Tic-Tac-Toe in C

A simple two-player tic-tac-toe game that runs in the terminal, written in C.

```
 X |   |  
---+---+---
   | X |  
---+---+---
   |   | X

Player X wins!
```

## Features

- Two players, X and O, taking turns
- Checks all 8 winning lines (rows, columns, diagonals)
- Detects draws
- Rejects invalid moves and bad input
- Option to play again after each game

## Requirements

- A C compiler such as `gcc` (or `clang`)

## How to build and run

1. Clone the repository:
   ```
   git clone https://github.com/graznie/depeka
   cd depeka
   ```
2. Compile:
   ```
   gcc tictactoe.c -o tictactoe
   ```
3. Run:
   - Mac/Linux: `./tictactoe`
   - Windows: `tictactoe.exe`

## How to play

The squares are numbered 1 to 9, left to right, top to bottom:

```
 1 | 2 | 3
---+---+---
 4 | 5 | 6
---+---+---
 7 | 8 | 9
```

Type the number of the square you want and press Enter. X goes first. Get three in a row to win.

## Ideas for improvement

- Add a computer opponent
- Add a score counter across games
- Add a bigger board

## License

Free to use and modify.
