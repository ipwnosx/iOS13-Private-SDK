//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PVEvent : NSObject
{
    NSString *_name;
    id _details;
}

+ (id)eventWithName:(id)arg1 details:(id)arg2;
@property(readonly, nonatomic) id details; // @synthesize details=_details;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 details:(id)arg2;

@end

