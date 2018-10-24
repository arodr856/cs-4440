#include <stdio.h>
#include "passenger.h"

bool isWaiting(passenger p) {
	if (p.waiting)
		return true;
	else 
		return false;
}

void checkBaggage(passenger p) {
	p.baggageChecked = true;
}

void screen(passenger p) {
	p.screen = true;
}

void seat(passenger p) {
	p.seated = true;
}

void relaxed(passenger p) {
	if (p.baggageChecked == true && p.screen == true && p.seat == true) 
		p.waiting = false;
}
