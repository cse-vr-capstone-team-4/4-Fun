#pragma strict

private var myPlate : plate;


function Start ()
{
    myPlate = GetComponent("TODO");
}


function Update ()
{
    if(Input.GetKeyUp(KeyCode.Space))
    {
        myPlate.enabled = !myPlate.enabled;
    }
}