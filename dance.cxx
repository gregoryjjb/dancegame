// generated by Fast Light User Interface Designer (fluid) version 1.0302

#include "dance.h"
#include <FL/Fl_Double_Window.H>

void Game_Window::cb_Quit_i(Fl_Button*, void*) {
  Main->show();
//Game_Window::hide();
}
void Game_Window::cb_Quit(Fl_Button* o, void* v) {
  ((Game_Window*)(o->parent()))->cb_Quit_i(o,v);
}
Game_Window::Game_Window(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _Game_Window();
}

Game_Window::Game_Window(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _Game_Window();
}

Game_Window::Game_Window()
  : Fl_Double_Window(0, 0, 500, 525, "Dance Game") {
  clear_flag(16);
  _Game_Window();
}

void Game_Window::_Game_Window() {
this->box(FL_FLAT_BOX);
this->color(FL_GRAY0);
this->selection_color(FL_BACKGROUND_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->align(Fl_Align(FL_ALIGN_TOP));
this->when(FL_WHEN_RELEASE);
{ box_background = new Fl_Box(0, 0, 500, 400);
  box_background->color((Fl_Color)48);
} // Fl_Box* box_background
{ box_key = new Fl_Box(210, 410, 80, 80);
} // Fl_Box* box_key
{ carlton = new Fl_Box(170, 47, 175, 353);
} // Fl_Box* carlton
{ justin = new Fl_Box(166, 54, 135, 301);
} // Fl_Box* justin
{ mj = new Fl_Box(110, 58, 240, 317);
} // Fl_Box* mj
{ snoop = new Fl_Box(160, 88, 150, 332);
} // Fl_Box* snoop
{ Fl_Button* o = new Fl_Button(425, 5, 70, 20, "Quit");
  o->down_box(FL_DOWN_BOX);
  o->color((Fl_Color)36);
  o->selection_color((Fl_Color)43);
  o->labelcolor((Fl_Color)26);
  o->callback((Fl_Callback*)cb_Quit);
} // Fl_Button* o
end();
}

Fl_Double_Window *Help=(Fl_Double_Window *)0;

static void cb_Got(Fl_Button*, void*) {
  Main->position(200,200);
Main->show();
Help->hide();
}

Fl_Double_Window* make_help_window() {
  { Help = new Fl_Double_Window(300, 250);
    { Fl_Button* o = new Fl_Button(105, 210, 70, 20, "Got It!");
      o->callback((Fl_Callback*)cb_Got);
    } // Fl_Button* o
    { new Fl_Output(249, 10, 0, 25, "This Game is all about timing! ");
    } // Fl_Output* o
    { new Fl_Output(239, 36, 0, 25, "Make your character dance");
    } // Fl_Output* o
    { new Fl_Output(287, 63, 0, 25, "by matching the arrow key on screen!");
    } // Fl_Output* o
    { new Fl_Output(226, 90, 0, 25, "The more you get right,");
    } // Fl_Output* o
    { new Fl_Output(279, 117, 0, 25, "the faster the arrows will disappear!");
    } // Fl_Output* o
    { new Fl_Output(234, 144, 0, 25, "But don\'t make a mistake");
    } // Fl_Output* o
    { new Fl_Output(245, 171, 0, 25, "or you\'ll be Booed off stage!");
    } // Fl_Output* o
    Help->end();
  } // Fl_Double_Window* Help
  return Help;
}

Game_Window* make_game_window() {
  return new Game_Window(500,500,"Dancing Game");
}

Fl_Double_Window *Main=(Fl_Double_Window *)0;

static void cb_Let(Fl_Button*, void*) {
  //Game_Window::position(200,200);
//Game_Window::show();
loadGameWindow();
Main->hide();
}

static void cb_Wait(Fl_Button*, void*) {
  Help->position(200,200);
Help->show();
Main->hide();
}

Fl_Double_Window* make_menu_window() {
  { Main = new Fl_Double_Window(240, 220, "Main Menu");
    { Fl_Button* o = new Fl_Button(15, 155, 95, 20, "Let\'s Dance!");
      o->callback((Fl_Callback*)cb_Let);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(125, 155, 95, 20, "Wait, What?");
      o->callback((Fl_Callback*)cb_Wait);
    } // Fl_Button* o
    Main->end();
  } // Fl_Double_Window* Main
  return Main;
}
