#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <godot_cpp/classes/window.hpp>

namespace godot {

class GDGenericWindow : public Window {
	GDCLASS(GDGenericWindow, Window)

protected:
	static void _bind_methods();

public:
	GDGenericWindow();
	~GDGenericWindow();

	void _process(double delta);
};

}

#endif
