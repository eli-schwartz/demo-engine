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
'src/Ball/Ball.cpp'
]


sdl = dependency('sdl2')
glm = dependency('glm')

executable('demo',
  source_files,
  dependencies: [sdl, glm])
