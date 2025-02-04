#pragma once
#include <string>
#include <GL/glew.h>
class GLSLProgram
{
public:
    GLSLProgram();
    ~GLSLProgram();

    void compileShaders(const std::string& vertexShaderFilePath, const std::string& fragmentShaderFilepath);

    void linkShaders();
	void releaseShaders();
    void addAttribute(const std::string& attributeName);

    void use();
    void unuse();
private:

    int _numAttributes;

    void compileShader(const std::string& filePath, GLuint id);

    GLuint _programID;

    GLuint _vertexShaderID;
    GLuint _fragmentShaderID;
};

