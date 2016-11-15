#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>

#include <amy/connector.hpp>

BOOST_AUTO_TEST_CASE(should_construct_a_connector_instance) {
    boost::asio::io_service io_service;
    amy::connector connector(io_service);
}

BOOST_AUTO_TEST_CASE(should_be_opened_successfully) {
    boost::asio::io_service io_service;
    amy::connector connector(io_service);

    connector.open();
    BOOST_CHECK(connector.is_open());
}

BOOST_AUTO_TEST_CASE(should_be_closed_successfully) {
    boost::asio::io_service io_service;
    amy::connector connector(io_service);

    connector.open();
    BOOST_CHECK(connector.is_open());

    connector.close();
    BOOST_CHECK(!connector.is_open());
}

// vim:ft=cpp ts=4 sw=4 et
