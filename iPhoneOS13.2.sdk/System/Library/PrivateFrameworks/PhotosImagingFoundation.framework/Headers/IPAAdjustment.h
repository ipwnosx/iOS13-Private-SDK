//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class IPAAdjustmentVersion, NSDictionary, NSString;

@interface IPAAdjustment : NSObject <NSCopying>
{
    NSString *_identifier;
    IPAAdjustmentVersion *_version;
    NSDictionary *_settings;
}

@property(retain, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) IPAAdjustmentVersion *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)_debugDescriptionSuffix;
- (id)debugDescription;
- (id)description;
- (BOOL)isEqualToAdjustment:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

