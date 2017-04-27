# sdl-cpp-template
My template for starting an SDL project with C++ (Code Blocks)

## Before compiling :
### Right click on project > Build Options > Compiler flag :
-std=C++11

### linker settings :
link libraries :
* libmingw32.a (in code block folder)
* libSDL2main.a
* libSDL2.a

Other linker options:
-lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer

### Search directories :
Compiler :
include (local project folder)

Linker :
lib (local project folder)
