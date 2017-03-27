# qt_bug_glib

Trigger the bug:

 * qmake && make
 * run netcat: nc -kl 5000
 * ./qt_bug_glib # click connect and then trigger (watch cpu usage)
 * QT_NO_GLIB=1 ./qt_bug_glib # cpu usage stays fine
