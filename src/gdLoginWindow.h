#ifndef GDLoginWindow_H
#define GDLoginWindow_H

#include "./gdGenericWindow.h"

namespace godot 
{
	class HBoxContainer;
	class String;
	class GDTextField;
	class Button;
	class Label;

	class GDLoginWindow : public GDGenericWindow 
	{
		GDCLASS(GDLoginWindow, GDGenericWindow)


	protected:
		static void _bind_methods() ;
	
	private:
	//Vector2 buttonSize = Vector2(10.0f,10.0f);
	GDTextField* UserField;
	GDTextField* PasswordField;
	Button* LoginButton;
	Label* MessageText;

	String valid_username;
	String valid_password;

	private:
	void check_login();

	public:
		GDLoginWindow();
		~GDLoginWindow();
		void _process(double delta);

		
		void set_valid_password(const String & input);
		void set_valid_username(const String &input);

		_FORCE_INLINE_ String get_valid_username() const{return valid_username;}
		
		_FORCE_INLINE_ String get_valid_password() const {return valid_password;}
	};

}

#endif
