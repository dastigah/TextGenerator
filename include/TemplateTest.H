#ifndef __TEMPLATETEST_H
#define __TEMPLATETEST_H

#include <cppunit/extensions/HelperMacros.h>

class TemplateTest : public CppUnit::TestFixture{
	CPPUNIT_TEST_SUITE( TemplateTest );
	//CPPUNIT_TEST( test-case-name );
	CPPUNIT_TEST_SUITE_END();
	private:

	protected:
		//TODO: Implement test cases
	public:
		void setUp(void);
		void tearDown(void);
};
#endif
