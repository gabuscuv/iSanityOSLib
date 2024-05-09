#ifndef GDLoginWindow_H
#define GDLoginWindow_H

#include "./gdGenericWindow.h"

namespace godot 
{
	class GDLoginWindow : public GDGenericWindow 
	{
		GDCLASS(GDLoginWindow, GDGenericWindow)


	protected:
		static void _bind_methods() ;
		
	public:
		GDLoginWindow();
		~GDLoginWindow();

		void _process(double delta);
	};

}

#endif
