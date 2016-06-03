This example demonstrates some strange effects when instantiating QWidget with non-default font from Qt plugin.

Reproducing on Windows. Project consists of two parts: main window and plugin. To reproduce segfault one can simply press "Load plugin" button and close the window (or press "Unload plugin" after it and close the window).

The Arial font setted for loaded widget gets into QFontCache and after the library is unloaded clearing this cache will cause segfault inside Qt.
