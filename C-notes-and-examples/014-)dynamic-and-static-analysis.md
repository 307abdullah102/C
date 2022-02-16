## Profiling (dynamic program analysis)

- Profiling measures 
-  - space, 
-  - time complexity,
- - usage of particular instructions,
-  - the frequency and duration of function calls 
- Profiling information serves to aid program optimization

## Static Analysis

- Static analysis is a method of debugging by automatically examining source code before a program is run.
- The process provides an understanding of the code structure, and can help to ensure that the code adheres to industry standarts. 
- This type of analysis adresses weaknesses in source code that might lead to vulnerabilities. 
- Analysis is often performed by an automated tool (much more effective than code reviews )
- Software metrics and reverse engineering can be described as forms of static analysis
## Static vs Dynamic Analysis

- Both types of analysis detect defeccts
- The big difference is where they find defects in the development lifecycle. 
- Static analysis identifies defects before you run a program.
- Dynamic analysis identifies defects after you run a program. 
- There are defects that dynamic testing might miss that static code analysis can find. 
- The best static code analysis tools offer **speed, depth and accuracy.**
- Automated tools are much faster than developers manual code reviews. **speed**
- Testing can't cover every possible code execution path, but a static code analyzer can **depth**
- Manual code reviews are prone to human error, automated tools are not. **accuracy**
## Limitations of Static Analysis

- No understanding of developer intent
- May detect a possible overflow in this calculation. 
- Rules that are not statically enforceable. 
- Possible defects lead to false positives and false negatives. 
- There are tons of tools available that perform statistic analysis two of them are **coverity** and **codesonar**.
- **Coverity:**
-  - Reasonably fast and returns few false positives. 
-  - Latest version supports an option to choose between three levels of aggressiveness, with the number of reports increasing at the higher levels. 
- **Codesonar:**
- - Performs a whole program interprocedural analysis on C.
- - Identifies programming bugs and security vulnerabilities. 
- - Also provides rules checkers for the power of ten coding rules. 
- - Can be slow on large code basis. 

## How Codesonar works

- Employs a unified dataflow and symbolic execution analysis that examines the computation of the complete application. 
- By not relying on pattern matching or similar approximations, Codesonar's static analysis engine is extraordinarily deep, finding 3-5 times more defects on average than other static analysis toolsü
- Like a compiler, Codesonar does a build of your code using your existing build environment, but instead of creating object code, Codesonar creates an abstract model of your entire program. 
- Checkers perform static code analysis to find common defects, violations of policies
