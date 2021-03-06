#include "window/window.hpp"

Window::Window(){
    cout << "WINDOW::Window()" << endl;
    init();
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

void* Window::loop(){
    while(!glfwWindowShouldClose(window)){
        //***Process timing
        currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;

        processInputs();

        //***Clearing buffers
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
        
        //***Polling and swapping of buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}

/*void Window::run(){
    cout << "WINDOW::run()" << endl;
    inThread  = new pthread_t();
    pthread_create(inThread, NULL, (THREADFUNCPTR)loop(), (void *)this);
    cout << this << "_created and launched" << endl;
}*

void Window::join(){
    pthread_join(*inThread, NULL);
}*/

GLFWwindow* Window::getWindow(){
    return window;
}

void Window::processInputs(){
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS){
        glfwSetWindowShouldClose(window, true);
    }
}