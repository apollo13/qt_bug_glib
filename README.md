# qt_bug_glib

Trigger the bug:

 * qmake && make
 * ./qt_bug_glib # click trigger (watch cpu usage)
 * QT_NO_GLIB=1 ./qt_bug_glib # cpu usage stays fine
