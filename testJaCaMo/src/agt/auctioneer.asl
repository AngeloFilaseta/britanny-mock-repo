// Agent auctioneer in project testJaCaMo

/* Initial beliefs and rules */

/* Initial goals */

!start.

/* Plans */

//broadcast a tutti i partecipanti l'inizio della auction
+!start <-  .broadcast(tell, auction(service, flight_ticket(paris,athens,"15/12/2015")))
			/*; .at("now + 10 seconds", {+!decide(flight_ticket(paris,athens,"15/12/2015"))})*/.

//doc .findall(term,query,result)
//term (variable or structure): the variable or structure whose instances will "populate" the list.
//query (logical formula): the formula used to find literals in the belief base; is has the same syntax as the plan context.
//result (list): the result list populated with found solutions for the query.

+bid(Service,_):
	.findall(b(V,A),bid(Service,V)[source(A)],L) &
	.length(L,4) //condizione per fare effettivamente i sub goal (alla quarta volta che riceve l'evento, dichiara il vincitore)
	<- 
	.max(L,b(V,W));
	.print("Winner for ", Service, " is ", W, " with ", V);
	.broadcast(tell, winner(Service,W)).
	
+!decide(Service)
   :  .findall(b(V,A),bid(Service,V)[source(A)],L)  // L is a list of all bids, e.g.: [b(77.7,alice), b(91.7,giacomo), ...]
   <- .max(L,b(V,W));
      .print("Winner for ", Service, " is ",W," with ", V, ". Options=",L);
      .broadcast(tell, winner(Service,W)).

{ include("$jacamoJar/templates/common-cartago.asl") }
{ include("$jacamoJar/templates/common-moise.asl") }
{ include("$moiseJar/asl/org-obedient.asl") }
