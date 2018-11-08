using UnityEngine;
 using System.Collections;
 
 public class CameraControl : MonoBehaviour {
     public Transform myTransform;
     public Transform target;
     
     private float offsetY = 1.5f;
     private float offsetZ = -6.0f;
     public Vector3 maxDistance;
     public Vector3 minDistance;
     public Vector3 curDistance;
     public bool cameraSetAt;
     
     public float smoothingSpeed = 1.0f;
     private float smoothingVelocity;
     
     
     void Awake(){
         target = GameObject.FindWithTag("TODO").GetComponent<Transform>();
         myTransform = transform;
     }
     // Use this for initialization
     void Start () {
         cameraSetAt = true;
         curDistance = new Vector3 (target.position.x, target.position.y + offsetY, target.position.z + offsetZ);
     }
     
     // Update is called once per frame
     void Update () {
         maxDistance = new Vector3 (target.position.x, target.position.y + offsetY, target.position.z + offsetZ);
         minDistance = new Vector3 (target.position.x, target.position.y, target.position.z);
         // Changes the cameras current position
         if(Input.GetButtonDown("TODO")){
             if(cameraSetAt){
                 cameraSetAt = false;
             }else{
                 cameraSetAt = true;
             }    
         }
     }
     
     void LateUpdate(){
 
         if(cameraSetAt)
             myTransform.position = maxDistance;
         if(!cameraSetAt)
             myTransform.position = minDistance;
         
     }
     void updateScale () {
        // Widen the object by 0.5
        myTransform.localScale += new Vector3(0.5F, 0.5F, 0.5F);
    }
     
 }