/*
 * Label1.h
 *
 * 
 */

#ifndef _Label1_H_
#define _Label1_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Label1 : public Object {
public:
	/*! \brief Constructor.
	 */
	Label1();
	Label1(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Label1();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getClass();

	/*! \brief Set 
	 */
	void setClass(std::string  _class);

private:
	std::string _class;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Label1_H_ */
