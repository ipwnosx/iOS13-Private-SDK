//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface PLMigrationServiceOptions : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _taskToInterrupt;
    unsigned short _option;
    NSString *_clientBundleId;
    NSString *_suggestedDestinationName;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned char taskToInterrupt; // @synthesize taskToInterrupt=_taskToInterrupt;
@property unsigned short option; // @synthesize option=_option;
@property(copy) NSString *suggestedDestinationName; // @synthesize suggestedDestinationName=_suggestedDestinationName;
@property(readonly) NSString *clientBundleId; // @synthesize clientBundleId=_clientBundleId;
// - (void).cxx_destruct;
- (BOOL)isPMSOption:(unsigned short)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

