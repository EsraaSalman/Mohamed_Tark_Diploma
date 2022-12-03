### PROJECT: FIRE ALARM PROJECT 
### GROUP NUMBER: 3
### This instruction was updated on: Dec 6, 2022.
### Supervised by: Eng.Eman Hesham
************************
#### Table of contents:
   * Contributers Name
   * Project Document
   * Project Video
   * Project Description
   * Project Courses
   * Programming Language
   * Technologies
   * Program Explanation
        
##### Contributers Name:
   * Mohamed Khalid Shahat
   * Yahya Tarek Ahmed
   * Abdelrahman Mohamed Sharaf
   * Esraa Mohamed Mostafa
   * Aliaa Ahmed Mohamed


##### Project Document
   <br /> Google docs link:


##### Project Video
   <br /> Google drive link:


##### Project Description: 
    * Display the current temprature through a guage ui
    * Fires an alarm (sound - light - warning sign in the UI) when a fire accident occurs
    * Press "Stop" button to stop the alarm in case of wrong detection
    * Press "History" button to Display the data of fires accident its content is:
       * Fire accident ID: the number of fire since operation
       * Fire accident date: day/month/year
       * Fire accident time: hours:miniutes:seconds  am/pm
       
##### Project courses:
    * Java project for Java course
    * Embedded Systems internship Intake42

 
##### Programming Language: 
    * Java for application
    * C++ for arduino

##### Technologies:
    * Java developer kit: JDK 8 
    * Apache NetBeans IDE version: 15
    * Scene Builder GLUON version: 8.5.0
    * Medusa library version: 8.0

##### Program Explanation:

   * GUI Package
       * SerialProtocol class: responisble for connection with ports (arduino board port in our application)
       * FireAlarm class: main 
       * FireAccidantChecking: contain our main functionality of checking fire condition and take actions towards the fire accidant
       * Client class: communicates with the server through two requests:
           * Tell server to record a fire 
           * Tell it show the recorded fires history 
       * FXML Controller class:contains  the client thread and the main thread responsible for checking fire accidant and also the FXML objects handlers
       * FireAlarm class:contains the main method responsible for launching the GUI
       
   * Server package
       * FireAccidant class: a customized node class for fire, each node represent the fire accidand data 
       * ListofFireAccidant class: a customized list class where its nodes are the fire occurence nodes  
       * ClientHandler class: responsible for checking the requests from the client and take actions towards it
       * Server class: waits for client requests
