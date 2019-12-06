//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface PASNeuralNetwork : NSObject
{
    NSData *_data;
    const char _dataBytes;
    NSUInteger _nlayers;
   const struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned char _field5;
        unsigned char _field6;
        unsigned char _field7;
        unsigned char _field8;
    } _layers;
}

// - (void).cxx_destruct;
- (void)forInputs:(const float )arg1 computeOutputLayer:(float )arg2;
- (double)_predict:(float )arg1 freeInputsAfterUse:(BOOL)arg2;
- (float )_runOnInputs:(float )arg1 freeInputsAfterUse:(BOOL)arg2;
- (double)predict32:(const float )arg1;
- (double)predict:(const double )arg1;
@property(readonly, nonatomic) NSUInteger outputSize;
@property(readonly, nonatomic) NSUInteger inputSize;
- (id)init;
- (id)initWithData:(id)arg1;

@end

