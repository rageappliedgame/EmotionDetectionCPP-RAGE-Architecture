// Reminder: Modify typemap.dat to customize the header file generated by wsdl2h
/* VersionAndDependencies.h
   Generated by wsdl2h 2.8.24 from VersionAndDependencies.xsd and D:\RAGE_WORKSPACE\gsoap-2.8\gsoap\typemap.dat
   2015-11-05 15:49:07 GMT

   DO NOT INCLUDE THIS FILE DIRECTLY INTO YOUR PROJECT BUILDS
   USE THE soapcpp2-GENERATED SOURCE CODE FILES FOR YOUR PROJECT BUILDS

gSOAP XML Web services tools
Copyright (C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

/** @page page_notes Notes

@note HINTS:
 - Run soapcpp2 on VersionAndDependencies.h to generate the SOAP/XML processing logic.
   Use soapcpp2 -I to specify paths for #import
   To build with STL, 'stlvector.h' is imported from 'import' dir in package.
   Use soapcpp2 -j to generate improved proxy and server classes.
 - Use wsdl2h -c and -s to generate pure C code or C++ code without STL.
 - Use 'typemap.dat' to control namespace bindings and type mappings.
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Use Doxygen (www.doxygen.org) on this file to generate documentation.
 - Use wsdl2h -R to generate REST operations.
 - Use wsdl2h -nname to use name as the base namespace prefix instead of 'ns'.
 - Use wsdl2h -Nname for service prefix and produce multiple service bindings
 - Use wsdl2h -d to enable DOM support for xsd:anyType.
 - Use wsdl2h -g to auto-generate readers and writers for root elements.
 - Use wsdl2h -b to auto-generate bi-directional operations (duplex ops).
 - Use wsdl2h -U to map XML names to C++ Unicode identifiers instead of _xNNNN.
 - Use wsdl2h -u to disable the generation of unions.
 - Struct/class members serialized as XML attributes are annotated with a '@'.
 - Struct/class members that have a special role are annotated with a '$'.

@warning
   DO NOT INCLUDE THIS ANNOTATED FILE DIRECTLY IN YOUR PROJECT SOURCE CODE.
   USE THE FILES GENERATED BY soapcpp2 FOR YOUR PROJECT'S SOURCE CODE:
   THE soapStub.h FILE CONTAINS THIS CONTENT WITHOUT ANNOTATIONS.

@copyright LICENSE:
@verbatim
--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The wsdl2h tool and its generated software are released under the GPL.
This software is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
GPL license.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA

Author contact information:
engelen@genivia.com / engelen@acm.org

This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial-use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
@endverbatim

*/


//gsoapopt c++,w

/******************************************************************************\
 *                                                                            *
 * Definitions                                                                *
 *                                                                            *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/

#import "stl.h"	// STL containers (use option -s to remove STL dependency)

/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/


/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to typemap.dat to rerun wsdl2h:


*/

/******************************************************************************\
 *                                                                            *
 * Built-in Schema Types and Top-Level Elements and Attributes                *
 *                                                                            *
\******************************************************************************/

/// Built-in XSD type "xs:byte".
typedef char xsd__byte;


/******************************************************************************\
 *                                                                            *
 * Forward Declarations                                                       *
 *                                                                            *
\******************************************************************************/


//  Forward declaration of class version.
class version;


/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *                                                                            *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *                                                                            *
 *                                                                            *
\******************************************************************************/

/// @brief Top-level root element "":version
/// @brief "":version is a complexType.
///
/// class version operations:
/// - version* soap_new_version(soap*) allocate
/// - version* soap_new_version(soap*, int num) allocate array
/// - version* soap_new_req_version(soap*, ...) allocate, set required members
/// - version* soap_new_set_version(soap*, ...) allocate, set all public members
/// - version::soap_default(soap*) reset members to default
/// - int soap_read_version(soap*, version*) deserialize from a stream
/// - int soap_write_version(soap*, version*) serialize to a stream
/// - version* version::soap_dup(soap*) returns deep copy of version, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - version::soap_del() deep deletes version data members, use only after version::soap_dup(NULL) (use soapcpp2 -Ed)
class version
{ public:
/// Element "id" of XSD type xs:string.
    std::string                          id                             1;	///< Required element.
/// Element "major" of XSD type xs:byte.
    xsd__byte                            major                          1;	///< Required element.
/// Element "minor" of XSD type xs:byte.
    xsd__byte                            minor                          1;	///< Required element.
/// Element "build" of XSD type xs:byte.
    xsd__byte*                           build                          0;	///< Optional element.
/// Element "revision" of XSD type xs:string.
    std::string*                         revision                       0;	///< Optional element.
/// Element "maturity" of XSD type xs:string.
    std::string                          maturity                       1;	///< Required element.
/// class version_dependencies operations:
/// - version_dependencies* soap_new_version_dependencies(soap*) allocate
/// - version_dependencies* soap_new_version_dependencies(soap*, int num) allocate array
/// - version_dependencies* soap_new_req_version_dependencies(soap*, ...) allocate, set required members
/// - version_dependencies* soap_new_set_version_dependencies(soap*, ...) allocate, set all public members
/// - version_dependencies::soap_default(soap*) reset members to default
/// - int soap_read_version_dependencies(soap*, version_dependencies*) deserialize from a stream
/// - int soap_write_version_dependencies(soap*, version_dependencies*) serialize to a stream
/// - version_dependencies* version_dependencies::soap_dup(soap*) returns deep copy of version_dependencies, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - version_dependencies::soap_del() deep deletes version_dependencies data members, use only after version_dependencies::soap_dup(NULL) (use soapcpp2 -Ed)
    class version_dependencies
    {
/// Vector of depends of length 0..unbounded.
    std::vector<
/// class version_dependencies_depends operations:
/// - version_dependencies_depends* soap_new_version_dependencies_depends(soap*) allocate
/// - version_dependencies_depends* soap_new_version_dependencies_depends(soap*, int num) allocate array
/// - version_dependencies_depends* soap_new_req_version_dependencies_depends(soap*, ...) allocate, set required members
/// - version_dependencies_depends* soap_new_set_version_dependencies_depends(soap*, ...) allocate, set all public members
/// - version_dependencies_depends::soap_default(soap*) reset members to default
/// - int soap_read_version_dependencies_depends(soap*, version_dependencies_depends*) deserialize from a stream
/// - int soap_write_version_dependencies_depends(soap*, version_dependencies_depends*) serialize to a stream
/// - version_dependencies_depends* version_dependencies_depends::soap_dup(soap*) returns deep copy of version_dependencies_depends, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - version_dependencies_depends::soap_del() deep deletes version_dependencies_depends data members, use only after version_dependencies_depends::soap_dup(NULL) (use soapcpp2 -Ed)
    class version_dependencies_depends
    {
/// __item wraps "xs:string" simpleContent.
    std::string                          __item                        ;
/// Attribute "minVersion" of XSD type xs:string.
   @std::string*                         minVersion                     0;	///< Optional attribute.
/// Attribute "maxVersion" of XSD type xs:string.
   @std::string*                         maxVersion                     0;	///< Optional attribute.
    }>                                  *depends                        0;
    }                                    dependencies                   1;	///< Required element.
/// A handle to the soap struct context that manages this instance when instantiated by a context or NULL otherwise (automatically set).
    struct soap                         *soap                          ;
};


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *                                                                            *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *                                                                            *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * XML Data Binding                                                           *
 *                                                                            *
\******************************************************************************/


/**

@page page_XMLDataBinding XML Data Binding

SOAP/XML services use data bindings contractually bound by WSDL and auto-
generated by wsdl2h and soapcpp2 (see Service Bindings). Plain data bindings
are adopted from XML schemas as part of the WSDL types section or when running
wsdl2h on a set of schemas to produce non-SOAP-based XML data bindings.

The following readers and writers are C/C++ data type (de)serializers auto-
generated by wsdl2h and soapcpp2. Run soapcpp2 on this file to generate the
(de)serialization code, which is stored in soapC.c[pp]. Include "soapH.h" in
your code to import these data type and function declarations. Only use the
soapcpp2-generated files in your project build. Do not include the wsdl2h-
generated .h file in your code.

Data can be read in XML and deserialized from:
  - a file descriptor, using soap->recvfd = fd
  - a socket, using soap->socket = ...
  - a C++ stream, using soap->is = ...
  - a buffer, using the soap->frecv() callback

Data can be serialized in XML and written to:
  - a file descriptor, using soap->sendfd = fd
  - a socket, using soap->socket = ...
  - a C++ stream, using soap->os = ...
  - a buffer, using the soap->fsend() callback

The following options are available for (de)serialization control:
  - soap->encodingStyle = NULL; to remove SOAP 1.1/1.2 encodingStyle
  - soap_mode(soap, SOAP_XML_TREE); XML without id-ref (no cycles!)
  - soap_mode(soap, SOAP_XML_GRAPH); XML with id-ref (including cycles)
  - soap_set_namespaces(soap, struct Namespace *nsmap); to set xmlns bindings


@section default Top-level root elements of schema ""

  - <version> @ref version
    @code
    // Reader (returns SOAP_OK on success):
    soap_read_version(struct soap*, version*);
    // Writer (returns SOAP_OK on success):
    soap_write_version(struct soap*, version*);
    @endcode

*/

/* End of VersionAndDependencies.h */