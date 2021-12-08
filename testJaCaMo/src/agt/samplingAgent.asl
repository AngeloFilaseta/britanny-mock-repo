// Agent samplingAgent in project testJaCaMo

/* Initial beliefs and rules */

/* Initial goals */

!start.

/* Plans */

+!start : true <- +wait.
	
+wait <- .at("now + 2 seconds", {+hello}).

+hello <- .print("Hello"); -+wait.

{ include("$jacamoJar/templates/common-cartago.asl") }
{ include("$jacamoJar/templates/common-moise.asl") }

// uncomment the include below to have an agent compliant with its organisation
//{ include("$moiseJar/asl/org-obedient.asl") }
