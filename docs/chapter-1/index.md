---
title: Chapter 1
has_children: false
nav_order: 2
---

# Ubiquitous Language

## Agricoltore
Persona proprietaria della [Serra](#serra) o collaboratore autorizzato.

## Pianta 
Unità vegetale contenuta all'interno di un [Ambiente](#ambiente) della[Serra](#serra).

## Ambiente
Sezione di una [Serra](#serra) che contiene più [Piante](#piante). Una serra è composta da almeno un ambiente.

## Serra
Stabile suddiviso in [Ambienti](#ambiente) adibito alla coltivazione di [Piante](#pianta) che richiedano la stessa [Configurazione dell'ambiente](#configurazione-ambiente).

## Famiglia
Uno dei livelli di classificazione scientifica utilizzato dalle [Piante](#piante). Piante con caratteristiche simili vengono solitamente racchiuse all'interno della stessa famiglia.

## Ciclo vitale
L'insieme ordinato di tutte le [Fasi fenologiche]() di una [Pianta](#piante) che costituisce il suo percorso di vita.

## Fase Fenologica
Stadio del [Ciclo vitale]() delle [Piante](#piante), associato ad una certa [Configurazione della pianta]() e [dell'ambiente]().

## Configurazione
Insieme di [Parametri]() impostati dall'[Agricoltore]() validi durante una determinata [Fase Fenologica](). Si possono suddividere in [Configurazione della pianta ]() e [Configurazione dell'ambiente]().

### Configurazione della Pianta
Sottoinsieme di [Parametri]() relativi alla singola [Pianta](#piante) in una determinata [Fase fenologica](). Nello specifico i parametri da specificare possono essere:

- [Irrigazione]()
- [Umidità suolo]()
- [Temperatura Pianta]()
  
### Configurazione dell'Ambiente
Sottoinsieme di [Parametri]() relativi al singolo [Ambiente](). Nello specAmbnteifico i parametri da specificare possono essere:

- [Temperatura dell'aria]()
- [Umidità dell'aria]()
- [Illuminazione]()
- [Ventilazione]()
- [Composizione dell'Aria]()
- [Pressione dell'acqua]()
- [Sensori di movimento]()

## Parametro 
Un valore che il sistema utilizza per prendere decisioni su come comportarsi in modo autonomo.

## Temperatura dell'Aria
Un [Parametro](#parametro) della [Configurazione dell'Ambiente](#configurazione-ambiente) che specifica i gradi centrigradi (C°) rilevati nell'aria all'interno dell'[Ambiente]().
È campionata attraverso Sensori e modificata attraverso attuatori.
La temperatura dell'aria può essere regolata tramite un sistema di raffreddamento/riscaldamento.

## Umidità dell'Aria
Un [Parametro](#parametro) della [Configurazione dell'Ambiente](#configurazione-ambiente) che specifica, attraverso sensoristica, la quantità di vapore acqueo presente nell'aria in percentuale all'interno dell'[Ambiente]().
È campionata attraverso Sensori e modificata attraverso attuatori.

## Illuminazione Artificiale
Un [Parametro](#parametro) della [Configurazione dell'Ambiente](#configurazione-ambiente) che permette di controllare:
- [Temperatura colore]()
- [Intensità]()
- [Tempo Diurno]()
- [Tempo Notturno]()
  
#### Temperatura colore
Una caratteristica controllabile dell'[Illuminazione Artificiale]() associata ad una grandezza fisica che descrive la tonalità della luce.

#### Intensità
Una caratteristica controllabile dell'[Illuminazione Artificiale]() associata alla potenza della luce.

#### Tempo Diurno
Una caratteristica controllabile dell'[Illuminazione Artificiale]() che misura il quantitativo di minuti in cui l'illuminazione è accesa.

#### Tempo Diurno
Una caratteristica controllabile dell'[Illuminazione Artificiale]() che misura il quantitativo di minuti in cui l'illuminazione è spenta.

## Ventilazione
Un [Parametro](#parametro) della [Configurazione dell'Ambiente]() che permette di controllare se attivare il ricircolo dell'aria.

## Composizione dell'Aria
Un [Parametro](#parametro) della [Configurazione dell'Ambiente]() che rileva la miscela di sostanze aeriformi. 

## Pressione dell'Acqua
Un [Parametro](#parametro) della [Configurazione dell'Ambiente]() che rileva la pressione dell'acqua nei contenitori preposti all'[Irrigazione]().
Nel caso di rotture del sistema di [Irrigazione]() l'[Agricoltore]() può ricevere un [Warning]().

## Sensore di movimento
Un [Parametro](#parametro) della [Configurazione dell'Ambiente]() che specifica una sensibilità per intercettare movimenti significativi all'interno della [Serra](). In caso di movimenti sospetti può essere inviata un [Warning]() all'[Agricoltore](), e potrebbe essere richiesto una [Manutenzione Straordinaria]().

## Irrigazione
Un [Parametro](#parametro) della [Configurazione della Pianta]() volto alla regolazione della distribuzione dell'acqua ad una [Pianta]().

## Umidità suolo
Un [Parametro](#parametro) della [Configurazione della Pianta]() che controlla la percentuale di umidità del suolo attraverso l'utilizzo di sensori.

## Temperatura Pianta
Un [Parametro](#parametro) della [Configurazione della Pianta]() che controlla la temperatura interna della [Pianta]() attraverso l'utilizzo di sensori.

## Notifica
Un avviso per l'[Agricoltore]() che può essere di tipo:
- [Warning]()
- [Reminder]()

### Warning
Una [Notifica]() che avvisa l'[Agricoltore]() di una circostanza insolita che potrebbe richiedere una [Manutenzione Straordinaria]().

### Reminder
Una [Notifica]() che ricorda all'[Agricoltore]() l'esigenza di una [Manutenzione Saltuaria]().

## Storico
Raccolta di dati persistenti che provengono dal campionamento effettuato dai sensori installati nella [Serra]().

## Manutenzione
Operazione che richiede un intervento manuale da parte dell'[Agricoltore]().  
Si suddivide in:
- [Manutenzione Ordinaria]()
- [Manutenzione Saltuaria]()
- [Manutenzione Straordinaria]()

### Manutenzione Ordinaria
Una tipologia di [Manutenzione]() che viene eseguita a intervalli di tempo regolari.  
I tipi di interventi possibili sono:
- [Controllo visivo]()
- [Controllo ugelli]()

#### Controllo visivo
Un tipo di [Manutenzione Ordinaria]() che prevende il controllo della condizione della [Pianta]() all'interno della [Serra]() da parte dell'[Agricoltore]().

#### Controllo ugelli
Un tipo di [Manutenzione Ordinaria]() che prevende il controllo della condizione del sistema di irrigazione all'interno della [Serra]() da parte dell'[Agricoltore]().

### Manutenzione Saltuaria 
Una tipologia di [Manutenzione]() che non ha un andamento o una periodicità costante.
I tipi di interventi possibili sono:
- [Potatura]()
- [Fertirrigazione]()
- [Travaso]()
- [Cambio terriccio]()
- [Impollinazione]()

#### Potatura
Un tipo di [Manutenzione Saltuaria]() che prevede la rimozione di fogliame dalla [Pianta]() in eccesso qualora necessario.

#### Fertirrigazione
Un tipo di [Manutenzione Saltuaria]() che prevede l'aggiunta di fertilizzanti all'interno del sistema di [Irrigazione]().

#### Travaso
Un tipo di [Manutenzione Saltuaria]() che prevede lo spostamento in una nuova locazione della [Pianta]() all'interno della [Serra]() da parte dell'[Agricoltore]().

#### Cambio terriccio
Un tipo di [Manutenzione Saltuaria]() che prevede la sostituzione del terriccio in cui si trova la [Pianta]() al fine di ripristinare le sostanze nutritive necessarie nel caso in cui si esauriscano.

#### Impollinazione
Un tipo di [Manutenzione Saltuaria]() che prevede l'impiego di varie metodologie volte alla riproduzione delle [Piante]().  
Le metodologie possibili sono:
- [Insetti Impollinatori]()
- [Impollinazione manuale]()

##### Insetti Impollinatori
Una metodologia di [Impollinazione]() che prevede l'impiego di appositi insetti per effettuare l'operazione di impollinazione.

##### Impollinazione manuale
Una metodologia di [Impollinazione]() in cui l'[Agricoltore]() si occupa manualmente di distribuire il polline all'interno degli [Ambienti]() della [Serra]().

### Manutenzione Straordinaria
Una tipologia di [Manutenzione]() che viene eseguita manualmente dell'[Agricoltore]() a seguito di un [Warning]() inviato nel caso in cui il sistema non sia in grado di gestire il problema.  
I tipi di interventi possibili sono:
- [Trappole a feromoni]()
- [Pesticidi]()
- [Guasti impianto]()

#### Trappole a feromoni
Un tipo di [Manutenzione Straordinaria]() in cui l'[Agricoltore]() posiziona negli [Ambienti]() delle trappole al fine di evitare la proliferazione di insetti nocivi per la [Pianta]().

#### Pesticidi
Un tipo di [Manutenzione Straordinaria]() in cui l'[Agricoltore]() utilizza negli [Ambienti]() dei prodotti al fine di evitare la proliferazione di insetti nocivi per la [Pianta]().

#### Guasti impianto
Un tipo di [Manutenzione Straordinaria]() in cui l'[Agricoltore]() interviene ripristinando il corretto funzionamento della strumentazione della [Serra]().