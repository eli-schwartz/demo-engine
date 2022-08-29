project('pong-engine',
'cpp',
default_options: [
  'cpp_std=c++20'
  ])

source_files = [
'src/main.cpp',
'src/Window/Window.cpp',
'src/Object/Object.cpp',
'src/Engine/Engine.cpp',
'src/Boundary/Boundary.cpp',
'src/Ball/Ball.cpp',
]

include = include_directories(['subprojects/glm/glm'])

source_files_and_tests = source_files + 'src/Testing/Testing.cpp'

sdl = dependency('sdl2')

engine = static_library('engine', source_files_and_tests, dependencies: sdl, include_directories: include)
enginedep = declare_dependency(link_with: engine)
incdir = include_directories('subprojects')

executable('demo',
  'src/main.cpp',
  dependencies: [ 
    enginedep
    ],
  include_directories : incdir)
