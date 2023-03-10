#include <glm/gtx/string_cast.hpp>

void SetupProjectionMatrices(Assignment04 *A, float Ar) {
/**************
 Method Matrix(int N, glm::mat4 M) of object A,
 receives in N the number of the matrix that needs to be set, and the matrix in M
***************/

	glm::mat4 S;
	
	
	// Isometric projection
	S = glm::mat4(1);
    S = glm::rotate(glm::mat4(1),glm::radians(-45.0f),glm::vec3(0,1,0));
    S = glm::rotate(glm::mat4(1),glm::radians(35.26f),glm::vec3(1,0,0)) * S;
	S = glm::mat4(0.1f,0,0,0, 0,-Ar/10,0,0, 0,0,-0.01f,0, 0,0,0.5f,1)*S;

    A->Matrix(1, S); // sets the matrix corresponding to piece 1
 //   std::cout << Ar << std::endl;
//   std::cout << glm::to_string(glm::mat4(0.1f,0,0,0, 0,-Ar/10,0,0, 0,0,-0.01f,0, 0,0,0.5f,1)) << std::endl;

	// Dimetric
	S = glm::mat4(1);
    S = glm::rotate(glm::mat4(1),glm::radians(-45.0f),glm::vec3(0,1,0));
    S = glm::rotate(glm::mat4(1),glm::radians(20.0f),glm::vec3(1,0,0)) * S;
    S = glm::mat4(0.1f,0,0,0, 0,-Ar/10,0,0, 0,0,-0.01f,0, 0,0,0.5f,1)*S;

    A->Matrix(2, S); // sets the matrix corresponding to piece 2

    // Trimetric
    S = glm::mat4(1);
    S = glm::rotate(glm::mat4(1),glm::radians(-25.0f),glm::vec3(0,1,0));
    S = glm::rotate(glm::mat4(1),glm::radians(10.0f),glm::vec3(1,0,0)) * S;
    S = glm::mat4(0.1f,0,0,0, 0,-Ar/10,0,0, 0,0,-0.01f,0, 0,0,0.5f,1)*S;

    A->Matrix(3, S); // sets the matrix corresponding to piece 3



   // Cabinet
    S = glm::mat4(1);

    S = glm::mat4(1,0,0,0,0,1,0,0,-0.5* 0.7,-0.5*0.7,1,0,0,0,0,1);
    S = glm::mat4(0.1f,0,0,0, 0,-Ar/10,0,0, 0,0,-0.01f,0, 0,0,0.5f,1)*S;


    A->Matrix(4, S); // sets the matrix corresponding to piece 4

}
