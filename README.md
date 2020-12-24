# mse_generating_datasets_for_photogrammetry
Issue tracker (Trello): https://trello.com/b/37KOTgk3/photogrammetry

# Инструкция по запуску #

## Как установить среду (Unreal Engine 4) ##

### Для Ubuntu:

Для установки необходимо скомпилировать исходный код, выложенный на https://github.com/EpicGames/UnrealEngine. Чтобы получить доступ к репозиторию необходимо создать учетную запись на сайте Unreal Engine https://www.unrealengine.com/en-US/, а также связать ее со своей учетной записью на github.

По завершении клонирования репозитория убедитесь, что у Вас хватает дискового пространства (100Гб) для компиляции исходного кода. 

О том, как билдить UE4:

1.Внутри корневого каталога в терминале запустите Setup.sh  для настройки файлов, необходимых для генерации файлов проекта.
>./Setup.sh

2.Теперь запустите GenerateProjectFiles.sh для генерации файлов проекта.
>./GenerateProjectFiles.sh

3.Чтобы построить проект, запустите make из терминала.
>make

В зависимости от спецификаций системы компиляция движка может занять от десяти минут до часа.

Для запуска редактора UE4 перейдите в каталог Engine/Binaries/Linux и щелкните по файлу UE4Editor.

Подробнее обо всем можно почитать здесь: https://docs.unrealengine.com/en-US/Platforms/Linux/BeginnerLinuxDeveloper/SettingUpAnUnrealWorkflow/index.html

### Для Windows, macOS:

Для установки Unreal Engine 4 используется Epic Games Launcher. Перейдите на сайт Unreal Engine https://www.unrealengine.com/en-US/ и нажмите на кнопку Get Unreal в правом верхнем углу. Перед загрузкой программы запуска необходимо будет создать учётную запись.

## Как загрузить проект ##

Склонируйте данный репозиторий cебе на жесткий диск и запустите файл app.uproject в корневом каталоге проекта.

## Как вызвать интерфейс пользователя ##

Во вкладке toolbar в верхней части экрана выберите команду Run и нажмите ее.

## Как работать с приложением ##
Для формирования датасета необходимо выполнить загрузку модели  и настройки параметров сцены (камера, источник освещения, погодные условия).
Подготовка к съемке объекта состоит из выбора траектории, настроек камеры и изображения.
Траектория объекта задается через UI (вкладка export settings, пункт traectory).
После выбора траектории необходимо ввести число снимков, нужные настройки камеры и размеры изображения и нажать кнопку "make dataset".


Настройки сцены можно изменять как вручную(для координат источника освещения и камеры, углов, цвета освещения и т.д.), так и с помощью ползунков быстрых настроек(R - поворот, H - высота).

## Подготовка к запуску программы вне среды ##

Для успешного запуска приложения на ОС linux(Ubuntu) необходимо установить драйвер vulkan с помощью специальных комманд.

Инструкция для видеокарт intel и AMD:

$ sudo add-apt-repository ppa:oibaf/graphics-drivers

$ sudo apt update

$ sudo apt upgrade

$ apt install libvulkan1 mesa-vulkan-drivers vulkan-utils

Инструкция для Nvidia:

$ sudo add-apt-repository ppa:graphics-drivers/ppa

$ sudo apt upgrade

$ sudo apt install nvidia-graphics-drivers-396 nvidia-settings vulkan vulkan-utils

Инструкцию для других дистрибутивов можно получить на сайте https://linuxconfig.org/install-and-test-vulkan-on-linux
