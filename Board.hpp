#include "Direction.hpp"
#include <map>
#include <string>

using namespace std;

namespace ariel {
	
	class Board{
				
		private:
			std::map<u_int, std::map<u_int,char>> board;
			unsigned int start_row, end_row, start_col ,end_col;
			
		public:
			Board(){
				start_row = 0;
				end_row = 0;
				start_col = 0;
				end_col = 0;
			}
			
			~Board(){};

			void post(unsigned int row,unsigned int colum, Direction direct,const string &message);
			string read(unsigned int row,unsigned int colum, Direction direct,unsigned int length);
			void show();
	};
	
}
