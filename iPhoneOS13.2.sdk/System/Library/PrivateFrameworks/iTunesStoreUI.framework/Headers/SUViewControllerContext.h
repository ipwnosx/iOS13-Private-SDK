//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary, NSString;

@interface SUViewControllerContext : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_metadata;
    NSString *_sectionIdentifier;
    long long _type;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
- (id)_typeStringForType:(long long)arg1;
- (long long)_typeForTypeString:(id)arg1;
- (id)valueForMetadataKey:(id)arg1;
- (void)setValue:(id)arg1 forMetadataKey:(id)arg2;
- (id)description;
- (id)copyViewController;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

