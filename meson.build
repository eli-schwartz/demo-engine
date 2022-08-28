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
'src/Testing/Testing.cpp'
]

sdl = dependency('sdl2')

engine = static_library('engine', source_files, dependencies: sdl)
enginedep = declare_dependency(link_with: engine)

executable('demo',
  'src/main.cpp',
  dependencies: [ 
    enginedep
    ])
