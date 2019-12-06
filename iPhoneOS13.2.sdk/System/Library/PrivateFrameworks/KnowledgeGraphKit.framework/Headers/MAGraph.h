//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class MAGraphReference, NSCountedSet, NSMutableDictionary, NSRecursiveLock, NSString, NSUUID;
@protocol MAPersistentStoreProtocol, OS_dispatch_queue;

@interface MAGraph : NSObject <NSXMLParserDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    id <MAPersistentStoreProtocol> _persistentStore;
    NSMutableDictionary *_nodesByIdentifier;
    NSMutableDictionary *_nodesByLabel;
    NSMutableDictionary *_nodesByDomain;
    NSMutableDictionary *_edgesByIdentifier;
    NSMutableDictionary *_edgesByLabel;
    NSMutableDictionary *_edgesByDomain;
    unsigned int _lastNodeIdentifier;
    unsigned int _lastEdgeIdentifier;
    void _accessReadQueueKey;
    void _accessWriteQueueKey;
    NSUInteger _accessRead;
    NSUInteger _accessWrite;
    NSRecursiveLock *_accessLock;
    MAGraphReference *_myReference;
    NSCountedSet *_transactionDomainCounts;
    NSCountedSet *_registeredDomainCounts;
    NSUUID *_identifier;
    NSUInteger _version;
    long long _persistenceOptions;
    long long _persistenceCacheMode;
}

+ (id)graphWithGraph:(id)arg1 andDomains:(id)arg2;
+ (id)graphWithGraph:(id)arg1;
+ (id)graph;
+ (void)initialize;
+ (Class)edgeClassForLabel:(id)arg1 domain:(unsigned short)arg2;
+ (Class)edgeClass;
+ (Class)nodeClassForLabel:(id)arg1 domain:(unsigned short)arg2;
+ (Class)nodeClass;
+ (id)graphJSONURLWithPath:(id)arg1 andName:(id)arg2;
+ (id)graphMLURLWithPath:(id)arg1 andName:(id)arg2;
+ (id)dataURLWithPath:(id)arg1 andName:(id)arg2;
+ (void)deleteMarker:(id)arg1;
+ (BOOL)setMarkerAtURL:(id)arg1;
+ (BOOL)hasMarker:(id)arg1;
+ (BOOL)destroyPersistentStoreAtURL:(id)arg1 error:(id )arg2;
+ (BOOL)migratePersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id )arg3;
+ (BOOL)copyPersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id )arg3;
+ (id)persistentStoreURLWithPath:(id)arg1 andName:(id)arg2;
+ (void)disableKGDB;
+ (void)enableKGDB;
+ (id)persistentStoreFileExtension;
+ (Class)persistentStoreClass;
+ (void)initPersistenceFormatSwitch;
+ (void)performBitmapTest;
+ (id)visualStringWithFormat:(id)arg1 elements:(id)arg2;
+ (id)graphWithDefinitions:(id)arg1 constraints:(id)arg2 error:(id )arg3;
+ (BOOL)populateGraph:(id)arg1 withDefinitions:(id)arg2 constraints:(id)arg3 error:(id )arg4;
+ (id)graphWithVisualString:(id)arg1 error:(id )arg2;
+ (BOOL)scanMatchString:(id)arg1 definitions:(id )arg2 constraints:(id )arg3 forCreation:(BOOL)arg4 error:(id )arg5;
+ (BOOL)scanGraphElementOptionsString:(id)arg1 minimum:(NSUInteger )arg2 maximum:(NSUInteger )arg3 error:(id )arg4;
+ (id)scanGraphConstraintString:(id)arg1 error:(id )arg2;
+ (BOOL)scanGraphElementString:(id)arg1 type:(NSUInteger )arg2 optionalName:(id )arg3 label:(id )arg4 optionalDomains:(id )arg5 optionalProperties:(id )arg6 error:(id )arg7;
+ (id)graphWithMergedGraphs:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3;
@property(readonly, nonatomic) NSCountedSet *registeredDomainCounts; // @synthesize registeredDomainCounts=_registeredDomainCounts;
@property(readonly, nonatomic) NSCountedSet *transactionDomainCounts; // @synthesize transactionDomainCounts=_transactionDomainCounts;
@property(readonly, nonatomic) id <MAPersistentStoreProtocol> persistentStore; // @synthesize persistentStore=_persistentStore;
@property(readonly, nonatomic) long long persistenceCacheMode; // @synthesize persistenceCacheMode=_persistenceCacheMode;
@property(readonly, nonatomic) long long persistenceOptions; // @synthesize persistenceOptions=_persistenceOptions;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)waitUntilQuiescentUsingBlock:(CDUnknownBlockType)arg1;
- (void)readUsingBlock:(CDUnknownBlockType)arg1;
- (void)writeUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasPendingWrite;
- (BOOL)hasPendingRead;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)deregisterTransactionRequiredDomains;
- (void)deregisterRequiredDomainsToken:(id)arg1;
- (id)registerRequiredDomains:(id)arg1;
- (void)requireDomains:(id)arg1;
- (void)_addRegisteredDomains:(id)arg1;
- (id)envelopGraphForNodes:(id)arg1 throughEdgesWithLabels:(id)arg2 copyProperties:(BOOL)arg3;
- (NSUInteger)_memoryFootprint:(id)arg1;
- (id)_edgesForDomain:(NSUInteger)arg1;
- (id)_edgesForLabel:(id)arg1;
- (id)abstractEdges;
- (id)allEdges;
- (id)_allEdges;
- (void)enumerateEdgesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateEdgesInDomain:(unsigned short)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (NSUInteger)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (NSUInteger)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2;
- (id)edgesDomains;
- (id)edgesLabels;
- (NSUInteger)edgesCountForLabel:(id)arg1;
- (NSUInteger)edgesCount;
- (id)edgesForDomains:(id)arg1;
- (NSUInteger)edgesCountForDomain:(unsigned short)arg1;
- (id)edgesForDomain:(unsigned short)arg1;
- (id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2;
- (id)edgesForLabel:(id)arg1;
- (id)edgesForIdentifiers:(id)arg1;
- (id)edgeForIdentifier:(unsigned int)arg1;
- (void)_removeMemoryEdges:(id)arg1;
- (void)_removeMemoryEdge:(id)arg1;
- (void)removeEdges:(id)arg1;
- (void)removeEdge:(id)arg1;
- (id)_addEdgeFromBase:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 saveToDatabase:(BOOL)arg4;
- (id)addEdgeFromBase:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3;
- (id)_addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 identifier:(unsigned int)arg7 saveToDatabase:(BOOL)arg8;
- (id)_addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 saveToDatabase:(BOOL)arg7;
- (id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3;
- (id)graphNode;
- (id)orphanNodes;
- (id)neighborNodesThroughEdgesWithLabel:(id)arg1;
- (id)neighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (id)_nodesForDomain:(NSUInteger)arg1;
- (id)_nodesForLabel:(id)arg1;
- (id)allNodes;
- (id)_allNodes;
- (void)enumerateNodesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateNodesInDomain:(unsigned short)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)nodesDomains;
- (id)nodesLabels;
- (NSUInteger)nodesCount;
- (id)addUniqueNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 identifyingPropertyKeys:(id)arg5 didCreate:(BOOL )arg6;
- (id)addUniqueNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(BOOL )arg5;
- (id)nodesForDomains:(id)arg1;
- (NSUInteger)nodesCountForDomain:(unsigned short)arg1;
- (id)nodesForDomain:(unsigned short)arg1 properties:(id)arg2;
- (id)nodesForDomain:(unsigned short)arg1;
- (NSUInteger)nodesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)anyNodeForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (NSUInteger)nodesCountForLabel:(id)arg1 domain:(unsigned short)arg2;
- (id)anyNodeForLabel:(id)arg1 domain:(unsigned short)arg2;
- (id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2;
- (NSUInteger)nodesCountForLabel:(id)arg1;
- (id)anyNodeForLabel:(id)arg1;
- (id)nodesForLabel:(id)arg1;
- (id)nodesForIdentifiers:(id)arg1;
- (id)nodeForIdentifier:(unsigned int)arg1;
- (id)_removeMemoryNode:(id)arg1;
- (id)_removeMemoryNodes:(id)arg1;
- (void)removeNodes:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)removeNodeEdges:(id)arg1;
- (id)_addNodeFromBase:(id)arg1 saveToDatabase:(BOOL)arg2;
- (id)addNodeFromBase:(id)arg1;
- (id)_addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 identifier:(unsigned int)arg5 saveToDatabase:(BOOL)arg6;
- (id)_addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 saveToDatabase:(BOOL)arg5;
- (id)addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;
- (id)addNodeWithLabel:(id)arg1;
- (void)_addNode:(id)arg1 withIdentifier:(unsigned int)arg2 saveToDatabase:(BOOL)arg3;
- (void)removeAllObjects;
- (void)invalidateMemoryCaches;
- (void)leaveBatch;
- (void)enterBatch;
@property(nonatomic) NSUInteger version; // @synthesize version=_version;
- (void)_setVersion:(NSUInteger)arg1;
- (unsigned int)lastEdgeIdentifier;
- (unsigned int)lastNodeIdentifier;
- (unsigned int)_nextEdgeIdentifier;
- (unsigned int)_nextNodeIdentifier;
- (void)_prepareFragmentedIdentifiers;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithPersistenceOptions:(long long)arg1 cacheMode:(long long)arg2;
- (BOOL)writeGraphJSONToURL:(id)arg1 error:(id )arg2;
- (id)_graphJSONDictionary;
- (id)initWithGraphJSONURL:(id)arg1;
- (void)_loadWithGraphJSONDictionary:(id)arg1;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)initWithGraphMLURL:(id)arg1;
- (id)dataRepresentation:(id )arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (BOOL)writeDataToURL:(id)arg1 error:(id )arg2;
- (id)_graphDictionary;
- (id)initWithDataURL:(id)arg1;
- (void)_loadWithGraphDictionary:(id)arg1;
- (void)_addEdge:(id)arg1 withIdentifier:(unsigned int)arg2 saveToDatabase:(BOOL)arg3;
- (BOOL)compareWithPersistedState;
- (void)deleteMarker;
- (void)setMarker;
- (BOOL)hasMarker;
- (void)closePersistentStore;
- (BOOL)migratePersistentStoreToURL:(id)arg1 error:(id )arg2;
- (BOOL)savePersistentStore;
- (void)savePersistentStoreWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)hasFullElementCache;
- (BOOL)hasPartialElementCache;
- (BOOL)hasAnyElementCache;
- (void)unloadDomains:(id)arg1;
- (void)unloadEdge:(id)arg1;
- (void)loadDomains:(id)arg1;
- (id)databaseURL;
- (id)initWithPersistentStoreURL:(id)arg1 options:(long long)arg2 cacheMode:(long long)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)initWithPersistentStoreURL:(id)arg1 options:(long long)arg2 cacheMode:(long long)arg3;
- (id)edgeFromFetchedRowWithIdentifier:(int)arg1 domain:(short)arg2 label:(id)arg3 weight:(float)arg4 sourceNodeIdentifier:(int)arg5 targetNodeIdentifier:(int)arg6;
- (id)nodeFromFetchedRowWithIdentifier:(int)arg1 domain:(short)arg2 label:(id)arg3 weight:(float)arg4;
- (id)matchWithVisualString:(id)arg1 error:(id )arg2;
- (id)matchWithVisualFormat:(id)arg1 elements:(id)arg2 error:(id )arg3;
- (id)matchWithDefinitions:(id)arg1 constraints:(id)arg2 error:(id )arg3;
- (id)selectBestRootNodeForPath:(id)arg1 withDefinitions:(id)arg2;
- (BOOL)_matchNode:(id)arg1 usingAbstractNode:(id)arg2 fromEdge:(id)arg3 atIteration:(NSUInteger)arg4 withDefinitions:(id)arg5 constraints:(id)arg6 unusedConstraints:(id)arg7 andSubGraph:(id)arg8 matchingNodeQueue:(id)arg9;
- (id)_constraintAbstractEdgesFromAbstractNode:(id)arg1 inConstraints:(id )arg2;
- (BOOL)updateGraphWithVisualString:(id)arg1;
- (void)breadthFirstSearchFromNode:(id)arg1 directed:(BOOL)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)depthFirstSearchFromNode:(id)arg1 directed:(BOOL)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)shortestPathFromNode:(id)arg1 toNode:(id)arg2 directed:(BOOL)arg3;
- (id)schema:(id)arg1;
- (BOOL)conformsToGraphSchema:(id)arg1;
- (id)edgeSchemeWithLabel:(id)arg1 domain:(unsigned short)arg2 sourceNode:(id)arg3 targetNode:(id)arg4;
- (id)nodeSchemeWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (void)mergeCopyWithGraph:(id)arg1 addedElements:(out id )arg2;
- (void)mergeCopyWithGraph:(id)arg1;
- (void)mergeReplaceWithGraph:(id)arg1 addedElements:(out id )arg2 removedElements:(out id )arg3;
- (void)mergeReplaceWithGraph:(id)arg1;
- (void)mergeReuseWithGraph:(id)arg1 addedElements:(out id )arg2;
- (void)mergeReuseWithGraph:(id)arg1;
- (void)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 saveToDatabase:(BOOL)arg4 createdNodes:(out id )arg5 createdEdges:(out id )arg6;
- (void)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 createdNodes:(out id )arg4 createdEdges:(out id )arg5;
- (id)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 saveToDatabase:(BOOL)arg4;
- (id)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3;

@end

