//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFOutOfProcessWorkflowControllerHost-Protocol.h>

@class NSData, NSExtension, NSString, NSUUID, WFContentCollection, WFWorkflowReference;
@protocol OS_dispatch_queue, OS_dispatch_source, WFOutOfProcessWorkflowControllerDelegate;

@interface WFOutOfProcessWorkflowController : NSObject <WFOutOfProcessWorkflowControllerHost>
{
    WFContentCollection *_input;
    WFContentCollection *_output;
    id <WFOutOfProcessWorkflowControllerDelegate> _delegate;
    NSString *_debugIdentifier;
    NSData *_workflowData;
    long long _environment;
    double _timeoutSeconds;
    WFWorkflowReference *_workflowReference;
    NSExtension *_extension;
    NSUUID *_extensionRequestIdentifier;
    NSObject<OS_dispatch_queue> *_internalSerialQueue;
    NSObject<OS_dispatch_source> *_extensionMaxRunTimeTimer;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *extensionMaxRunTimeTimer; // @synthesize extensionMaxRunTimeTimer=_extensionMaxRunTimeTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalSerialQueue; // @synthesize internalSerialQueue=_internalSerialQueue;
@property(retain, nonatomic) NSUUID *extensionRequestIdentifier; // @synthesize extensionRequestIdentifier=_extensionRequestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) WFWorkflowReference *workflowReference; // @synthesize workflowReference=_workflowReference;
@property(readonly, nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property(readonly, nonatomic) long long environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) NSData *workflowData; // @synthesize workflowData=_workflowData;
@property(readonly, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
@property(nonatomic) __weak id <WFOutOfProcessWorkflowControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WFContentCollection *output; // @synthesize output=_output;
@property(retain, nonatomic) WFContentCollection *input; // @synthesize input=_input;
// - (void).cxx_destruct;
- (void)workflowDidFinishRunningWithError:(id)arg1 cancelled:(BOOL)arg2;
- (void)workflowDidStart;
- (void)reportFinishToDelegateWithError:(id)arg1 cancelled:(BOOL)arg2;
- (void)restartTimeoutTimer;
- (void)cancelTimeoutTimer;
- (void)stopExtension;
- (void)handleXPCConnectionInterruption;
- (void)handleExtensionMaxRunTimeExceeded;
- (id)extensionInterface;
- (id)extensionContext;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
- (void)stop;
- (BOOL)runWithInput:(id)arg1 error:(out id )arg2;
- (void)dealloc;
- (id)initWithWorkflowData:(id)arg1 debugIdentifier:(id)arg2 environment:(long long)arg3 workflowReference:(id)arg4;
- (id)initWithWorkflowData:(id)arg1 debugIdentifier:(id)arg2 environment:(long long)arg3;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 environment:(long long)arg3;

@end

