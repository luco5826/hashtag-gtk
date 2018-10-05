#include "MainWindow.h"

MainWindow::MainWindow(const std::string &title) : button_confirm("Hashtag!"), phrase_label("Phrase"), hashtag_label("#Hashtag")
{
    this->set_title(title);
    this->set_default_size(400, 200);
    this->set_border_width(20);
    this->set_position(Gtk::WIN_POS_CENTER);
    this->set_resizable(false);

    hashtag->set_editable(false);

    button_confirm.signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::button_confirm_clicked));

    box->add(phrase_label);
    box->add(*phrase);
    box->add(hashtag_label);
    box->add(*hashtag);
    box->add(button_confirm);

    this->show_widgets();
    this->add(*box);
}

MainWindow::~MainWindow()
{
    delete box;
    delete phrase;
    delete hashtag;
    std::cout << "Deleted MainWindow" << std::endl;
}

void MainWindow::button_confirm_clicked()
{
    std::string result = Hashtag::hashTagizer(phrase->get_text());
    this->hashtag->set_text(result);
}

void MainWindow::show_widgets()
{
    phrase_label.show();
    phrase->show();
    hashtag_label.show();
    hashtag->show();
    button_confirm.show();
    box->show();
}
