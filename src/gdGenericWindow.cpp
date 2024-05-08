#include "gdGenericWindow.h"
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void GDGenericWindow::_bind_methods() 
{
	ClassDB::bind_method(D_METHOD("CloseRequested"), &GDGenericWindow::CloseRequested);
}

GDGenericWindow::GDGenericWindow() {
	//Window::Window();
	// Initialize any variables here.
	//
	connect("close_requested", Callable(this, "CloseRequested"));
}

GDGenericWindow::~GDGenericWindow() {
	// Add your cleanup here.
}

void GDGenericWindow::CloseRequested()
{
	hide();
}

void GDGenericWindow::_process(double delta) {
	//
	Window::_process(delta);
}