add_library(rbc STATIC IMPORTED)
set_target_properties(rbc PROPERTIES IMPORTED_LOCATION ${RBC_LIB_SOURCE})

add_executable(test_cst_rbc_79_vspace test_rbc_79_vspace.c)

target_link_libraries(test_cst_rbc_79_vspace PUBLIC rbc)
target_link_libraries(test_cst_rbc_79_vspace PUBLIC OpenSSL::Crypto)
target_link_libraries(test_cst_rbc_79_vspace PRIVATE ${NTL_LIB})
target_link_libraries(test_cst_rbc_79_vspace PRIVATE ${GMP_LIB})

target_include_directories(test_cst_rbc_79_vspace PUBLIC ${RBC_LIB_INCLUDE})

