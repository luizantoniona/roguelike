set(SOURCES
Shape.cpp
CircleShape.cpp
RectangleShape.cpp
RegularShape.cpp
)

target_sources(${PROJECT_NAME} PUBLIC ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
