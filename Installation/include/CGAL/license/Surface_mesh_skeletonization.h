// Copyright (c) 2016  GeometryFactory SARL (France).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org); you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation; either version 3 of the License,
// or (at your option) any later version.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// Author(s) : Andreas Fabri
//
// Warning: this file is generated, see include/CGAL/licence/README.md

#ifndef CGAL_LICENSE_SURFACE_MESH_SKELETONIZATION_H
#define CGAL_LICENSE_SURFACE_MESH_SKELETONIZATION_H

#include <CGAL/config.h>
#include <CGAL/license.h>




#ifdef CGAL_SURFACE_MESH_SKELETONIZATION_COMMERCIAL_LICENSE

#  if CGAL_SURFACE_MESH_SKELETONIZATION_COMMERCIAL_LICENSE < CGAL_RELEASE_DATE

#    if defined(CGAL_LICENSE_WARNING)

       CGAL_pragma_warning("Your commercial license for CGAL does not cover "
                           "this release of the Triangulated Surface Mesh Skeletonization package.")
#    endif

#    ifdef CGAL_LICENSE_ERROR
#      error "Your commercial license for CGAL does not cover this release \
of the Triangulated Surface Mesh Skeletonization package. \
You get this error, as you defined CGAL_LICENSE_ERROR."
#    endif // CGAL_LICENSE_ERROR

#  endif // CGAL_SURFACE_MESH_SKELETONIZATION_COMMERCIAL_LICENSE < CGAL_RELEASE_DATE

#else // no CGAL_SURFACE_MESH_SKELETONIZATION_COMMERCIAL_LICENSE

#  if defined(CGAL_LICENSE_WARNING)
     CGAL_pragma_warning("You use the CGAL Triangulated Surface Mesh Skeletonization package under "
                         "the terms of the GPLv3+.")
#  endif // CGAL_LICENSE_WARNING

#  ifdef CGAL_LICENSE_ERROR
#    error "You use the CGAL Triangulated Surface Mesh Skeletonization package under the terms of \
the GPLv3+. You get this error, as you defined CGAL_LICENSE_ERROR."
#  endif // CGAL_LICENSE_ERROR

#endif // no CGAL_SURFACE_MESH_SKELETONIZATION_COMMERCIAL_LICENSE

#endif // CGAL_LICENSE_CHECK_SURFACE_MESH_SKELETONIZATION_H
