// Agent hello in project testJaCaMo

/* Initial beliefs and rules */

/* Initial goals */

!start.

/* Plans */

//whenever I have a goal !start and I believe in message(X),
//I will achieve this goal by doing .print(X)
+!start : message(X) <- .print(X).

//if the belief of the plan above isn't respected, then this is the default
+!start : true <- .print("hello world.").

{ include("$jacamoJar/templates/common-cartago.asl") }
{ include("$jacamoJar/templates/common-moise.asl") }

// uncomment the include below to have an agent compliant with its organisation
//{ include("$moiseJar/asl/org-obedient.asl") }
