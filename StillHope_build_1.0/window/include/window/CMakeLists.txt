set(FILES "${CMAKE_CURRENT_SOURCE_DIR}/${LIB_NAME}.hpp") 
set(SUBDIRECTORIES "") 
set(RELATIVE_PATH "include/${LIB_NAME}") 
#Add all subdirectories 
foreach(VAR ${SUBDIRECTORIES}) 
    add_subdirectory(${VAR}) 
endforeach() 
if(FILES) 
    #Add source files to target 
    target_sources("${LIB_NAME}" PRIVATE ${FILES}) 
    #Install our source files 
    install(FILES ${FILES} DESTINATION ${RELATIVE_PATH}) 
endif()