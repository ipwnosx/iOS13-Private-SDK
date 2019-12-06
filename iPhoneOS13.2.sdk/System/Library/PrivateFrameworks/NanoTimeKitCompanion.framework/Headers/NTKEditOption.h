//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CLKDevice, NSString;

@interface NTKEditOption : NSObject <NSSecureCoding>
{
    CLKDevice *_device;
}

+ (BOOL)supportsSecureCoding;
+ (id)optionsDescription;
+ (CGSize)sizeForSwatchStyle:(long long)arg1;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
// - (void).cxx_destruct;
- (BOOL)optionExistsInDevice:(id)arg1;
- (BOOL)isValidOption;
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;
- (id)JSONObjectRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *localizedNameForAction;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) NSString *dailySnapshotKey;
- (id)initWithDevice:(id)arg1;
@property(readonly, nonatomic) long long swatchStyle;

@end

