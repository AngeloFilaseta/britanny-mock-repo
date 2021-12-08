// CArtAgO artifact code for project testJaCaMo

package sampling;

import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.Random;

import cartago.*;

public class SamplingArtifact extends Artifact {
	
	private List<String> devices;
	private Map<String, Integer> currentSamples;
	private Optional<Map<String, Integer>> lastSamples;
	private Map<String, Integer> deltaDevices;
	
	void init() { }
	
	@OPERATION void initDevices(List<String> devices) {
		this.devices = devices;
		this.currentSamples = new HashMap<>();
		this.lastSamples = Optional.empty();
		this.deltaDevices = new HashMap<>();
		System.out.println("Init" + devices);
		devices.forEach(d -> deltaDevices.put(d, 5000));
	}
	
	@OPERATION void sampleOperation() {
		try {
			Thread.sleep(5000);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		
		devices.forEach(d -> currentSamples.put(d, new Random().nextInt()));
		
		if(this.lastSamples.isEmpty()) {
			lastSamples = Optional.of(new HashMap<>(currentSamples));
			//TODO mandare dati su db o reperire l'ultima entry su db e controllarla?
		} else {
			System.out.println("Last samples " + this.lastSamples + "\n Current samples " + this.currentSamples);
			lastSamples.get().forEach((k,v) -> {
				if(Math.abs(currentSamples.get(k) - v) > this.deltaDevices.get(k)) {
					System.out.println("Carica su db!");
				}
				
			});
			lastSamples = Optional.of(new HashMap<>(currentSamples));
		}
		
		
	}
}

