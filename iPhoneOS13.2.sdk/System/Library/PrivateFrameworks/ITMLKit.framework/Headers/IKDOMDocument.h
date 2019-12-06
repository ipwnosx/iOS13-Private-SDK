//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKDOMNode.h>

#import <ITMLKit/IKJSDOMDocument-Protocol.h>
#import <ITMLKit/IKJSDOMXPathEvaluator-Protocol.h>
#import <ITMLKit/_IKJSDOMDocument-Protocol.h>
#import <ITMLKit/_IKJSDOMDocumentProxy-Protocol.h>

@class IKDOMElement, IKDOMImplementation, IKJSNavigationDocument, NSString;
@protocol IKJSDOMDocumentAppBridge, IKNetworkRequestLoader;

@interface IKDOMDocument : IKDOMNode <NSObject, IKJSDOMDocument, _IKJSDOMDocumentProxy, _IKJSDOMDocument, IKJSDOMXPathEvaluator>
{
    struct {
        BOOL hasSetNeedsUpdate;
        BOOL hasSnapshotImpressions;
        BOOL hasRecordedImpressions;
        BOOL hasRecordedImpressionsCallback;
        BOOL hasRecordedImpressionsMatchingCallback;
        BOOL hasImpressionsMatchingTag;
        BOOL hasScrollToTop;
        BOOL hasRunTest;
    } _appBridgeFlags;
    BOOL _embeddedScriptExecuted;
    id <IKNetworkRequestLoader> __requestLoader;
    id <IKJSDOMDocumentAppBridge> _appBridge;
    NSUInteger _itmlIDSequence;
    NSString *__documentURI;
}

// + (struct _xmlDoc )_documentWithXMLStr:(id)arg1 lsInput:(id)arg2 error:(id )arg3;
+ (void)_resetUpdatesForNode:(id)arg1;
@property(retain, nonatomic, setter=_setDocumentURI:) NSString *_documentURI; // @synthesize _documentURI=__documentURI;
@property(nonatomic) NSUInteger itmlIDSequence; // @synthesize itmlIDSequence=_itmlIDSequence;
@property(nonatomic, getter=isEmbeddedScriptExecuted) BOOL embeddedScriptExecuted; // @synthesize embeddedScriptExecuted=_embeddedScriptExecuted;
@property(nonatomic) __weak id <IKJSDOMDocumentAppBridge> appBridge; // @synthesize appBridge=_appBridge;
// - (void).cxx_destruct;
- (void)_executeEmbeddedScriptWithExtraInfo:(id)arg1;
// - (void)_updateITMLIDRecursivelyForNodePtr:(struct _xmlNode )arg1;
- (void)swapITMLIDForNode:(id)arg1 withITMLIDForNode:(id)arg2;
- (void)setITMLIDForNode:(id)arg1;
@property(readonly, nonatomic) id <IKNetworkRequestLoader> _requestLoader; // @synthesize _requestLoader=__requestLoader;
- (long long)nodeType;
- (id)nodeName;
- (void)recordedImpressionsMatching:(id)arg1:(id)arg2:(id)arg3;
- (void)recordedImpressions:(id)arg1:(id)arg2;
- (id)matchingImpressions:(id)arg1:(id)arg2;
- (id)recordedImpressions:(id)arg1;
- (id)snapshotImpressions;
- (void)scrollToTop;
- (void)runTest:(id)arg1:(id)arg2;
@property(nonatomic) __weak IKJSNavigationDocument *navigationDocument;
- (void)replace:(id)arg1;
- (void)setNeedsUpdate;
- (id)evaluate:(id)arg1:(id)arg2:(id)arg3:(long long)arg4:(id)arg5;
- (id)createExpression:(id)arg1:(id)arg2;
- (id)adoptNode:(id)arg1;
- (id)getElementById:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (id)createCDATASection:(id)arg1;
- (id)createComment:(id)arg1;
- (id)createTextNode:(id)arg1;
- (id)createDocumentFragment;
- (id)createElement:(id)arg1;
@property(retain, nonatomic) NSString *documentURI;
@property(nonatomic) BOOL strictErrorChecking;
@property(retain, nonatomic) NSString *xmlVersion;
@property(nonatomic) BOOL xmlStandalone;
@property(readonly, retain, nonatomic) NSString *xmlEncoding;
@property(readonly, retain, nonatomic) NSString *inputEncoding;
@property(readonly, retain, nonatomic) IKDOMElement *documentElement;
@property(readonly, nonatomic) __weak IKDOMImplementation *implementation;
- (BOOL)markUpdated;
- (void)prepareForPresentationWithExtraInfo:(id)arg1;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 qualifiedName:(id)arg2;
- (id)initWithAppContext:(id)arg1 input:(id)arg2 error:(id )arg3;
- (id)initWithAppContext:(id)arg1 xmlStr:(id)arg2 error:(id )arg3;
- (id)initWithAppContext:(id)arg1;
- (id)asPrivateIKJSDOMDocument;

@end

