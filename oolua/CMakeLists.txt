aux_source_directory(. DIR_LUA_SRCS)

include_directories(../lua)
add_library (ooluaLib ${DIR_LUA_SRCS})