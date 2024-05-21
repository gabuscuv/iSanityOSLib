#ifndef GDLoginWindow_H
#define GDLoginWindow_H

#include "./gdGenericWindow.h"

namespace godot 
{
	class HBoxContainer;
	class String;
	class GDTextField;

	class GDLoginWindow : public GDGenericWindow 
	{
		GDCLASS(GDLoginWindow, GDGenericWindow)


	protected:
		static void _bind_methods() ;
	
	private:
	//Vector2 buttonSize = Vector2(10.0f,10.0f);
	GDTextField* UserField;
	GDTextField* PasswordField;

	public:
		GDLoginWindow();
		~GDLoginWindow();

		void _process(double delta);
	};

}

#endif
