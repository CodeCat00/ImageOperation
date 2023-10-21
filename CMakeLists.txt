cmake_minimum_required(VERSION 3.26)
project(ImageOperation)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(OpenCV_DIR "C:/Software/Opencv/sources/cmake-build-debug/install")
set(CMAKE_PREFIX_PATH "C:/Software/Qt/5.14.2/msvc2017_64")

include_directories(${OpenCV_INCLUDE_DIRS})

find_package(OpenCV REQUIRED)
find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(ImageOperation main.cpp
        view/source/ui/MainUi.cpp
        view/source/ui/MainUi.h
        view/slot/MainWindow.cpp
        view/slot/MainWindow.h
        control/action/InImageWidgetAction.cpp
        control/action/InImageWidgetAction.h
        control/action/UnitTextureWidgetAction.cpp
        control/action/UnitTextureWidgetAction.h
        control/action/StitchTextureWidgetAction.cpp
        control/action/StitchTextureWidgetAction.h
        model/ImageModel.cpp
        model/ImageModel.h
        control/action/MenuFileAction.cpp
        control/action/MenuFileAction.h
        control/action/MenuSettingAction.cpp
        control/action/MenuSettingAction.h
        control/action/MenuOperationAction.cpp
        control/action/MenuOperationAction.h
        control/record/FilePathRecord.cpp
        control/record/FilePathRecord.h
        control/util/ImageFormatConverter.cpp
        control/util/ImageFormatConverter.h
        model/ImageModel.cpp
        control/image/ImageProcess.cpp
        control/image/ImageProcess.h
        control/image/example/GrayscaleTransformation.cpp
        control/image/example/GrayscaleTransformation.h
        control/image/example/ImageSegmentation.cpp
        control/image/example/ImageSegmentation.h
        control/image/example/Morphology.cpp
        control/image/example/Morphology.h
        control/image/example/RestorationAndReconstruction.cpp
        control/image/example/RestorationAndReconstruction.h
        control/image/example/FrequencyDomainFiltering.cpp
        control/image/example/FrequencyDomainFiltering.h
        control/util/ImageMatDetailUtil.cpp
        control/util/ImageMatDetailUtil.h
        control/util/ImageOtherUtil.cpp
        control/util/ImageOtherUtil.h
)

target_link_libraries(ImageOperation ${OpenCV_LIBS})
target_link_libraries(ImageOperation
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
)
