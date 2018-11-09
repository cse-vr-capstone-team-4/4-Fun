
Here are the instructions I was able to piece together for the Magic Leap. 
I would recommend working one of the beefy computers that can do the rendering 
for zero-time integration. 
If you develop on your laptop, you will need to build an APK and push it to the device. 
Both are described below.

Lmk if you have any questions / issues! 
Note that the Magic Leap is still very much in a beta (or even alpha) state, so updates are bound to happen often.

- Ethan
Magic Leap (w/ Unity) Installation Instructions

- Download the Unity
  Magic Leap Technical Preview (go to bottom of page, 
  click “Download Installer for Windows”, it can be installed alongside other Unity versions)

- Log In to the Magic Leap Creator Portal

  - If you get redirected to https://id.magicleap.com/auth-bad-request,
    make sure that your system time is set correctly.

  - If dual-booting w/ Linux, set linux to local time.

- Download the Magic Leap Package Manager (click “Download for Windows” at the right)

  - Install the Lumin SDK v0.17.0

- Set up MagicLeap Remote

- Follow the Hello Cube! Unity Tutorial to get a cube running in the simulator.

  - NOTE: Enabling Zero-Integration
    switches your graphics API to OpenGL. This won’t stick. To make it stick:

    - Go to Edit -> Project Settings -> Player, and select the first tab there (standalone settings)...

    - Open the 'Other Settings' section, and uncheck 'Auto Graphics API for Windows' An API list will appear.

    - Use the plus button to add 'OpenGLCore' to the API list.

    - Drag it to the top of the list. The editor will now switch to using OpenGL.

- You have 2 options to run your Unity app on the ML device:

  - Via ML Remote, rendered on your PC:
    If your machine meets the ML
    Remote System Requirements:

    - Connect the ML to your machine via the USB C cable

    - In ML Remote, click “Start Device,” make sure the status is green and you see a Red Leaper w/ a rotating circle

    - In Unity, hit “Play,” the rotating circle should become a solid circle, and your app should start.

  - Deploying the app to the device, rendered on the device

    - Based on the instructions here
      Ensure your device is in Creator
      Mode and allows untrusted sources

    - Download your temporary
      developer certificate

    - Make sure your Unity Project is configured correctly, basically modifying the “Player Settings” 
      with a name (e.g. edu.uw.netid.myappname), certificate (NOTE: you may need to type the cert
      path manually), and any extra privileges you need.

    - Plug in your device (you can check connectivity in MLRemote), and hit “Build and Run”! 
      For first time deployment, make sure you are wearing your device so you verify the developer 
      certificate when the dialog appears.
