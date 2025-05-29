#ifndef HALP_HPP
#define HALP_HPP

#include <string>

class Harl
{
	private:
		void debug( void ) const;
		void info( void ) const;
		void warning( void ) const;
		void error( void ) const;

	public:
		Harl();
		~Harl();

		void complain( std::string level ) const;
};

typedef	void (Harl::*function_p)(void) const;
int		getLevel(std::string level);

#endif