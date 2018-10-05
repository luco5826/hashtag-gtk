#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <iostream>
#include <gtkmm.h>
#include <string.h>
#include "Hashtag.h"

class MainWindow : public Gtk::Window
{
  public:
    MainWindow(const std::string &title);

    ~MainWindow();

  protected:
    Gtk::VBox *box = new Gtk::VBox();

    Gtk::Label phrase_label;
    Gtk::Entry *phrase = new Gtk::Entry();
    Gtk::Label hashtag_label;
    Gtk::Entry *hashtag = new Gtk::Entry();

    Gtk::Button button_confirm;

    void button_confirm_clicked();

    void show_widgets();
};
#endif