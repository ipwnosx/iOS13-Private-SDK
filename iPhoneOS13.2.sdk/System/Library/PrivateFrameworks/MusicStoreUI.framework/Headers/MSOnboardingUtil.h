//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSOnboardingUtil : NSObject
{
}

+ (id)viewControllerForMediaType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (BOOL)shouldShowOnboarding;
+ (void)presentIfNeededFromViewController:(id)arg1 mediaTypes:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)markAsShown;

@end

