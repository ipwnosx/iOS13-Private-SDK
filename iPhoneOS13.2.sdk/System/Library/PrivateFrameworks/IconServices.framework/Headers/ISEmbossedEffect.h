//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISEffect-Protocol.h>

__attribute__((visibility("hidden")))
@interface ISEmbossedEffect : NSObject <ISEffect>
{
    double _range;
    CGSize _offset;
}

@property double range; // @synthesize range=_range;
@property CGSize offset; // @synthesize offset=_offset;
- (id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2;

@end

