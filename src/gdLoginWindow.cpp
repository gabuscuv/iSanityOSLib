#include "gdLoginWindow.h"
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/classes/label.hpp>


using namespace godot;

GDLoginWindow::GDLoginWindow() 
{
	//Window::Window();
	// Initialize any variables here.
    Label* label = memnew(Label);
	label->set_text("Hi Darling!");
    add_child(label);
}

void GDLoginWindow::_bind_methods() 
{
    GDGenericWindow::_bind_methods();
}



GDLoginWindow::~GDLoginWindow() {
	// Add your cleanup here.
}

void GDLoginWindow::_process(double delta) {
	//
	GDGenericWindow::_process(delta);
}
