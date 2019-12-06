//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICScheme, NSDictionary, NSString, NSURL, NSUUID;
@protocol WFUserInterface;

@interface _ICURLRequest : NSObject
{
    BOOL _callbackRequest;
    BOOL _deferCompletionUntilReturn;
    BOOL _internalCallbackRequest;
    NSString *_action;
    NSString *_subAction;
    NSUUID *_uniqueID;
    NSURL *_URL;
    ICScheme *_scheme;
    NSString *_bundleIdentifier;
    id <WFUserInterface> _userInterface;
    id /* CDUnknownBlockType */ _successHandler;
    id /* CDUnknownBlockType */ _failureHandler;
    NSDictionary *_parameters;
    NSString *_successURLQueryString;
    NSString *_sourceName;
    NSURL *_generatedCallbackURL;
    long long _retries;
}

+ (id)requestWithURL:(id)arg1 scheme:(id)arg2 userInterface:(id)arg3 bundleIdentifier:(id)arg4 successHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6;
+ (id)requestWithURL:(id)arg1 fromSourceApplication:(id)arg2;
+ (id)requestWithURL:(id)arg1;
@property(nonatomic, getter=isInternalCallbackRequest) BOOL internalCallbackRequest; // @synthesize internalCallbackRequest=_internalCallbackRequest;
@property(nonatomic) long long retries; // @synthesize retries=_retries;
@property(copy, nonatomic) NSURL *generatedCallbackURL; // @synthesize generatedCallbackURL=_generatedCallbackURL;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) NSString *successURLQueryString; // @synthesize successURLQueryString=_successURLQueryString;
@property(nonatomic) BOOL deferCompletionUntilReturn; // @synthesize deferCompletionUntilReturn=_deferCompletionUntilReturn;
@property(nonatomic, getter=isCallbackRequest) BOOL callbackRequest; // @synthesize callbackRequest=_callbackRequest;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) id /* CDUnknownBlockType */ failureHandler; // @synthesize failureHandler=_failureHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ successHandler; // @synthesize successHandler=_successHandler;
@property(readonly, nonatomic) __weak id <WFUserInterface> userInterface; // @synthesize userInterface=_userInterface;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) ICScheme *scheme; // @synthesize scheme=_scheme;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
// - (void).cxx_destruct;
- (id)description;
- (void)parseActions;
@property(readonly, nonatomic) NSString *subAction; // @synthesize subAction=_subAction;
@property(readonly, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ opener;
- (id)initWithURL:(id)arg1 scheme:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5 bundleIdentifier:(id)arg6;

@end

