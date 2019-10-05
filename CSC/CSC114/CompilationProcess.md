## Microsoft:[DEV210x Introduction to C++](https://courses.edx.org/courses/course-v1:Microsoft+DEV210x+2T2019/course/)
### Module 1 
#### C++ Apps on Different Platforms  
.. Portability refers to the process of compiling your code, without major changes,  
   across different compilers or different platforms. Platforms typically mean computer  
   hardware, operating systems, CPU architectures, or device form factors. Compilers  
   refer to the process of turning your code into executable form. Each platform  
   or operating system may have different compilers available from different providers 
   such as Microsoft, Intel, or Oracle.  
#### The Compilation Process  
   * Preprocessor  
   .. Takes C++ sorce code (.cpp) and evaluates  
      preprocessor directives. For example, #include  
   .. Produces a preprocessed source file (usually part of the compiler)  
   * Compiler  
   .. Takes preprocessed source code, compiles into object files.  
   .. Checks that code conforms syntactically and semantically in C++  
   .. Accepts promises from the code about things defined in other source files.  
   * Linker  
   .. Takes object files, links them into an executable program.  
   .. Ensures that all of the promises to the compilerr are kept.  
   
   
 ####  Compile in VS Code: tasks.json  
   6.3 Make the following changes to file ([see](Visual-Studio-Code/C++/Compiling-C++In-VSC.md "HNSS-US") for explaination)
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
