

#include<GL/glew.h>
#include<GL/glfw3.h>

int main(){

if( !glfwInit() )
{
	fprintf(stderr , "Failed to initalize GLFW\n");
	return -1;
}
glfwWindowHint(GLFW_SAMPLES,4);
glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR , 3);
glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR , 3);

GLFWwindow* window;
window= glfwCreateWindow( 1024 , 768 , "Tutorial 01 " , NULL , NULL );
if (window ==null ){
	fprintf ( stderr , "Failed to open GLFW window.\n ");
	glfwTerminate();
	return -1;
}
glfwMakeContextCurrent(window);
glewexperimental=true;
if ( glewInit() != GLEW_OK ){
	fprintf(stderr, "Failed to initialize glew\n");
	return -1;
}
