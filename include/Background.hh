/*
**
** Made by Applelo
**
*/

#ifndef BACKGROUND_HH_
# define BACKGROUND_HH_

# include "Utils.h"

class Background {
private:
	unsigned int _backgroundColor;
	unsigned int _iconColor;
	unsigned int _foregroundColor;
	float _speed;
	float _position;
	vita2d_texture* _texture;
	int _imgWidth;
	int _imgHeight;
	int _calc;
	// int _x;
	// int _y;
	// int _width;
	// int _height;

public:
	Background();
	Background(vita2d_texture* texture, unsigned int backgroundColor, unsigned int iconColor);
	Background(vita2d_texture* texture, unsigned int backgroundColor, unsigned int iconColor, unsigned int foregroundColor, float speed);
	virtual ~Background();

	//Setter
	void setTexture(vita2d_texture* texture);
	void setSpeed(float speed);
	void setBackgroundColor(unsigned int backgroundColor);
	void setIconColor(unsigned int iconColor);
	void setForegroundColor(unsigned int foregroundColor);

	//Getter
	float getPosition();

	// Display
	void displayBackground();


};

#endif /* !BACKGROUND_HH_ */
