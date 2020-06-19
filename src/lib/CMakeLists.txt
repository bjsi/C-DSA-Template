add_library(template template.c)

target_include_directories(template PUBLIC includes)
set_target_properties(template PROPERTIES PUBLIC_HEADER includes/template.h)

set_target_properties(template PROPERTIES SOVERSION 1)

install(TARGETS template
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  PUBLIC_HEADER DESTINATION include
)
