# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_fiducial_vlam_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED fiducial_vlam_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(fiducial_vlam_FOUND FALSE)
  elseif(NOT fiducial_vlam_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(fiducial_vlam_FOUND FALSE)
  endif()
  return()
endif()
set(_fiducial_vlam_CONFIG_INCLUDED TRUE)

# output package information
if(NOT fiducial_vlam_FIND_QUIETLY)
  message(STATUS "Found fiducial_vlam: 0.0.0 (${fiducial_vlam_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'fiducial_vlam' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${fiducial_vlam_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(fiducial_vlam_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_targets-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${fiducial_vlam_DIR}/${_extra}")
endforeach()
