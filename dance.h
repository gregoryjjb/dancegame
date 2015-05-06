// generated by Fast Light User Interface Designer (fluid) version 1.0302

#ifndef dance_h
#define dance_h
#include <FL/Fl.H>
#include <FL/Fl_JPEG_Image.H>
#include <FL/Fl_PNG_Image.H>
#include <FL/Fl_GIF_Image.H>
#include <FL/fl_draw.H>
void loadGameWindow(); 
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>

class Game_Window : public Fl_Double_Window {
  void _Game_Window();
public:
  Game_Window(int X, int Y, int W, int H, const char *L = 0);
  Game_Window(int W, int H, const char *L = 0);
  Game_Window();
private:
  int handle(int e); 
public:
  Fl_Box *box_background;
  Fl_Box *box_key;
  Fl_Box *carlton;
  Fl_Box *justin;
  Fl_Box *mj;
  Fl_Box *snoop;
private:
  inline void cb_Quit_i(Fl_Button*, void*);
  static void cb_Quit(Fl_Button*, void*);
};
extern Fl_Double_Window *Help;
#include <FL/Fl_Output.H>
Fl_Double_Window* make_help_window();
Game_Window* make_game_window();
extern Fl_Double_Window *Main;
Fl_Double_Window* make_menu_window();
#endif
