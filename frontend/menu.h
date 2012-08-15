void menu_init(void);
void menu_prepare_emu(void);
void menu_loop(void);
void menu_finish(void);

void menu_notify_mode_change(int w, int h, int bpp);
void menu_set_filter_list(void *filters);

enum g_opts_opts {
	OPT_SHOWFPS = 1 << 0,
	OPT_SHOWCPU = 1 << 1,
	OPT_NO_FRAMELIM = 1 << 2,
	OPT_SHOWSPU = 1 << 3,
	OPT_TSGUN_NOTRIGGER = 1 << 4,
};

enum g_scaler_opts {
	SCALE_1_1,
	SCALE_4_3,
	SCALE_4_3v2,
	SCALE_FULLSCREEN,
	SCALE_CUSTOM,
};

extern int g_opts, g_scaler;
extern int soft_scaling, analog_deadzone;
extern int filter;

extern int g_menuscreen_w;
extern int g_menuscreen_h;
