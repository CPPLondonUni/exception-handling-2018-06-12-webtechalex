# Exceptions Exercise

This exercise is designed to get you to use exceptions. There is an empty try-catch block provided which will do the catching but it's up to you to redesign the code to make use of it.

## Task

There is an imaginary roster of students which we'll pretend is dynamic, but for the purposes of the exercise, is hard coded. You'll find the names in the source code.

When running the program, you are asked to enter a name. After doing so, it will print out the age of that student. Unfortunately, if the user enters a name that is not
in the roster, an exception is thrown which we don't handle and the program just terminates.

1. Modify the program to catch the exception so that it can at least exit gracefully and write out a nice error telling the user that the name they entered doesn't exist. (print the actual name they entered back at them)
2. Modify it so that an invalid name results in the program going back around so that they can try entering a valid name. It should do this continuously until they actually enter a valid one.

