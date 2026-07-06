# CPP04 key concepts

## virtual
- without it: pointer type decides which function runs
- with it: actual object type decides at runtime
- always make the destructor virtual in a base class

## pure virtual / abstract class
- `virtual void makeSound() const = 0;`
- class becomes abstract — cannot do `new Animal()`
- child classes MUST implement the function or they won't compile

## polymorphism
- one pointer type (`Animal*`), many behaviours (Dog, Cat)
- only works because of virtual
- lets you loop over an array of `Animal*` and each calls its own makeSound

## deep copy vs shallow copy
- shallow: copies the pointer — two objects share the same Brain — crash when one deletes it
- deep: `brain = new Brain(*other.brain);` — creates a brand new independent Brain
- in assignment operator: `*brain = *other.brain;` — copies contents into existing Brain

## WrongAnimal point
- exists purely to show what happens WITHOUT virtual
- WrongCat's sound never gets called — WrongAnimal's does instead
- proof that virtual matters

## valgrind
- run `valgrind --leak-check=full ./program`
- every `new` needs a matching `delete`
- "0 bytes in 0 blocks" = clean