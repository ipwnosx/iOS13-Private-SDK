//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface KNSlideNodeSlideSpecificTableCounter : NSObject
{
    NSUUID *_tableInfoUUID;
    NSUInteger _linkCount;
}

@property(readonly, nonatomic) NSUInteger linkCount; // @synthesize linkCount=_linkCount;
@property(retain, nonatomic) NSUUID *tableInfoUUID; // @synthesize tableInfoUUID=_tableInfoUUID;
// - (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *stringValue;
- (void)decrement;
- (void)increment;
- (id)initWithTableInfoUUID:(id)arg1 andLinkCount:(NSUInteger)arg2;

@end

