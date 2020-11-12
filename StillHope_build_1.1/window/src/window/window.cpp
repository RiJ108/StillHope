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
    
    //**Setting the callBacks
    //glfwSetKeyCallback(window, key_callback);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    glfwSetCursorPosCallback(window, mouse_callback);

    //**Load glad
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        cout << "WINDOW::Failed to initialize GLAD" << endl;
        return;
    }else   cout << "WINDOW::GLAD initialized." << endl;

    //**Load shaders
    shader3D = Shader("resources/shaderSources/3d/vShaderSource.vs", "resources/shaderSources/3d/fShaderSource.fs");

    //**OpenGL state
    glEnable(GL_DEPTH_TEST);
}


void Window::loop(){
    //**Entity set-up
    Entity entity;
    entity.fillBuffers();

    //**Camera settings
    vec3 position = vec3(-2.0f, 0.0f, 0.0f);
    vec3 up = vec3(0.0f, 1.0f, 0.0f);
    vec3 front = vec3(1.0f, 0.0f, 0.0f);

    //**shader3D set-up
    shader3D.use();
    shader3D.setVec3("objectColor", vec3(1.0f, 0.5f, 0.31f));
    shader3D.setVec3("lightColor", vec3(1.0f, 1.0f, 1.0f));
    shader3D.setVec3("lightPos", vec3(-10.0f, 5.0f, -20.0f));
    shader3D.setMat4("projection", perspective(radians(FOV), (float)SCR_WIDTH/SCR_HEIGHT, 0.1f, 10000.0f));
    shader3D.setMat4("model", mat4(1.0f));

    while(!glfwWindowShouldClose(window)){
        //***Process timing
        currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;

        //***Refresh position
        /*position.x = cos(glfwGetTime())*2;
        position.y = cos(glfwGetTime()/2.0f);
        position.z = sin(glfwGetTime())*2;*/

        //**Rotate the entity on his Y-axis
        //entity.setFront(vec3(cos(glfwGetTime())/2.0, 0.0f, sin(glfwGetTime())/2.0));

        //**Process key press
        processInputs(window);

        //***Clearing buffers
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);


        //**Setting shader's uniform
        shader3D.use();
        shader3D.setVec3("frontView", player.getFront());
        shader3D.setMat4("view", player.look());
        shader3D.setVec3("viewPos", player.getPosition());

        //**Rendering calls
        entity.render(shader3D);
        
        //**Sleeping for capping refresh rate
        deltaTime = (double)1/fpsCap - deltaTime;
        if(deltaTime > 0)
            Sleep(deltaTime*1000);

        //***Polling and swapping of buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}

Player Window::getPlayer(){
    return player;
}

void Window::processInputs(GLFWwindow* window){
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
    if(glfwGetKey(window, GLFW_KEY_F1) == GLFW_PRESS){
        if(!generator.isInit())
            generator.init();
    }
    if(glfwGetKey(window, GLFW_KEY_F2) == GLFW_PRESS){
        if(generator.isInit()){
            if(!generator.getNeedGen()){
                cout << "WINDOW::Manual genThread call" << endl;
                generator.setNeedGen(true);
                sem_post(generator.getMutex(0));
            }
        }else   cout << "WINDOW::Generator not initiated yet, cannot comply !" << endl;
    }

    //_________________________________________________________________________________

    if(glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        player.moveK('Z', deltaTime);
    if(glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        player.moveK('S', deltaTime);
    if(glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        player.moveK('D', deltaTime);
    if(glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        player.moveK('Q', deltaTime);
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
    
}

void mouse_callback(GLFWwindow* window, double xpos, double ypos){
    //globalWindow->getPlayer()->moveM(xpos, ypos);
    if(glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS){
        //globalWindow->getPlayer()->moveM(xpos, ypos);
    }
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height){
    glViewport(0, 0, width, height);
}