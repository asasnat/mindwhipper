Mindwhipper is an open-source esoteric programming language inspired by Brainfrick. Mindwhipper is currently being ran by StupidButSmartProgrammer.  
Have an idea? Create a pull request!  
If I see a pull request adds some good stuff and possibly fixes some bugs, I'll "accept" the pull request! Also, before creating a pull request, TEST YOUR PULL REQUEST ON YOUR HARDWARE FIRST.


Mindwhipper is written in Visual C++, and ONLY uses the standard library, so the source code is pretty lightweight and easily portable without creating a .zip file.  
Currently, running mindwhipper requires you to compile it... but due to the fact that it only uses the standard library, and that it only consists of one source file, it's easy as butter! Trust me.

Compilation instructions:
1. Create a new Visual Studio project.
2. Right-click on your project (NOT the solution) and click "Open in Explorer". You will be in the project's path.
3. Copy the main.cpp (included in the mindwhipper repo) file onto the main project folder (again, NOT the solution folder).
4. In Visual Studio, right click on "source files". Select "Add >" and select "new existing element". Select the main.cpp file and click "open" or "add".
5. Click "Compile" in Visual Studio and boom! you are running mindwhipper on your own computer.

Documentation on mindwhipper:  
-Executing a File:  
It's simple. You run the .exe. You are prompted to type in the FULL PATH of the file you are trying to execute. After that you hit enter and your program is being executed. That was easy.  
-The Memory Tape:  
The memory tape is pretty simple. Imagine it as an array of values that you can modify and even print onto the console (because that's literally what it is). The memory tape is 20 elements in size.  
-Command list is at the end of the main.cpp file!  

! ATTENTION !  
I've taken a break from working on this project, so expect little to no updates for now.  
I always wanted to implement the `[` and `]` functions, effectively allowing loops and comment blocks in a similar fashion to Brainfrick (keeping it family friendly!), but for whatever reason I didn't.  
I'm very sorry, and I hope I will get out of this habit.  
Anyway, in the meantime, feel free to do some pull requests, but not too much - I don't like when people babysit me by implementing everything by themselves, thus not letting me put something into the code!
