# The Concept #

C++ files are unnecessarily complex.

The sources must be simply a set of declarations, but instead they are more of a script for letting compiler to consume the data in the most convenient order: first a declarations, then a usage.

It's not the syntax that requires this declaration-before-usage rule, it's the compiler. Should the compiler be able to look ahead, all forwards or includes could be forgotten.

The nicest thing about this concept is that you never need to change C++ syntax. You only have to give up some old unpleasant practices.

# Details #

  * The C++ soures are a set of individual .cpp files in directories. Now .h files.

  * All declarations (except namespace) come with definitions inline.

  * No forwards. The compiler is able to look through your sources should it need to resolve something.

  * Directory structure reflects the namespace structure.

  * Specializations can be declared only next to the related types -- not in a random file.

  * There are file-scoped usages.

  * All old dependencies are handled by a _prolog_ file, that is of old C++ syntax with all includes and global defines.

## Syntax Changes ##
Some syntax changes still have to be done. However, their number must be kept as low as possible.

  * Each file starts with namespace header. This is the only major change so far needed to better facilitate nested namespaces.

  * Static fields are fully declarated inline together with their initializers, because everything should be moved inline.

  * "<" and ">" must be be put in parentheses when are part of expression inside template parameter, to let parser easily look over declarations.