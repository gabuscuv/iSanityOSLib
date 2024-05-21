#include "gdLoginWindow.h"
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/classes/label.hpp>
//#include <godot_cpp/classes/margin_container.hpp>
//#include <godot_cpp/classes/box_container.hpp>
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/text_edit.hpp>
#include <godot_cpp/variant/utility_functions.hpp>


using namespace godot;

GDLoginWindow::GDLoginWindow() 
{
	//Window::Window();
	// Initialize any variables here.
	

	VBoxContainer* LoginUI = memnew(VBoxContainer);
	HBoxContainer* UserColumn = new_Field("Username");
    HBoxContainer* PasswordColumn = new_Field("Password");
    
	PasswordColumn->draw_set_transform(Vector2(0.0f,22.0f));
	
	LoginUI->add_child(UserColumn);
	LoginUI->add_child(PasswordColumn);

	add_child(LoginUI);
//	UtilityFunctions::push_warning(__PRETTY_FUNCTION__,":",UsernameTextedit->get_size());

}

HBoxContainer* GDLoginWindow::new_Field(String nameField)
{
	HBoxContainer* fieldColumn =memnew(HBoxContainer);
	// Maybe It could be a good a idea make a class for easy access.
   	Label* fieldLabel = memnew(Label);
	fieldLabel->set_text(nameField+": ");
	TextEdit* fieldTextedit = memnew(TextEdit);

	fieldColumn->add_child(fieldLabel);
	fieldColumn->add_child(fieldTextedit);

	fieldTextedit->set_custom_minimum_size(textEditSize);
	fieldTextedit->set_size(textEditSize);
	fieldTextedit->queue_redraw();

	return fieldColumn;
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
