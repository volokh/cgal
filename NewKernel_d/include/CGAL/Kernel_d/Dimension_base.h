#ifndef bd_h
#define db_h
#include <CGAL/Dimension.h>
#include <CGAL/assertions.h>
#include <CGAL/marcutils.h>
namespace CGAL {
template<class=Dynamic_dimension_tag> struct Dimension_base {
	//TODO: add some assertions
	Dimension_base(int dim=-1):dim_(dim){}
	int dimension()const{return dim_;}
	void set_dimension(int dim){dim_=dim;}
	private:
	int dim_;
};
template<int dim_> struct Dimension_base<Dimension_tag<dim_> > {
	Dimension_base(){}
	Dimension_base(int dim){CGAL_assertion(dim_==dim);}
	int dimension()const{return dim_;}
	void set_dimension(int dim){CGAL_assertion(dim_==dim);}
};
}
#endif

