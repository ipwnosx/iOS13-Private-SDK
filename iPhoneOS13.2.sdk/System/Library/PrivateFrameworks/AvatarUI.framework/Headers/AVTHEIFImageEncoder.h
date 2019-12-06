//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTImageEncoder-Protocol.h>

@interface AVTHEIFImageEncoder : NSObject <AVTImageEncoder>
{
    BOOL _useHEICSSequence;
}

+ (id)defaultHEICEncoder;
+ (id)HEICSSequenceEncoder;
@property(readonly, nonatomic) BOOL useHEICSSequence; // @synthesize useHEICSSequence=_useHEICSSequence;
- (id)fileExtension;
- (id)dataFromImage:(id)arg1;
- (id)imageFromData:(id)arg1 error:(id )arg2;
- (id)imageFromURL:(id)arg1 error:(id )arg2;
- (id)initUsingHeicsSequence:(BOOL)arg1;

@end

