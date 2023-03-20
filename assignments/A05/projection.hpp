#define GLM_FORCE_RADIANS
#include <glm/gtx/string_cast.hpp>

void SetupProjectionMatrices(Assignment05 *A, float Ar) {
/**************
 Method Matrix(int N, glm::mat4 M) of object A,
 receives in N the number of the matrix that needs to be set, and the matrix in M
***************/

	glm::mat4 S;
	
	
	// Fov-y = 60 deg
	S = glm::mat4(1);
    S = glm::perspective(glm::radians(60.0f),Ar,0.1f,50.0f);
    S[1,1] *= -1;

	A->Matrix(1, S); // sets the matrix corresponding to piece 1

	// Fov-y = 105 deg
	S = glm::mat4(1);
    S = glm::perspective(glm::radians(105.f),Ar,0.1f,50.0f);
    S[1,1] *= -1;
    A->Matrix(2, S); // sets the matrix corresponding to piece 2

	// Fov-y = 25 deg
	S = glm::mat4(1);
    S = glm::perspective(glm::radians(25.0f),Ar,0.1f,50.0f);
    S[1,1] *= -1;
    A->Matrix(3, S); // sets the matrix corresponding to piece 3

	// Right View, Fov-x = 45 deg
    //I'm not sure at all what we are supposed to do
	S = glm::perspective(glm::radians(45.0f),Ar,0.1f,50.0f);
    S[1,1] *= -1;
    S = glm::rotate(S,glm::radians(90.0f),glm::vec3(0,1,0));
	A->Matrix(4, S); // sets the matrix corresponding to piece 4

}
