//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface OADBevel : NSObject <NSCopying>
{
    int mType;
    float mWidth;
    float mHeight;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)setHeight:(float)arg1;
- (float)height;
- (void)setWidth:(float)arg1;
- (float)width;
- (void)setType:(int)arg1;
- (int)type;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

