//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class AKAppleIDAuthenticationInAppContext, NSString, UIViewController;

@interface SUScriptAppleIdAuthenticationOperation : ISOperation
{
    AKAppleIDAuthenticationInAppContext *_authenticationContext;
    UIViewController *_viewController;
    NSString *_status;
}

@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
// - (void).cxx_destruct;
- (void)sendCompletionCallback:(id)arg1;
- (void)run;
- (id)initWithUsername:(id)arg1 password:(id)arg2 viewController:(id)arg3;

@end

