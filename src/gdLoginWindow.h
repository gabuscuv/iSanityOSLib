#ifndef GDLoginWindow_H
#define GDLoginWindow_H

#include "./gdGenericWindow.h"

namespace godot 
{
	class HBoxContainer;
	class String;

	class GDLoginWindow : public GDGenericWindow 
	{
		GDCLASS(GDLoginWindow, GDGenericWindow)


	protected:
		static void _bind_methods() ;
	
	private:
	Vector2 textEditSize = Vector2(110.0f,21.0f);
	HBoxContainer* new_Field(String nameField);

	public:
		GDLoginWindow();
		~GDLoginWindow();

		void _process(double delta);
	};

}

#endif
