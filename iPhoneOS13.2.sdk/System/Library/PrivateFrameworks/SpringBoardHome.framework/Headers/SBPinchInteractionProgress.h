//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class UIPinchGestureRecognizer;

@interface SBPinchInteractionProgress : UIInteractionProgress <UIGestureRecognizerDelegate>
{
//     CDStruct_3e878e9e _pinchInterval;
    UIPinchGestureRecognizer *_pinchGesture;
}

@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
// - (void).cxx_destruct;
- (void)_updatePinchScale:(double)arg1;
- (void)_handlePinchGesture:(id)arg1;
@property(readonly, nonatomic) double minPinchScale;
- (id)initWithPinchGesture:(id)arg1 minPinchScale:(double)arg2;

@end

