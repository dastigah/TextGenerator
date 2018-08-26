#ifndef __BODYTEST_H
#define __BODYTEST_H

#include <cppunit/extensions/HelperMacros.h>

class BodyTest : public CppUnit::TestFixture{
	CPPUNIT_TEST_SUITE( BodyTest );
	//CPPUNIT_SUITE( method name );
	CPPUNIT_TEST_SUITE_END();
	private:

	protected:
		//TODO: Implement test cases
	public:
		void setUp(void);
		void tearDown(void);
};
#endif
