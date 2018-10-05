#include <gtkmm.h>
#include "MainWindow.h"


int main(int argc, char *argv[])
{
    Gtk::Main kit(argc, argv);

    MainWindow *window = new MainWindow("#Hashtag It!");

    Gtk::Main::run(*window);

    delete window;
    return 0;
}
