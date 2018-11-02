## CSE481 notes 11.1.2018

Our scene is under `Assets/PolygonMini_Fantasy/Demo/Demo_Hex_Islands`

### TODOs:
1. Suggestion for soldiers moving across islands—>bridge?
2. Attach the effects to its location (TODO, find out how to scale size of effects)
3. Clone/Spawn soldiers at xxx position
	 - get the soldier GameObject, i.e. `Assets/MagicLeap/Examples/Models/Planets/Meshes`
	- create a public field under GameObject, i.e. `public GameObject cloneObject;` in ControllerScript.cs
	- attach soldier to the field under some GameObject, i.e. Main Camera
	-  i.e. When OnButtonDown, 
	```
	    // spawn new soldier
	   GameObject newObject = Instantiate(cloneObject);             
	   // at some position of the island             
	   newObject.transform.parent = GameObject.Find("GameObject1").transform;
	```

4. ray cast has a hit, hight light the target island.
- VirtualPointer.cs  — for highlight/not
- copy over to scripts/
- check whether raycast is good
- some code
                // RayCast                 
		// RayCastAll
		// Check whether hit + create a RayCastHit successfully
```
	RaycastHit[] hit = new RaycastHit[1];                 
	if (Physics.RaycastNonAlloc(_pointerRay.position, _pointerRay.forward, hit) > 0) 		   
	   // g                     
	   GameObject g = hit[0].transform.gameObject;
	   // g’s parent                     
	   GameObject g_parent = g.transform.parent.gameObject; 
	   // Find “Scene” so that I can have g as GameObject1, GameObject2, …                     
	   while (g_parent.transform.parent.gameObject.name != "Scene")                     
	   {                         
		g = g_parent;                         
		g_parent = g.transform.parent.gameObject;                     
	   }                      
	   //g should have the full island 		   
	   // Get the component Outline and enable it.                     
	   Outline o = g.GetComponent<Outline>();
	   if (!o.isActiveAndEnabled)                         
		o.enabled = true;
```
	

### Problems:
* Where does inputController come from?
	In `Assets/MagicLeap/Examples/Scenes`
	
* How to scale the effects?

* When do we need to attach scripts to a specific GameObject?
i.e. change colors, shape, transform(translation + rotation)
Then “this” gives the GameObject it attaches to and then I can change its components.

* How to solve certificate problem? (mldb install fail)
	- uninstall `com.company.xx`
	- change `build setting->player setting-> other settings->Bundle Identifier` to new xxx
	- copy over the certificate identified with the `com.company.xx`
	- some commands might be helpful
	```
		/Users/Anny/MagicLeap/mlsdk/v0.17.0
		/Users/Anny/MagicLeap/mlsdk/v0.17.0/tools/mldb/mldb

		/Users/Anny/MagicLeap/mlsdk/v0.17.0/tools/mldb/mldb devices

		/Users/Anny/MagicLeap/mlsdk/v0.17.0/tools/mldb/mldb uninstall com.company.productname
		Successfully uninstalled com.company.productname

		/Users/Anny/MagicLeap/mlsdk/v0.17.0/tools/mldb/mldb uninstall com.company.hellocube
		Successfully uninstalled com.company.hellocube
	```

* What are these for?
	ControllerTransform - position
	ControllerVisualizer - image and (triggers, button…)

* transform v.s. GameObject
	transform has hierarchy, GameObject attached to transform
	Read transform tutorial
	
* Remember to switch platform

* Remember to import MagicLeap package

* How to set certificate?
	ML certificate under `Project settings->player settings->LuminOS settings->Publish settings->ML Certificate`
	
* How to make it build?
	remember the zero iteration
	`Project settings->player settings->standalone settings->AutoGraphicAPI->OpenGLCore(top)`
