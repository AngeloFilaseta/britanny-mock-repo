// Agent partecipant in project testJaCaMo

/* Initial beliefs and rules */

/* Initial goals */

/* Plans */

+auction(service, D)[source(A)] <- .send(A,tell,bid(D,math.random * 100 + 10)).
{ include("$jacamoJar/templates/common-cartago.asl") }
{ include("$jacamoJar/templates/common-moise.asl") }
{ include("$moiseJar/asl/org-obedient.asl") }
