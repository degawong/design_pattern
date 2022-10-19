/*
 * @Author: dega
 * @Date: 2022-10-19 14:45:06
 * @LastEditors: dega
 * @LastEditTime: 2022-10-19 15:21:10
 * @Description: 
 * @FilePath: \design_pattern\pimp\pimp.hpp
 */

#include <memory>

namespace pp {
	struct pimp {
		pimp();
		int add();
		int show();
	private:
		struct inside;
		std::shared_ptr<inside> pinside;
	};
}