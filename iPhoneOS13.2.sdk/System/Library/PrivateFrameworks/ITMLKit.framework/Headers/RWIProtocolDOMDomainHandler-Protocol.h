//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, RWIProtocolDOMHighlightConfig;

@protocol RWIProtocolDOMDomainHandler <NSObject>
- (void)setInspectedNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3;
- (void)focusWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3;
- (void)markUndoableStateWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)redoWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)undoWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)moveToWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(int))arg2 nodeId:(int)arg3 targetNodeId:(int)arg4 insertBeforeNodeId:(int )arg5;
- (void)getAttributesWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 nodeId:(int)arg3;
- (void)resolveNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolRuntimeRemoteObject *))arg2 nodeId:(int)arg3 objectGroup:(id )arg4;
- (void)pushNodeByPathToFrontendWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(int))arg2 path:(NSString *)arg3;
- (void)highlightFrameWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 frameId:(NSString *)arg3 contentColor:(id )arg4 contentOutlineColor:(id )arg5;
- (void)hideHighlightWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)highlightNodeListWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeIds:(NSArray *)arg3 highlightConfig:(RWIProtocolDOMHighlightConfig *)arg4;
- (void)highlightNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 highlightConfig:(RWIProtocolDOMHighlightConfig *)arg3 nodeId:(int )arg4 objectId:(id )arg5;
- (void)highlightSelectorWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 highlightConfig:(RWIProtocolDOMHighlightConfig *)arg3 selectorString:(NSString *)arg4 frameId:(id )arg5;
- (void)highlightQuadWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 quad:(NSArray *)arg3 color:(id )arg4 outlineColor:(id )arg5 usePageCoordinates:(BOOL )arg6;
- (void)highlightRectWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 x:(int)arg3 y:(int)arg4 width:(int)arg5 height:(int)arg6 color:(id )arg7 outlineColor:(id )arg8 usePageCoordinates:(BOOL )arg9;
- (void)setInspectModeEnabledWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 enabled:(BOOL)arg3 highlightConfig:(id )arg4 showRulers:(BOOL )arg5;
- (void)requestNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(int))arg2 objectId:(NSString *)arg3;
- (void)discardSearchResultsWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 searchId:(NSString *)arg3;
- (void)getSearchResultsWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 searchId:(NSString *)arg3 fromIndex:(int)arg4 toIndex:(int)arg5;
- (void)performSearchWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *, int))arg2 query:(NSString *)arg3 nodeIds:(id )arg4 caseSensitive:(BOOL )arg5;
- (void)insertAdjacentHTMLWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 position:(NSString *)arg4 html:(NSString *)arg5;
- (void)setOuterHTMLWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 outerHTML:(NSString *)arg4;
- (void)getOuterHTMLWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *))arg2 nodeId:(int)arg3;
- (void)getAccessibilityPropertiesForNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolDOMAccessibilityProperties *))arg2 nodeId:(int)arg3;
- (void)removeBreakpointForEventListenerWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 eventListenerId:(int)arg3;
- (void)setBreakpointForEventListenerWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 eventListenerId:(int)arg3;
- (void)setEventListenerDisabledWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 eventListenerId:(int)arg3 disabled:(BOOL)arg4;
- (void)getEventListenersForNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 nodeId:(int)arg3;
- (void)getAssociatedDataForNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(id ))arg2 nodeId:(int)arg3;
- (void)getDataBindingsForNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 nodeId:(int)arg3;
- (void)getSupportedEventNamesWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2;
- (void)removeAttributeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 name:(NSString *)arg4;
- (void)setAttributesAsTextWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 text:(NSString *)arg4 name:(id )arg5;
- (void)setAttributeValueWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 name:(NSString *)arg4 value:(NSString *)arg5;
- (void)removeNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3;
- (void)setNodeValueWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 value:(NSString *)arg4;
- (void)setNodeNameWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(int))arg2 nodeId:(int)arg3 name:(NSString *)arg4;
- (void)querySelectorAllWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 nodeId:(int)arg3 selector:(NSString *)arg4;
- (void)querySelectorWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(int))arg2 nodeId:(int)arg3 selector:(NSString *)arg4;
- (void)requestChildNodesWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 depth:(int )arg4;
- (void)getDocumentWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolDOMNode *))arg2;
@end

