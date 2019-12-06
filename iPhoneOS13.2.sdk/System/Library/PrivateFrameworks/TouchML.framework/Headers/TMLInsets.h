//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/TMLInsetsJSExports-Protocol.h>

@interface TMLInsets : NSObject <TMLInsetsJSExports, NSCopying>
{
    UIEdgeInsets _insets;
}

+ (void)initializeJSContext:(id)arg1;
- (id)description;
@property(readonly, nonatomic) double right;
@property(readonly, nonatomic) double bottom;
@property(readonly, nonatomic) double left;
@property(readonly, nonatomic) double top;
- (UIEdgeInsets)UIEdgeInsets;
- (id)UIEdgeInsetsValue;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithInsets:(UIEdgeInsets)arg1;

@end

