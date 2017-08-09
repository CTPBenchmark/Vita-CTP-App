/*
**
** Made by MisterAlex
** And also Applelo (but a little)
**
*/

//#include "../include/Menu.hh"
#include "../include/Splash.hh"
extern unsigned char _binary_img_WalloloRep_png_start;
extern unsigned char _binary_img_CTP_png_start;

int main() {
	//sceTouchSetSamplingState(SCE_TOUCH_PORT_FRONT, 1);
	int run = 1;

	vita2d_init();
	vita2d_set_clear_color(RGBA8(0x00, 0x00, 0x00, 0xFF));

	//Menu* menu = new Menu();
	vita2d_pvf *pvf;
	pvf = vita2d_load_default_pvf();
	std::map<std::string, vita2d_texture*> _textures;
	_textures["background"] = vita2d_load_PNG_buffer(&_binary_img_WalloloRep_png_start);
	_textures["ctp"] = vita2d_load_PNG_buffer(&_binary_img_CTP_png_start);
	Splash* splash = new Splash(_textures["ctp"]);
	//Background* background = new Background(_textures["background"], COLOR_CTP, WHITE, RGBA8(55, 55, 55, 200), 0.2);

	while (run) {
		vita2d_start_drawing();
		vita2d_clear_screen();
		splash->displaySplash();
		//background->displayBackground();
		//vita2d_pvf_draw_textf(pvf, 50, 50, WHITE, 1.0, "x : %.2f",
			//floor(-(background->getPosition())/1000)
		//);
		//vita2d_draw_rectangle(0, 0, SCREEN_L, SCREEN_H, COLOR_CTP);

		// if (menu->getMenu() == Step::SPLASH)
		// 	menu->splash();
		// if (menu->getMenu() == Step::MAIN)
		// 	menu->main();
		// if (menu->getMenu() == Step::GAME)
		// 	menu->game();
		// if (menu->getMenu() == Step::CREDITS)
		// 	menu->credits();
		// if (menu->getMenu() == Step::LOOSE)
		// 	menu->loose();
		// if (menu->getMenu() == Step::EXIT)
		// 	run=0;

		vita2d_end_drawing();
		vita2d_swap_buffers();
	}
	vita2d_fini();

	sceKernelExitProcess(0);
	return (0);
}
