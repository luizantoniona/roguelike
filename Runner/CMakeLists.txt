set(SOURCES
Runner.cpp
Game/GameRunner.cpp
MainMenu/MainMenuRunner.cpp
Upgrade/UpgradeRunner.cpp
)

target_sources(${PROJECT_NAME} PUBLIC ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})