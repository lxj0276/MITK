#-----------------------------------------------------------------------------
# GLEW
#-----------------------------------------------------------------------------

# Sanity checks
if(DEFINED GLEW_DIR AND NOT EXISTS ${GLEW_DIR})
  message(FATAL_ERROR "GLEW_DIR variable is defined but corresponds to non-existing directory")
endif()

set(proj GLEW)
set(proj_DEPENDENCIES )
set(GLEW_DEPENDS ${proj})

if(NOT DEFINED GLEW_DIR)

  set(patch_cmd ${CMAKE_COMMAND} -Dproj:STRING=${proj} -Dproj_target:STRING=glew -P ${CMAKE_CURRENT_LIST_DIR}/GenerateDefaultCMakeBuildSystem.cmake)

  ExternalProject_Add(${proj}
     LIST_SEPARATOR ${sep}
     URL ${MITK_THIRDPARTY_DOWNLOAD_PREFIX_URL}/glew-1.10.0.tgz
     URL_MD5 2f09e5e6cb1b9f3611bcac79bc9c2d5d
     PATCH_COMMAND ${patch_cmd}
     CMAKE_GENERATOR ${gen}
     CMAKE_ARGS
       ${ep_common_args}
     DEPENDS ${proj_DEPENDENCIES}
    )

  set(GLEW_DIR ${ep_prefix})
  mitkFunctionInstallExternalCMakeProject(${proj})

else()

  mitkMacroEmptyExternalProject(${proj} "${proj_DEPENDENCIES}")

endif()
