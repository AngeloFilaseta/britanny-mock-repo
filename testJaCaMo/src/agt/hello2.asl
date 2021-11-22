// Agent hello2 in project testJaCaMo

/* Initial beliefs and rules */
//these are the same thing as the facts in prolog, easy yay
msg(fr,"Bonjour").
msg(br,"Bom dia").
msg(it,"Buon giorno").
msg(us,"Good morning").

/* Initial goals */

!start.

/* Plans */
+!start: country(C) & msg(C,M) <-  .print(M).
+!start : true <- .print("No greeting found with your country").

{ include("$jacamoJar/templates/common-cartago.asl") }
{ include("$jacamoJar/templates/common-moise.asl") }
{ include("$moiseJar/asl/org-obedient.asl") }
