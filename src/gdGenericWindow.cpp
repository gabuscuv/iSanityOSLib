#include "gdGenericWindow.h"
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void GDGenericWindow::_bind_methods() 
{
	ClassDB::bind_method(D_METHOD("close_requested"), &GDGenericWindow::close_requested);
}

GDGenericWindow::GDGenericWindow() {
	//Window::Window();
	// Initialize any variables here.
	//
	connect("close_requested", Callable(this, "close_requested"));
}

GDGenericWindow::~GDGenericWindow() {
	// Add your cleanup here.
}

void GDGenericWindow::close_requested()
{
	hide();
}

void GDGenericWindow::_process(double delta) {
	//
	Window::_process(delta);
}