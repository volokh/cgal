// Copyright (c) 2005  INRIA Sophia-Antipolis (France) 
// All rights reserved.
//
// Authors : Monique Teillaud <Monique.Teillaud@sophia.inria.fr>
//           Sylvain Pion     <Sylvain.Pion@sophia.inria.fr>
// 
// Partially supported by the IST Programme of the EU as a Shared-cost
// RTD (FET Open) Project under Contract No  IST-2000-26473 
// (ECG - Effective Computational Geometry for Curves and Surfaces) 
// and a STREP (FET Open) Project under Contract No  IST-006413 
// (ACS -- Algorithms for Complex Shapes)

#ifndef CGAL_CURVED_KERNEL_GLOBAL_FUNCTIONS_ON_ROOTS_AND_POLYNOMIALS_2_2_H
#define CGAL_CURVED_KERNEL_GLOBAL_FUNCTIONS_ON_ROOTS_AND_POLYNOMIALS_2_2_H

CGAL_BEGIN_NAMESPACE

template< class AK, class OutputIterator>
inline
OutputIterator
solve( const typename AK::Polynomial_for_circles_2_2 & e1,
           const typename AK::Polynomial_for_circles_2_2 & e2,
           OutputIterator res )
{ return AK().solve_object()(e1,e2,res); }

template < class AK >
inline 
typename AK::Polynomial_for_circles_2_2
construct_polynomial_circle_2_2( const typename AK::FT& xc,
			       const typename AK::FT& yc,
			       const typename AK::FT& r_sq)
{ return AK().construct_polynomial_circle_2_2_object()(xc, yc, r_sq); }

template < class AK >
inline 
Sign sign_at( const typename AK::Polynomial_for_circles_2_2 & equation,
	      const typename AK::Root_for_circles_2_2 r)
{ return AK().sign_at_object()(equation, r); }

template <class AK>
typename AK::Root_for_circles_2_2
x_critical_point(const typename AK::Polynomial_for_circles_2_2 & c, bool i)
{ return AK().x_critical_points_object()(c,i); }

template <class AK, class OutputIterator>
OutputIterator
x_critical_points(const typename AK::Polynomial_for_circles_2_2 & c, 
	           OutputIterator res)
{ return AK().x_critical_points_object()(c,res); }

template <class AK>
typename AK::Root_for_circles_2_2
y_critical_point(const typename AK::Polynomial_for_circles_2_2 &c, bool i)
{ return AK().y_critical_points_object()(c,i); }

template <class AK, class OutputIterator>
OutputIterator
y_critical_points(const typename AK::Polynomial_for_circles_2_2 & c, 
                           OutputIterator res)
{ return AK().y_critical_points_object()(c,res); }

CGAL_END_NAMESPACE

#endif // CGAL_CURVED_KERNEL_GLOBAL_FUNCTIONS_ON_ROOTS_AND_POLYNOMIALS_2_2_H
