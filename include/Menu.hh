/*
**
** Made by MisterAlex
** And also Applelo (but a little)
**
*/

#ifndef MENU_HH_
# define MENU_HH_
# include "Buttons.hh"
# include "Engine.hh"
# include "Splash.hh"

typedef enum Step {
	SPLASH = 0,
	MAIN,
	GAME,
	CREDITS,
	LOOSE,
	EXIT
} Step;

class Menu {
private:
	Step _step;


public:
	Menu();
	virtual ~Menu();

	//Getter
	const Step getMenu() const;

	//Setter
	void setMenu(const Step step);


};

#endif /* !MENU_HH_ */
