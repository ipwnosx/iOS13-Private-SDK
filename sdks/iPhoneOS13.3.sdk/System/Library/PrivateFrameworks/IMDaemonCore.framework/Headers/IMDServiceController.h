//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface IMDServiceController : NSObject
{
    NSMutableDictionary *_services;
}

+ (id)sharedInstance;
- (id)serviceWithName:(id)arg1;
@property(readonly, nonatomic) NSArray *allServices;
- (void)registerSessionClassWithBundle:(id)arg1;
- (void)dealloc;
- (id)init;

@end
