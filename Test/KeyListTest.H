#ifndef __KEYLISTTEST_H
#define __KEYLISTTEST_H

#include <cppunit/extensions/HelperMacros.h>


class KeyListTest : public CppUnit::TestFixture{
	CPPUNIT_TEST_SUITE( KeyListTest );
	//CPPUNIT_TEST( test-case-name );
	CPPUNIT_TEST_SUITE_END();
private:

protected:
	void testTime(void);

public:
	void setUp(void);
	void tearDown(void);
};

#endif
