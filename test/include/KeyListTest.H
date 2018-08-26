#ifndef __KEYLISTTEST_H
#define __KEYLISTTEST_H

#include <cppunit/extensions/HelperMacros.h>
#include <map>

class KeyListTest : public CppUnit::TestFixture{
	CPPUNIT_TEST_SUITE( KeyListTest );
	//CPPUNIT_TEST( test-case-name );
	CPPUNIT_TEST_SUITE_END();
private:
	std::string testSingleFn,
				testMultipleFn,
				testComboFn;
				testInvalidSeparatorFn;

	std::map<std::string,std::string> 	testSingleMap,
										testMultipleMap,
										testComboMap;

	bool mapComparator(std::map<std::string,std::string> &,
						std::map<std::string, std::string> &);

protected:
	void testSingleWords(void);
	void testPhrases(void);
	void testCombination(void);
	void testInvalidSeparator(void);

public:
	void setUp(void);
	void tearDown(void);
};

#endif
