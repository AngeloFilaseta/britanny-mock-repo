const persistenceServiceAddress = process.env.PERSISTENCE_SERVICE_ADDRESS || 'http://localhost'
const persistenceServicePort = process.env.PERSISTENCE_SERVICE_PORT || 80
export const persistenceService = persistenceServiceAddress + ":" + persistenceServicePort