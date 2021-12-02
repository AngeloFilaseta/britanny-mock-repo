---
title: Chapter 1
has_children: false
nav_order: 2
---

# Ubiquitous Language

## Agricoltore

## Pianta 
Unità vegetale contenuta all'interno di un _[Ambiente](#ambiente)_ della _[Serra](#serra)_.

## Ambiente
Sezione di una [Serra](#serra) che contiene più [Piante](#piante). Una serra è composta da almeno un ambiente.

## Serra
Stabile suddiviso in _[Ambienti](#ambiente)_ adibito alla coltivazione di [Piante](#pianta) che richiedano la stessa [Configurazione dell'ambiente](#configurazione-ambiente).

## Famiglia
Uno dei livelli di classificazione scientifica utilizzato dalle [Piante](#piante). Piante con caratteristiche simili vengono solitamente racchiuse all'interno della stessa famiglia.

## Ciclo vitale
L'insieme ordinato di tutte le [Fasi fenologiche]() di una [Pianta]() che costituisce il suo percorso di vita.

## Fase Fenologica
Stadio del [Ciclo vitale]() delle [Piante](), associato ad una certa [Configurazione della pianta]() e [dell'ambiente]().

## Configurazione
Insieme di [Parametri]() impostati dall'[Agricoltore]() validi durante una determinata [Fase Fenologica](). Si possono suddividere in [Configurazione della pianta ]() e [Configurazione dell'ambiente]().

### Configurazione della Pianta
Sottoinsieme di [Parametri]() relativi alla singola [Pianta]() in una determinata [Fase fenologica](). Nello specifico i parametri da specificare possono essere:

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
Un [Parametro](#parametro) della [Configurazione dell'Ambiente]() che specifica i gradi centrigradi (C°) rilevati nell'aria all'interno dell'[Ambiente]().
È campionata attraverso Sensori e modificata attraverso attuatori.
La temperatura dell'aria può essere regolata tramite un sistema di raffreddamento/riscaldamento.

## Umidità dell'Aria
Un [Parametro](#parametro) della [Configurazione dell'Ambiente]() che specifica, attraverso sensoristica, la quantità di vapore acqueo presente nell'aria in percentuale all'interno dell'[Ambiente]().
È campionata attraverso Sensori e modificata attraverso attuatori.

## Illuminazione Artificiale
Un [Parametro](#parametro) della [Configurazione dell'Ambiente]() che permette di controllare:
- [Temperatura colore]()
- [Intensità]()
- [Tempo Diurno]()
- [Tempo Notturno]()
  
#### Temperatura colore

#### Intensità

#### Tempo Diurno

#### Tempo Diurno

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
Un [Parametro](#parametro) della [Configurazione della Pianta]() che controlla //TODO

## Notifica

## Warning

## Reminder

## Storico


## Manutenzione

### Manutenzione Ordinaria

#### Controllo visivo

#### Travaso

#### Controllo ugelli

### Manutenzione Saltuaria 

#### Potatura

#### Fertirrigazione

#### Cambio terriccio

#### Impollinazione

##### Insetti Impollinatori
##### Impollinazione manuale

### Manutenzione Straordinaria

#### Trappole a feromoni

#### Pesticidi

