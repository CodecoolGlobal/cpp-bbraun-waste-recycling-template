# Waste recycling

## Story
Imagine a future where waste management is as simple as sorting your trash into the right bin. The project, *Waste Recycling*, brings that future one step closer by introducing a smart waste sorting system. Using advanced technology, our bins can automatically identify different types of waste and guide users on proper disposal.

## Tasks
### Garbage
Implement `Garbage` class. This is the class containing regular garbage's business logic.
`Garbage` class has the following attributes:
- **name**: a string, storing some custom name of the exact garbage object

### PaperGarbage
Implement the `PaperGarbage` class. This is the class containing the business logic for garbage made of paper.
`PaperGarbage` class has the following attributes:
- **name**: a string, storing the name of the garbage
- **isSqueezed**: a boolean, storing if the garbage is squeezed or not
The `PaperGarbage` class has the following instance methods:
- **squeeze()**: when called, it sets the object's isSqueezed attribute to True

### PlasticGarbage
Implement `PlasticGarbage` class. This is the class containing the business logic of a garbage made of plastic. 
The `PlasticGarbage` class has the following attributes:
- **name**: a string, storing the name of the garbage
- **isClean**: a boolean, storing if the garbage is clean or not
The `PlasticGarbage` class has the following instance methods:
- **clean()**: when called, it sets the object's isClean attribute to True

### DustbinContentError
Implement `DustbinContentError` class. This class contains a custom exception, called `DustbinContentError`, which is raised by the `Dustbin` in some error cases (see below).

### Dustbin
Implement `Dustbin` class. This class should contain all the logic, of what our automated dustbin can do.
The `Dustbin` class has the following attributes:
- **color**: a string, storing the dustbin's color
- **paperContent**: an array storing `PaperGarbage` instances
- **plasticContent**: an array storing `PlasticGarbage` instances
- **houseWasteContent**: an array storing `Garbage` instances
The `Dustbin` has the following instance methods:
- `throwOutGarbage(Garbage)`: the argument is an instance of the `Garbage` class. It puts that into the **houseWasteContent** array
- `throwOutPaperGarbage(PaperGarbage)`: the argument is an instance of the `PaperGarbage` class. If it's *squeezed*, then it puts that into the **paperContent** array. If the `PaperGarbage` instance is not squeezed, it raises a `DustbinContentError` exception
- `throwOutPlasticGarbage(PlasticGarbage)`: the argument is an instance of the `PlasticGarbage` class. If it's *clean*, then it puts that into the **plasticContent** array. If the `PlasticGarbage` instance is not clean, it raises a `DustbinContentError` exception
- emptyContents(): If it's called, all the garbage containers gets emptied

### Dustbin9000
The newest dustbin in the market can do all the things Dustbin already knew and more.
It accepts *metal garbage* (and therefore has a container for it)
Also has a compartment for bottle *caps* but only if the cap is pink. So it won't accept any other color and will raise a `BottleCapException` if receives a non-pink cap.

### OPTIONAL TASK: DustbinTests
Implement `DustbinTests` class. Try to test all the cases what you can think of. 
This class should contain test cases for the specification above.

### OPTIONAL TASK: Extra tasks
Implement extra features for the Waste Recycling project
- Make a *maximum capacity* for the dustbin and a *weight* for the garbage types. The dustbin should throw a `DustbinIsFull` exception if it would overflow and should not accept that piece of garbage.
- Make some little console interface where you can virtually use the dustbin. Select the type of garbage, configure it (squeeze option if needed etc.) and try to put it into the dustbin.