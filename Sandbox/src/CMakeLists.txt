set(SANDBOX_SOURCES
	"SandboxApp.cpp"
)

add_executable(Sandbox
	${SANDBOX_SOURCES}
)

target_link_libraries(Sandbox PRIVATE 
	Quark
)

set_property(TARGET Sandbox PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
quark_add_shaders(TARGET Sandbox DESTINATION "shaders" 
	VERTEX "shaders/shader.vert" 
	FRAGMENT "shaders/shader.frag"
)