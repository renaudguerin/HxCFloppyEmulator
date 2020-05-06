// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "floppy_streamer_window.h"
#include "gui_strings.h"

#include <stdint.h>
extern "C"
{
	#include "libhxcfe.h"
	#include "usb_hxcfloppyemulator.h"
}

#include "cb_floppy_streamer_window.h"
#include "fl_mouse_box.h"

floppy_streamer_window::floppy_streamer_window() {
  { window = new Fl_Window(1330, 620, "Ludo Floppy Disk Toolkit");
    window->user_data((void*)(this));
    { Fl_Group* o = new Fl_Group(1050, 306, 275, 84, "Track / Side selection");
      o->box(FL_ENGRAVED_FRAME);
      o->labeltype(FL_EMBOSSED_LABEL);
      o->labelsize(12);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { track_number_slide = new Fl_Value_Slider(1056, 322, 269, 19, "Track number");
        track_number_slide->type(1);
        track_number_slide->labelsize(12);
        track_number_slide->textsize(12);
        track_number_slide->callback((Fl_Callback*)disk_streamer_window_callback, (void*)(this));
      } // Fl_Value_Slider* track_number_slide
      { side_number_slide = new Fl_Value_Slider(1055, 354, 270, 19, "Side number");
        side_number_slide->type(1);
        side_number_slide->labelsize(12);
        side_number_slide->textsize(12);
        side_number_slide->callback((Fl_Callback*)disk_streamer_window_callback, (void*)(this));
      } // Fl_Value_Slider* side_number_slide
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(1050, 50, 275, 172, "Status");
      o->box(FL_ENGRAVED_FRAME);
      o->labeltype(FL_ENGRAVED_LABEL);
      o->labelsize(12);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { x_pos = new Fl_Output(1055, 65, 265, 15);
        x_pos->labelsize(10);
        x_pos->textsize(10);
      } // Fl_Output* x_pos
      { y_pos = new Fl_Output(1055, 81, 265, 15);
        y_pos->labelsize(10);
        y_pos->textsize(10);
      } // Fl_Output* y_pos
      { global_status = new Fl_Output(1055, 97, 265, 16);
        global_status->labelsize(10);
        global_status->textsize(10);
      } // Fl_Output* global_status
      { object_txt = new Fl_Text_Display(1055, 116, 265, 101);
        object_txt->labelsize(10);
        object_txt->textsize(10);
        object_txt->user_data((void*)(this));
      } // Fl_Text_Display* object_txt
      o->end();
    } // Fl_Group* o
    { Fl_Button* o = new Fl_Button(1240, 589, 85, 28, "Connect");
      o->callback((Fl_Callback*)floppy_streamer_connect, (void*)(this));
    } // Fl_Button* o
    { floppy_map_disp = new Fl_Group(0, 1, 1050, 576, "Track stream");
      floppy_map_disp->box(FL_ENGRAVED_FRAME);
      floppy_map_disp->labeltype(FL_EMBOSSED_LABEL);
      floppy_map_disp->labelsize(12);
      floppy_map_disp->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      floppy_map_disp->end();
    } // Fl_Group* floppy_map_disp
    { Fl_Group* o = new Fl_Group(0, 575, 1050, 45);
      o->box(FL_ENGRAVED_FRAME);
      o->labeltype(FL_EMBOSSED_LABEL);
      o->labelsize(12);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { y_time = new Fl_Value_Slider(727, 577, 300, 25, "full y time scale (us)");
        y_time->type(5);
        y_time->labelsize(12);
        y_time->textsize(12);
        y_time->callback((Fl_Callback*)disk_streamer_window_callback, (void*)(this));
      } // Fl_Value_Slider* y_time
      { x_offset = new Fl_Value_Slider(17, 577, 300, 24, "x offset (% of the track len)");
        x_offset->type(5);
        x_offset->labelsize(12);
        x_offset->textsize(12);
        x_offset->callback((Fl_Callback*)disk_streamer_window_callback, (void*)(this));
      } // Fl_Value_Slider* x_offset
      { x_time = new Fl_Slider(382, 577, 301, 25, "full x time scale");
        x_time->type(1);
        x_time->labelsize(12);
        x_time->callback((Fl_Callback*)disk_streamer_window_callback, (void*)(this));
      } // Fl_Slider* x_time
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(1050, 221, 275, 84, "Track analysis format");
      o->box(FL_ENGRAVED_FRAME);
      o->labeltype(FL_EMBOSSED_LABEL);
      o->labelsize(10);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { iso_mfm_bt = new Fl_Light_Button(1065, 239, 76, 15, "ISO MFM");
        iso_mfm_bt->labelsize(10);
        iso_mfm_bt->callback((Fl_Callback*)disk_streamer_window_callback, (void*)(this));
      } // Fl_Light_Button* iso_mfm_bt
      { iso_fm_bt = new Fl_Light_Button(1065, 254, 76, 15, "ISO FM");
        iso_fm_bt->labelsize(10);
        iso_fm_bt->callback((Fl_Callback*)disk_streamer_window_callback, (void*)(this));
      } // Fl_Light_Button* iso_fm_bt
      { amiga_mfm_bt = new Fl_Light_Button(1065, 269, 76, 15, "AMIGA MFM");
        amiga_mfm_bt->labelsize(10);
        amiga_mfm_bt->callback((Fl_Callback*)disk_streamer_window_callback, (void*)(this));
      } // Fl_Light_Button* amiga_mfm_bt
      { membrain_bt = new Fl_Light_Button(1149, 269, 76, 15, "MEMBRAIN");
        membrain_bt->labelsize(10);
        membrain_bt->callback((Fl_Callback*)disk_streamer_window_callback, (void*)(this));
      } // Fl_Light_Button* membrain_bt
      { tycom_bt = new Fl_Light_Button(1149, 254, 76, 15, "TYCOM");
        tycom_bt->labelsize(10);
        tycom_bt->callback((Fl_Callback*)disk_streamer_window_callback, (void*)(this));
      } // Fl_Light_Button* tycom_bt
      { eemu_bt = new Fl_Light_Button(1149, 239, 76, 15, "E-Emu");
        eemu_bt->labelsize(10);
        eemu_bt->callback((Fl_Callback*)disk_streamer_window_callback, (void*)(this));
      } // Fl_Light_Button* eemu_bt
      { apple2_bt = new Fl_Light_Button(1065, 284, 76, 15, "Apple");
        apple2_bt->labelsize(10);
        apple2_bt->callback((Fl_Callback*)disk_streamer_window_callback, (void*)(this));
      } // Fl_Light_Button* apple2_bt
      { arburg_bt = new Fl_Light_Button(1149, 284, 76, 15, "Arburg");
        arburg_bt->labelsize(10);
        arburg_bt->callback((Fl_Callback*)disk_streamer_window_callback, (void*)(this));
      } // Fl_Light_Button* arburg_bt
      { aed6200p_bt = new Fl_Light_Button(1233, 239, 76, 15, "AED 6200P");
        aed6200p_bt->labelsize(10);
        aed6200p_bt->callback((Fl_Callback*)disk_streamer_window_callback, (void*)(this));
      } // Fl_Light_Button* aed6200p_bt
      { northstar_bt = new Fl_Light_Button(1233, 254, 76, 15, "NORTHSTAR");
        northstar_bt->labelsize(10);
        northstar_bt->callback((Fl_Callback*)disk_streamer_window_callback, (void*)(this));
      } // Fl_Light_Button* northstar_bt
      { heathkit_bt = new Fl_Light_Button(1233, 269, 76, 15, "HEATHKIT");
        heathkit_bt->labelsize(10);
        heathkit_bt->callback((Fl_Callback*)disk_streamer_window_callback, (void*)(this));
      } // Fl_Light_Button* heathkit_bt
      { decrx02_bt = new Fl_Light_Button(1233, 284, 76, 15, "DEC RX02");
        decrx02_bt->labelsize(10);
        decrx02_bt->callback((Fl_Callback*)disk_streamer_window_callback, (void*)(this));
      } // Fl_Light_Button* decrx02_bt
      o->end();
    } // Fl_Group* o
    { server_address = new Fl_Input(1125, 589, 110, 25, "Pauline IP");
      server_address->labelsize(8);
    } // Fl_Input* server_address
    { Fl_Button* o = new Fl_Button(1102, 393, 78, 40, "Read Disk");
      o->callback((Fl_Callback*)floppy_streamer_readdisk, (void*)(this));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(1077, 394, 23, 20, "+");
      o->callback((Fl_Callback*)floppy_streamer_trackup, (void*)(this));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(1052, 394, 23, 20, "-");
      o->callback((Fl_Callback*)floppy_streamer_down, (void*)(this));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(1052, 440, 48, 21, "recal");
      o->callback((Fl_Callback*)floppy_streamer_recalibrate, (void*)(this));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(1180, 393, 85, 40, "Read Track");
      o->callback((Fl_Callback*)floppy_streamer_readtrack, (void*)(this));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(1103, 436, 222, 25, "STOP !");
      o->callback((Fl_Callback*)floppy_streamer_stop, (void*)(this));
    } // Fl_Button* o
    { max_track = new Fl_Input(1134, 480, 40, 15, "Max track");
      max_track->labelsize(8);
      max_track->textsize(10);
    } // Fl_Input* max_track
    { min_track = new Fl_Input(1134, 465, 40, 15, "Min track");
      min_track->labelsize(8);
      min_track->textsize(10);
    } // Fl_Input* min_track
    { Side_0 = new Fl_Light_Button(1177, 464, 80, 15, "Side 0");
      Side_0->labelsize(10);
    } // Fl_Light_Button* Side_0
    { Side_1 = new Fl_Light_Button(1177, 479, 80, 15, "Side 1");
      Side_1->labelsize(10);
    } // Fl_Light_Button* Side_1
    { double_step = new Fl_Light_Button(1177, 494, 80, 15, "Double step");
      double_step->labelsize(10);
    } // Fl_Light_Button* double_step
    { index_delay = new Fl_Input(1134, 508, 40, 15, "Index delay (us)");
      index_delay->labelsize(8);
      index_delay->textsize(10);
    } // Fl_Input* index_delay
    { dump_lenght = new Fl_Input(1134, 493, 40, 15, "lenght (ms)");
      dump_lenght->labelsize(8);
      dump_lenght->textsize(10);
    } // Fl_Input* dump_lenght
    { ignore_index = new Fl_Light_Button(1177, 509, 80, 15, "Ignore index");
      ignore_index->labelsize(10);
    } // Fl_Light_Button* ignore_index
    { Fl_Button* o = new Fl_Button(1052, 415, 48, 21, "move");
      o->callback((Fl_Callback*)floppy_streamer_movehead, (void*)(this));
    } // Fl_Button* o
    { high_res = new Fl_Light_Button(1260, 464, 65, 15, "50Mhz ");
      high_res->labelsize(10);
    } // Fl_Light_Button* high_res
    { Fl_Button* o = new Fl_Button(1265, 393, 59, 40, "Spy bus");
      o->callback((Fl_Callback*)floppy_streamer_spybus, (void*)(this));
    } // Fl_Button* o
    { high_contrast = new Fl_Light_Button(1130, 529, 107, 15, "High contrast");
      high_contrast->labelsize(10);
    } // Fl_Light_Button* high_contrast
    { fat_dots = new Fl_Light_Button(1240, 529, 84, 15, "Fat dots");
      fat_dots->labelsize(10);
    } // Fl_Light_Button* fat_dots
    { dump_name = new Fl_Input(1095, 4, 230, 19, "Name");
      dump_name->labelsize(8);
      dump_name->textsize(10);
    } // Fl_Input* dump_name
    { index_name = new Fl_Input(1281, 24, 44, 20, "N\302\260");
      index_name->labelsize(8);
      index_name->textsize(10);
    } // Fl_Input* index_name
    { comment = new Fl_Input(1095, 24, 170, 19, "Comment");
      comment->labelsize(8);
      comment->textsize(10);
    } // Fl_Input* comment
    window->end();
    window->resizable(window);
  } // Fl_Window* window
}
