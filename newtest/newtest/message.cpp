#include "message.h"
#include <string>
using namespace std;
message::message(string t) {
	id = 100;
	text = t;
	id++;
	isfav = false;
}
message::message() {
	id = 100;
	text = "";
	id++;
	isfav = false;
}