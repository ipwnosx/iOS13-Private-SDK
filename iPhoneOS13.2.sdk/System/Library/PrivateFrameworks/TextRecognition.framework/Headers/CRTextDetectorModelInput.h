//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextRecognition/MLFeatureProvider-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface CRTextDetectorModelInput : NSObject <MLFeatureProvider>
{
//    struct __CVBuffer _data;
}

// property(nonatomic) struct __CVBuffer data; // @synthesize data=_data;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
//  (id)initWithData:(struct __CVBuffer )arg1;

@end

