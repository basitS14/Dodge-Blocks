# Dodge-Blocks
Created a simple game using graphics library in c language

instructions to add graphics.h:

1) Copy "graphics.h" and "winbgim.h" files to "include" folder of CodeBlocks directory.
   Default location is ("C:\Program Files (x86)\CodeBlocks\MinGW\include\")

2) Copy "libbgi.a" to file to "lib" folder of CodeBlocks directory.
   Default location is ("C:\Program Files (x86)\CodeBlocks\MinGW\lib\")

3) Open CodeBlocks and go to (Settings > Compiler > Linker Settings)

4) Link Libraries (left), Click on "Add" button, then click "Browse" and select the "libbbgi.a"
   file that you have copied in CodeBlocks directory..
   Default location is (C:\Program Files (x86)\CodeBlocks\MinGW\lib\libbgi.a)
   and then click "Open" button.

5) Other linker option (right), copy the text below and paste there
   -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

6) Click "OK"

Done...

NOTE:
1) The graphics.h will work only in the program saved in ".cpp" format.


