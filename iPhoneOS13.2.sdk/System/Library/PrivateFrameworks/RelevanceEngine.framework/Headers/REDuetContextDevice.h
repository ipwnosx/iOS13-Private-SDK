//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface REDuetContextDevice : NSObject
{
    NSUUID *_identifier;
    NSUInteger _deviceType;
}

+ (id)companionDevice;
+ (id)localDevice;
@property(readonly, nonatomic) NSUInteger deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithUUID:(id)arg1 type:(NSUInteger)arg2;

@end

