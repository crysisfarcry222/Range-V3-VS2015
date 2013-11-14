// Boost.Range library
//
//  Copyright Thorsten Ottosen, Neil Groves 2006 - 2008. 
//  Copyright Eric Niebler 2013.
//
//  Use, modification and distribution is subject to the
//  Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//
// For more information, see http://www.boost.org/libs/range/
//

#ifndef BOOST_RANGE_V3_RANGE_TRAITS_HPP
#define BOOST_RANGE_V3_RANGE_TRAITS_HPP

#include <utility>
#include <iterator>
#include <boost/range/v3/range_fwd.hpp>
#include <boost/range/v3/begin_end.hpp>

namespace boost
{
    namespace range
    {
        inline namespace v3
        {
            template<typename Rng>
            struct range_iterator
            {
                using type = decltype(range::begin(std::declval<Rng>()));
            };

            template<typename Rng>
            struct range_category
            {
                using type = typename std::iterator_traits<range_iterator_t<Rng>>::iterator_category;
            };

            template<typename Rng>
            struct range_value
            {
                using type = typename std::iterator_traits<range_iterator_t<Rng>>::value_type;
            };

            template<typename Rng>
            struct range_difference
            {
                using type = typename std::iterator_traits<range_iterator_t<Rng>>::difference_type;
            };

            template<typename Rng>
            struct range_pointer
            {
                using type = typename std::iterator_traits<range_iterator_t<Rng>>::pointer;
            };

            template<typename Rng>
            struct range_reference
            {
                using type = typename std::iterator_traits<range_iterator_t<Rng>>::reference;
            };
        }
    }
}

#endif
