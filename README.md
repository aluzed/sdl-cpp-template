# sdl-cpp-template
My template for starting an SDL project with C++ (Code Blocks)
The main structure come's from : [youtube Archie G. channel](https://www.youtube.com/channel/UCn8h9ivAVGou9dkn0H9aVDw) SDL C++ playlist

## Before compiling :
### Right click on project > Build Options > Compiler flag :
*Enable checkbox :* -std=C++11

### linker settings :
*link libraries :*
* libmingw32.a (in code block folder)
* libSDL2main.a
* libSDL2.a

*Other linker options:*
-lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer

### Search directories :
*Compiler :*
include (local project folder)

*Linker :*
lib (local project folder)
