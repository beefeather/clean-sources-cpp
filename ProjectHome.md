<table><tr><td>
<img src='https://clean-sources-cpp.googlecode.com/svn/webfiles/trunk/logo_big.png' align='right' width='188' height='300'></img>

<h1>Project “Roger”. Clean Sources C++.</h1>

An experimental project to try C++ with sources clean from old era burden: <i>forward declarations</i> and <i>includes</i>.<br>
<br>
<h4>There is:</h4>

<ol><li>a <a href='TheConcept.md'>concept</a> and<br>
</li><li>an experimental clang-based <a href='ClangBasedCompiler.md'>compiler prototype</a>.</li></ol>

<table height='30'></table>

<table><tr><td>
<a href='http://peter.rybin.spb.ru/roger'>
<img src='https://clean-sources-cpp.googlecode.com/svn/webfiles/trunk/tryit_button.svg'></img></a>
</td><td valign='center'>
<i>You can type C++ and compile it at the web-page.</i>
</td></tr></table>

</td></tr></table>

<table><tr><td>
<img src='http://clean-sources-cpp.googlecode.com/svn/webfiles/trunk/roger_snippet.png' width='416' height='426'></img>
</td><td width='450' valign='top'>
<h2>Keep standard C++ syntax, just make it simple</h2>
The programmer must assist C++ compiler in doing the look-up work by scattering a lot of extra constructions all over the source code.<br>
<br>
This much resembles <i>steampunk</i> nowadays and this could be changed.<br>
<br>
<h2>1. Get rid of the #include system.</h2>
Header files with #includes form a full second layer of programming, featuring variables (#define),<br>
conditional operators (#if) and recursion. Normally this should be a part of parser infrastructure.<br>
<br>
<h2>2. Drop all forwards.</h2>
These are mirror declarations. They are spread across the sources and give access to the class to some extent. However, the class should be declared once, in full, in one file exactly.<br>
<br>
<h2>3. Put everything back inline.</h2>
You place the function body where you think compiler should turn to parsing it. In fact the programmer's job is to write a function, the compiler's job is to decide on the proper moment to parse it.<br>
<br>
This, at compiler's expense, should make C++ sources much more human-readable, human-writable and IDE-able.<br>
<br>
</td></tr></table>

### Check out examples ###
A random academic project ([city-places-parser](https://code.google.com/p/city-places-parser/)) was found and converted to the new source format.

Compare [new sources](http://code.google.com/p/clean-sources-cpp/source/browse/trunk/examples/city-places-parser/roger/) ([raw files](http://clean-sources-cpp.googlecode.com/svn/trunk/examples/city-places-parser/roger/)) with the [classical C++ sources](http://code.google.com/p/clean-sources-cpp/source/browse/trunk/examples/city-places-parser/classic/) ([raw files](http://clean-sources-cpp.googlecode.com/svn/trunk/examples/city-places-parser/classic/)).

Did you notice the difference?