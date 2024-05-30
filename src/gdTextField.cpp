#include "gdTextField.h"
#include <godot_cpp/classes/text_edit.hpp>
#include <godot_cpp/classes/label.hpp>


using namespace godot;

GDTextField::~GDTextField() {
	// Add your cleanup here.
}

GDTextField::GDTextField()
{
    GDTextField("Default Field");
}

GDTextField::GDTextField(String fieldName)
{
   	Label* fieldLabel = memnew(Label);
	fieldLabel->set_text(fieldName+": ");
	fieldTextedit = memnew(TextEdit);

	add_child(fieldLabel);
	add_child(fieldTextedit);

	fieldTextedit->set_custom_minimum_size(textEditSize);
	fieldTextedit->set_size(textEditSize);
}

void GDTextField::_bind_methods() 
{
}

void GDTextField::_process(double delta) 
{
	//
	HBoxContainer::_process(delta);
}

String GDTextField::get_textedit_string_field()
{
    return fieldTextedit->get_text();
}