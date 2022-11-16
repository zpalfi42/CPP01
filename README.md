# CPP Module 01
CPP module 01, is a simple group of exercices in c++ to introduce us to the world of c++. In this module we will learn about memory allocation, pointers to members, references and switch statements.

## Exercise 00: BraiiiiiiinnnzzzZ

**Objective**: In this exercise we will have to implement a **zombie** class.

This zombie class will follow the next instrucctions:

- It has a string attribute **name**.
- It has a member function **void announce( void );** which is used for the zombies to announce themeselves as follows:

      NameOfTheZombie:BraiiiiiiinnnzzzZ...

- This class also has to have this following functions:
- - Zombie* newZombie( std::string name );
    It creates a zombie, name it, and return the zombie object.
- - void  randomChump( std::string name );
    It creates a zombie, name it, and the ombie announces itself.

The point of this exercices is to learn about allocation in the stack or the heap. 

**Files**: [`Makefile`](./ex00/Makefile), [`main.cpp`](./ex00/src/main.cpp), [`Zombie.cpp`](./ex00/src/Zombie.cpp), [`newZombie.cpp`](./ex00/src/newZombie.cpp), [`randomChump.cpp`](./ex00/src/randomChump.cpp), [`Zombie.hpp`](./ex00/includes/Zombie.hpp)

**Forbidden functions**: None

**Example of how it works**:

<p align="center">
  <a align="center">
    <img src="./Resources/ex00.png" width="80%">
  </a>
</p>

## Exercise 01: Moar brainz!

**Objective**: In this exercise we will have to implement a **horde of Zombies!**

To do this we will have tom implement the following function:

    Zombie* zombieHorde( int N, std::string name );
    
Where ***N*** is the number of Zombies objects we must allocate in a single allocation and initializes the zombies giving the name passed as a parameter. Th function must return a pointer to the first zombie.

The point of this exercise is to clean and check all the memory leaks.

**Files**: [`Makefile`](./ex01/Makefile), [`main.cpp`](./ex01/src/main.cpp), [`Zombie.cpp`](./ex01/src/Zombie.cpp), [`zombieHorde.cpp`](./ex01/src/zombieHorde.cpp), [`Zombie.hpp`](./ex01/includes/Zombie.hpp)

**Forbidden functions**: None

**Example of how it works**:

<p align="center">
  <a align="center">
    <img src="./Resources/ex01.png" width="40%">
  </a>
</p>

## Exercise 02: HI THIS IS BRAIN

**Objective**:

**Files**:

**Forbidden functions**:

## Exercise 03: Unnecessary violence

**Objective**:

**Files**:

**Forbidden functions**:

## Exercise 04: Sed is for losers

**Objective**:

**Files**:

**Forbidden functions**:

## Exercise 05: Harl 2.0

**Objective**:

**Files**:

**Forbidden functions**:

## Exercise 06: Harl filter

**Objective**:

**Files**:

**Forbidden functions**:
