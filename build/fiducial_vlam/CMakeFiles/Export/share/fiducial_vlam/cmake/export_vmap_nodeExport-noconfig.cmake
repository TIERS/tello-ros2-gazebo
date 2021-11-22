#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "fiducial_vlam::vmap_node" for configuration ""
set_property(TARGET fiducial_vlam::vmap_node APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fiducial_vlam::vmap_node PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libvmap_node.so"
  IMPORTED_SONAME_NOCONFIG "libvmap_node.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS fiducial_vlam::vmap_node )
list(APPEND _IMPORT_CHECK_FILES_FOR_fiducial_vlam::vmap_node "${_IMPORT_PREFIX}/lib/libvmap_node.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
