# Compiling C++ wthin the Visual Studio Code IDE.
* Note: These steps are written for a computer running Linux Mint 19. With different distros and operating systems, your mileage will vary. Most importantly, these differences are found in terms of menu selections. Therefore, do not focus so much on the first menu selection, but focus on the proceeding selections.

## Conventions used:
   [Word -> AnotherWord] shows menu selections.  
   For example:  
   [File -> Save]  
   means select the word 'File' from the menu and then choose 'Save'   
   
   $ is used to represent the Command Line Prompt  
   
   Visual Studio Code is referenced as VSC  
   
  
### Special thanks to Rong Lu for her Youtube video.

<a href="http://www.youtube.com/watch?feature=player_embedded&v=-erXR6k9TeE
" target="_blank"><img src="http://img.youtube.com/vi/-erXR6k9TeE/0.jpg" 
alt="C++Now 2018: Rong Lu “C++ Development with Visual Studio Code”" width="240" height="180" border="10" /></a>

### Steps
###### Steps 1-3 are my linux-centric steps
1. mkdir -p ~/Whatever/Directory/You/WantProgram
2. cd ~/Whatever/Directory/You/WantProgram
3. // launch VSC  
   $ code .  
4. VSC Opens in WANTPROGRAM file and Welcome Screen
5. Create .cpp file // Example used here is myprogram.cpp  
   5.1 save myprogram.cpp  
       [File -> Save]
6. Compile code  
   6.1 For me (Linux):  
        [Terminal -> Configure  Tasks... ->  
        Create create tasks.json from template ->  
        Others (Example to run an arbitrary external command)]  
   6.2 Creates tasks.json  
   ```
      {
           // See https://go.microsoft.com/fwlink/?LinkId=733558
           // for the documentation about the tasks.json format
           "version": "2.0.0",
           "tasks": [
                {
                    "label": "echo",
                    "type": "shell",
                    "command": "echo Hello"
                }
           ]
      }
   ```
   6.3 Make the following changes to file
   ```
      {
           // See https://go.microsoft.com/fwlink/?LinkId=733558
           // for the documentation about the tasks.json format
           "version": "2.0.0",
           "tasks": [
               {
                   // the task needs a name
                   "label": "build",
                   "type": "shell",
                   // VSC does not ship with a compiler
                   // select the compiler you want to use.
                   "command": "g++ -g myprogram.cpp -o myprogram",
                   // multiple build tasks are possible
                   // this sets as default
                   // Program to be built from
                   // [Terminal -> Run Build Task...]
                   "group": {
                       "kind": "build",
                       "isDefault": true
                   },
                   // regex definitions tells VSC
                   // how to interpret compiler warnings.
                   // Using this task will display warnings in the
                   // [PROBLEMS] window of VSC.
                   "problemMatcher":"$gcc" 
               }
           ]
       }
    ```
   
7. [File -> Save]  
    // File is saved to   
    // ~/Whatever/Directory/You/WantProgram/.vscode/tasks.json  
8. [Terminal -> Run Build Task...]  
   // Files myprogram.cpp and myprogram are created in directory  
   // ~/Whatever/Directory/You/WantProgram/  
9. [View -> Terminal] // launches integrated terminal in directory  
10.  // To run program from terminal  
   $ ./myprogram  

### To rerun the program after changes   
1. In VSC with myprogram.cpp active  
   [File -> Save]  
2. [Terminal -> Run Build Task...]  
3. Goto [TERMINAL] window  
   $ ./myprogram  

#### To create a new file in the same project
1. From VSC Explorer click new file icon.  
2. Create .cpp file // Example used here is newmyprogram.cpp  
3. In tasks.json change  
   "command": "g++ -g myprogram.cpp -o myprogram", to  
   "command": "g++ -g newmyprogram.cpp -o newmyprogram",  
4. [File -> Save]  
5. From the above, repeat from step 8 forward.
