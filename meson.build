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

cmake = import('cmake')
sdl = cmake.subproject('SDL').dependency('SDL2')
glm = cmake.subproject('glm').dependency('glm')
includes = include_directories([ 'subprojects/glm', 'subprojects/SDL/include' ])

#message('cmake targets:\n -' + '\n -'.join(sdl_proj.target_list()))

engine = static_library('engine',
  sources: source_files,
  dependencies: [sdl, glm],
  include_directories: includes)

enginedep = declare_dependency(link_with: engine)
incdir = include_directories('subprojects')

executable('demo',
  'src/main.cpp',
  dependencies: [ 
    enginedep
    ],
  include_directories : incdir)
