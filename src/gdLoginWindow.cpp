#include "gdLoginWindow.h"
#include "gdTextField.h"
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/variant/utility_functions.hpp>


using namespace godot;

GDLoginWindow::GDLoginWindow() 
{
	//Window::Window();
	// Initialize any variables here.
	
	VBoxContainer* LoginUI = memnew(VBoxContainer);
	UserField = memnew(GDTextField("Username"));
    PasswordField = memnew(GDTextField("Password"));
	Button* LoginButton = memnew(Button);
    
	//LoginButton->set_custom_minimum_size(buttonSize);
	//LoginButton->set_size(buttonSize);
	LoginButton->set_text("Login!");

	LoginUI->add_child(UserField);
	LoginUI->add_child(PasswordField);
	LoginUI->add_child(LoginButton);

	add_child(LoginUI);
//	UtilityFunctions::push_warning(__PRETTY_FUNCTION__,":",UsernameTextedit->get_size());

}

void GDLoginWindow::_bind_methods() 
{
   // GDGenericWindow::_bind_methods();
}



GDLoginWindow::~GDLoginWindow() {
	// Add your cleanup here.
}

void GDLoginWindow::_process(double delta) {
	//
	GDGenericWindow::_process(delta);
}
