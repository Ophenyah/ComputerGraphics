

void SetupMatrices(Assignment03 *A) {
/**************
 Method Matrix(int N, glm::mat4 M) of object A,
 receives in N the number of the matrix that needs to be set, and the matrix in M
***************/

	glm::mat4 S;
	
	
	// To solve the puzzle: scale 2x proportionally, centered in (2,0,-3)
	S = glm::mat4(1);
	//glm::mat4 T = glm::translate(glm::mat4(1),glm::vec3(2,0,-3));
	//S = T*scale(glm::mat4(1),glm::vec3(2))*transpose(T)*S;
	S = inverse(translate(glm::mat4(1), glm::vec3(2,0,-3))) * S ;
	S = scale(glm::mat4(1),glm::vec3(2,2,2))*S;
	S = translate(glm::mat4(1), glm::vec3(2,0,-3)) * S;
	A->Matrix(1, S); // sets the matrix corresponding to piece 1

	/* x3 not x2*/

	// To solve the puzzle: scale 2x on an axis oriented 45 degrees between the x and z axis and passing through point (1,0,0)
	S = glm::mat4(1);
	S = inverse(translate(glm::mat4(1),glm::vec3(1,0,0))) * S;
	S = inverse(rotate(glm::mat4(1),glm::radians(45.0f),glm::vec3(0,1,0))) *S ;
 	S = scale(glm::mat4(1), glm::vec3(3,1,1)) * S;
	S = rotate(glm::mat4(1),glm::radians(45.0f),glm::vec3(0,1,0)) *S ;
	//S = scale(glm::mat4(1), glm::vec3(2)) * S;

	S = translate(glm::mat4(1),glm::vec3(1,0,0)) * S;
	A->Matrix(2, S); // sets the matrix corresponding to piece 2

	// To solve the puzzle: find it yourself! Hint: compose a rotation around an arbitrary point with a translation
	S = glm::mat4(1);
	S = translate(glm::mat4(1),glm::vec3(-2,0,-3)) * S;
	S = rotate(glm::mat4(1),glm::radians(45.0f),glm::vec3(0,1,0)) * S;
	S = translate(glm::mat4(1),glm::vec3(2,0,3)) * S;
	S = translate(glm::mat4(1),glm::vec3(-1,0,-1)) * S;
	A->Matrix(3, S); // sets the matrix corresponding to piece 3

	// To solve the puzzle: rotate 60 degree around the y axis, centered in (-1,0,-2)
	S = glm::mat4(1);
	S = inverse(translate(glm::mat4(1),glm::vec3(-1,0,-2))) * S;
	S = rotate(glm::mat4(1), glm::radians(60.0f) ,glm::vec3(0,1,0)) * S;
	S = translate(glm::mat4(1),glm::vec3(-1,0,-2)) * S;
	A->Matrix(4, S); // sets the matrix corresponding to piece 4

	// To solve the puzzle: rotate -90 degree around an arbitrary axis passing in (-1,0,0). The x axis can be aligned to this arbitrary direction with a rotation of -45 around the y axis.	
 	S = glm::mat4(1);
	S = inverse(translate(glm::mat4(1),glm::vec3(-1,0,0))) * S ;
	S = inverse(rotate(glm::mat4(1),glm::radians(-45.0f),glm::vec3(0,1,0))) * S;
	S = rotate(glm::mat4(1),glm::radians(-90.0f),glm::vec3(1,0,0)) * S;
	S = rotate(glm::mat4(1),glm::radians(-45.0f),glm::vec3(0,1,0)) * S;
	S = translate(glm::mat4(1),glm::vec3(-1,0,0)) * S ;
 	A->Matrix(5, S); // sets the matrix corresponding to piece 5

	// To solve the puzzle: find it yourself! Hint: compose a non-proportional scaling that halves the object along one of the main axes, centered in an arbitrary point, with a translation
	S = glm::mat4(1);
	S = glm::translate(glm::mat4(1),glm::vec3(3,0,-2)) * S;
	S = glm::scale(glm::mat4(1),glm::vec3(0.5f,1,1)) * S;
	S = inverse(glm::translate(glm::mat4(1),glm::vec3(3,0,-2))) * S;
	S = glm::translate(glm::mat4(1),glm::vec3(2,0,0)) * S;
	A->Matrix(6, S); // sets the matrix corresponding to piece 6

}
