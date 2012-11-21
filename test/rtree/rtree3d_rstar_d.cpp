// Boost.Geometry Index
// Unit Test

// Copyright (c) 2011-2012 Adam Wulkiewicz, Lodz, Poland.

// Use, modification and distribution is subject to the Boost Software License,
// Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <rtree/test_rtree.hpp>

#include <boost/geometry/geometries/point_xy.hpp>
#include <boost/geometry/geometries/point.hpp>
#include <boost/geometry/geometries/box.hpp>

int test_main(int, char* [])
{
    typedef bg::model::point<double, 3, bg::cs::cartesian> P3dc;

    test_rtree<P3dc, bgi::rstar<4, 2> >();
    test_rtree<P3dc>(bgi::runtime::rstar(4, 2));
    
    return 0;
}