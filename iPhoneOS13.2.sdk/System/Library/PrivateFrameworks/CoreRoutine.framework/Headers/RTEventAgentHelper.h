//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RTEventAgentHelper : NSObject
{
    NSString *_restorationIdentifier;
}

+ (id)signingIdentifierFromSelf;
+ (BOOL)launchdManaged;
@property(retain, nonatomic) NSString *restorationIdentifier; // @synthesize restorationIdentifier=_restorationIdentifier;
// - (void).cxx_destruct;
- (id)initWithRestorationIdentifier:(id)arg1;

@end

