#include "window/window.hpp"

Window::Window(){
    cout << "WINDOW::Window()" << endl;
}

void Window::init(void *obj_param){
    //**Initiate glfw
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, false);
    window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, (title+"_"+build).c_str(), NULL, NULL);
    if (window == NULL){
        cout << "Failed to create GLFW window" << endl;
        glfwTerminate();
    }
    glfwMakeContextCurrent(window);
    //glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    //glfwSetCursorPosCallback(window, mouse_callback);

    //**Load glad
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        cout << "Failed to initialize GLAD" << endl;
    }

    //**OpenGL state
    glEnable(GL_DEPTH_TEST);
}

void Window::exe(void *obj_param){
    //while(!glfwWindowShouldClose(window)){
        //***Process timing
        currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;

        //***Clearing buffers
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
        
        //***Polling and swapping of buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    //}
}

void* Window::run(void *obj_param){
    cout << "WINDOW::run()" << endl;
    Thread *this_ = (Thread*)obj_param;
    this_->terminated = false;
    this_->shouldTerminate = false;
    init(obj_param);
    while(!this_->shouldTerminate & !glfwWindowShouldClose(window)){
        exe(obj_param);
        //cout << this_ << "_running..." << endl;
    }
    this_->terminated = true;
    cout << this_ << "_terminated" << endl;
}

GLFWwindow* Window::getWindow(){
    return window;
}