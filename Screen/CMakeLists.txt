set(SOURCES
Game/GameScreen.cpp
MainMenu/MainMenuScreen.cpp
Upgrade/UpgradeScreen.cpp
Screen.cpp
)

target_sources(${PROJECT_NAME} PUBLIC ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})