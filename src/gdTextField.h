#ifndef GDTEXTFIELD_H
#define GDTEXTFIELD_H

#include <godot_cpp/classes/h_box_container.hpp>
namespace godot 
{
    class String;
class GDTextField : public HBoxContainer {
	GDCLASS(GDTextField, HBoxContainer)

protected:
	static void _bind_methods();
	
private:
    class TextEdit* fieldTextedit;
    Vector2 textEditSize = Vector2(110.0f,21.0f);

public:
	GDTextField();
	GDTextField(String fieldName);
	~GDTextField();
	String get_textedit_string_field();
	void _process(double delta);
	
};

};

#endif 