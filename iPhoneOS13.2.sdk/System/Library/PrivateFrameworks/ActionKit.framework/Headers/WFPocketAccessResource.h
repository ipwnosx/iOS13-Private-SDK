//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

#import <ActionKit/PocketAPIDelegate-Protocol.h>

@class PocketAPI;

@interface WFPocketAccessResource : WFAccessResource <PocketAPIDelegate>
{
    PocketAPI *_pocket;
    id /* CDUnknownBlockType */ _loginHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ loginHandler; // @synthesize loginHandler=_loginHandler;
@property(retain, nonatomic) PocketAPI *pocket; // @synthesize pocket=_pocket;
// - (void).cxx_destruct;
- (void)logOut;
- (BOOL)canLogOut;
- (id)username;
- (id)resourceName;
- (void)pocketAPI:(id)arg1 requestedOpenURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pocketAPI:(id)arg1 hadLoginError:(id)arg2;
- (void)pocketAPILoggedIn:(id)arg1;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (NSUInteger)globalLevelStatus;
- (id)pocketCallbackScheme;
- (id)protectedResourceDescription;
- (id)associatedAppIdentifier;

@end

