#include <iostream>
using namespace std;

// Init function. Sets up SDL and all of its subsystems.
void Init()
{
	cout << "Initializing game..." << endl;
}

// HandleEvents function. Gets all input from user.
void HandleEvents()
{
	cout << "Handling events..." << endl;
}

// Update function. Moves assets, calculates collisions and physics, etc.
void Update()
{
	cout << "Processing..." << endl;
}

// Render function. Updates the window with changes each frame.
void Render()
{
	cout << "Rendering..." << endl;
}

// Clean function. Deinitializes SDL and deallocates memory.
void Clean()
{
	cout << "Cleaning up..." << endl;
}

// Run function. Contains the primary game loop.
int Run()
{
	bool isRunning = true;
	char input;

	Init();
	while (isRunning) // Game loop.
	{
		HandleEvents(); // Input. 
		Update(); // Processing.
		Render(); // Output.
		// Exit the game. Comment out if you want to see the engine run infinitely.
		cout << "Do you want to quit? [y/n]: ";
		cin >> input;
		if (input == 'y')
			isRunning = false;
	}
	Clean();
	return 0;
}

// main function. Entry point of every C++ program.
int main()
{
	return Run();
}

