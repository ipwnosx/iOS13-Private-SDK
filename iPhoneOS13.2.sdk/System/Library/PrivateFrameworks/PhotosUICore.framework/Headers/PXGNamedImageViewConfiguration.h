//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface PXGNamedImageViewConfiguration : NSObject <NSCopying>
{
    NSString *_imageName;
    long long _contentMode;
}

@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

