//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Espresso/ETOptimizerDef.h>

@interface ETOptimizerDefSGD : ETOptimizerDef
{
    float _lr;
    float _lr_decay_epoch;
    float _momentum;
    float _weight_decay;
}

@property float weight_decay; // @synthesize weight_decay=_weight_decay;
@property float momentum; // @synthesize momentum=_momentum;
@property float lr_decay_epoch; // @synthesize lr_decay_epoch=_lr_decay_epoch;
@property float lr; // @synthesize lr=_lr;
- (id)init;

@end

