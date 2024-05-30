#ifndef GDGENERICWINDOW_H
#define GDGENERICWINDOW_H

#include <godot_cpp/classes/window.hpp>

namespace godot {

class GDGenericWindow : public Window {
	GDCLASS(GDGenericWindow, Window)

protected:
	static void _bind_methods();
	
public:
	GDGenericWindow();
	~GDGenericWindow();
	void close_requested();
	void _process(double delta);
	
};




}

#endif
