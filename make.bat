cls

del *.exe

windres Resource.rc -o Resource.o

g++ -mwindows -m64 -static -Wall -Wextra Download.cpp ^
 ^
 ..\Classes\ArgumentListClass.cpp ^
 ..\Classes\ButtonWindowClass.cpp ^
 ..\Classes\ClipboardClass.cpp ^
 ..\Classes\DownloadListViewWindowClass.cpp ^
 ..\Classes\DroppedFilesClass.cpp ^
 ..\Classes\EditWindowClass.cpp ^
 ..\Classes\FileClass.cpp ^
 ..\Classes\FontClass.cpp ^
 ..\Classes\HtmlFileClass.cpp ^
 ..\Classes\InternetClass.cpp ^
 ..\Classes\ListBoxWindowClass.cpp ^
 ..\Classes\ListViewWindowClass.cpp ^
 ..\Classes\MenuClass.cpp ^
 ..\Classes\MessageClass.cpp ^
 ..\Classes\StatusBarWindowClass.cpp ^
 ..\Classes\WindowClass.cpp ^
 ..\Classes\WindowClassClass.cpp ^
 ^
 Resource.o -o Download.exe -lwininet
