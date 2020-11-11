#include "window/window.hpp"

Window::Window(){
    //shader("resources/shaderSources/3d/vShaderSource.vs", "resources/shaderSources/3d/fShaderSource.fs");
}

void Window::init(){
    //**Initiate glfw
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, false);
    window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, (title+"_"+build).c_str(), NULL, NULL);
    if (window == NULL){
        cout << "WINDOW::Failed to create GLFW window" << endl;
        glfwTerminate();
        return;
    }else   cout << "WINDOW::GLFW window created." << endl;
    glfwMakeContextCurrent(window);
    //glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    //glfwSetCursorPosCallback(window, mouse_callback);

    //**Load glad
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        cout << "WINDOW::Failed to initialize GLAD" << endl;
        return;
    }else   cout << "WINDOW::GLAD initialized." << endl;

    //**Load shaders
    shaders.push_back(Shader("resources/shaderSources/3d/vShaderSource.vs", "resources/shaderSources/3d/fShaderSource.fs"));
    shaders.push_back(Shader("resources/shaderSources/txtRendering/vShaderSource.vs", "resources/shaderSources/txtRendering/fShaderSource.fs"));

    //**OpenGL state
    glEnable(GL_DEPTH_TEST);
}

GLFWwindow* Window::getWindow(){
    return window;
}

void Window::loop(){
    while(!glfwWindowShouldClose(window)){
        //***Process timing
        currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;

        processInputs(window);

        //***Clearing buffers
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
        
        //***Polling and swapping of buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}

/*void* Window::loop_(void* obj_param){
    Window* tmp = (Window*)obj_param;
    GLFWwindow* window = tmp->getWindow();
    while(!glfwWindowShouldClose(window)){
        //***Process timing
        currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;

        processInputs(window);

        //***Clearing buffers
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
        
        //***Polling and swapping of buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}*/

/*void Window::link(){
    threadH.link((void*)&Window::loop_, this);
}*/

/*void Window::join(){
    threadH.join();
}*/

void Window::processInputs(GLFWwindow* window){
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS){
        glfwSetWindowShouldClose(window, true);
    }
}