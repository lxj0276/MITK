project(org_mitk_gui_qt_aicpregistration)

MACRO_CREATE_MITK_CTK_PLUGIN(
  EXPORT_DIRECTIVE AICPREGISTRATION_EXPORT
  EXPORTED_INCLUDE_SUFFIXES src
  MODULE_DEPENDS MitkQtWidgetsExt MitkAlgorithmsExt
)
