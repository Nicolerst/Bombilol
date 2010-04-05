/*
 * bonus.h
 *
 *  Created on: 30 mars 2010
 *      Author: loicchollier
 */

#ifndef BONUS_H_
#define BONUS_H_
typedef enum { bombup, bombdown, fireup, firedown, fullfire } bonusType;



class Bonus {
	private:
	int x;
	int y;
	bonusType type;
};

#endif /* BONUS_H_ */
