//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary;

@interface CalItemMetadata : NSObject <NSSecureCoding>
{
    NSDictionary *_x_props;
    int _classification;
}

+ (BOOL)supportsSecureCoding;
+ (id)metadataWithData:(id)arg1;
+ (id)metadataWithICSComponent:(id)arg1;
+ (id)_whitelistedClassesForSecureCoding;
@property int classification; // @synthesize classification=_classification;
@property(retain) NSDictionary *x_props; // @synthesize x_props=_x_props;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dataRepresentationWithExistingMetaData:(id)arg1;
- (void)applyToComponent:(id)arg1;
- (id)init;
- (id)initWithICSComponent:(id)arg1;

@end

