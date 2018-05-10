#ifndef BOOST_STD_SHARED_PTR_OVERRIDE
#define BOOST_STD_SHARED_PTR_OVERRIDE
 
// TEMP until have offical boost flag
//#define BOOST_USE_STD_SHARED_PTR

#ifdef BOOST_USE_STD_SHARED_PTR
#  include <memory>
#  define SELECTED_SHARED_PTR std::shared_ptr
#else
#  include <boost/shared_ptr.hpp> 
#  define SELECTED_SHARED_PTR boost::shared_ptr
#endif // BOOST_USE_STD_SHARED_PTR

#endif // BOOST_STD_SHARED_PTR_OVERRIDE_BOOST

