#include "gdLoginWindow.h"
#include "gdTextField.h"
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/label.hpp>
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

void GDLoginWindow::set_valid_username(const String &input) { valid_username = input; }
void GDLoginWindow::set_valid_password(const String &input) { valid_password = input; }

void GDLoginWindow::_bind_methods()
{
	ClassDB::bind_method(D_METHOD("check_login"), &GDLoginWindow::check_login);

	// GDGenericWindow::_bind_methods();
	ADD_SIGNAL(MethodInfo("correct_login"));
	ClassDB::bind_method(D_METHOD("get_valid_username"), &GDLoginWindow::get_valid_username);
	ClassDB::bind_method(D_METHOD("set_valid_username", "p_username"), &GDLoginWindow::set_valid_username);
	ClassDB::add_property("GDLoginWindow", PropertyInfo(Variant::STRING, "valid_username"), "set_valid_username", "get_valid_username");

	ClassDB::bind_method(D_METHOD("get_valid_password"), &GDLoginWindow::get_valid_password);
	ClassDB::bind_method(D_METHOD("set_valid_password", "p_password"), &GDLoginWindow::set_valid_password);
	ClassDB::add_property("GDLoginWindow", PropertyInfo(Variant::STRING, "valid_password"), "set_valid_password", "get_valid_password");
}

void GDLoginWindow::check_login()
{

	if (
		valid_username == UserField->get_textedit_string_field() && valid_password == PasswordField->get_textedit_string_field())
	{
		emit_signal("correct_login");
	}
	else
	{
		MessageText->set_text("Invalid Username or Password");
	}
}

GDLoginWindow::GDLoginWindow()
{
	// Window::Window();
	//  Initialize any variables here.
	VBoxContainer *LoginUI = memnew(VBoxContainer);
	UserField = memnew(GDTextField("Username"));
	PasswordField = memnew(GDTextField("Password"));
	LoginButton = memnew(Button);
	MessageText = memnew(Label);

	// LoginButton->set_custom_minimum_size(buttonSize);
	// LoginButton->set_size(buttonSize);
	LoginButton->set_text("Login!");

	LoginUI->add_child(UserField);
	LoginUI->add_child(PasswordField);
	LoginUI->add_child(LoginButton);
	LoginUI->add_child(MessageText);

	LoginButton->connect("pressed", Callable(this, "check_login"));

	add_child(LoginUI);
}

GDLoginWindow::~GDLoginWindow()
{
	// Add your cleanup here.
}

void GDLoginWindow::_process(double delta)
{
	//
	GDGenericWindow::_process(delta);
}
