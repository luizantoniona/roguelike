set(SOURCES
Component.cpp
Background/Background.cpp
Background/BackgroundShape.cpp
Bar/Bar.cpp
Bar/HealthBar.cpp
Button/Button.cpp
Label/Label.cpp
)

target_sources(${PROJECT_NAME} PUBLIC ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})