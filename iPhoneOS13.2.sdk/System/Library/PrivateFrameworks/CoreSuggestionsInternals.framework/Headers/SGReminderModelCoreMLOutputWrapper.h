//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SGReminderModelCoreMLOutputWrapper : NSObject <MLFeatureProvider>
{
    MLMultiArray *_polarity;
    MLMultiArray *_trigger;
    MLMultiArray *_title;
    MLMultiArray *_bi_lstm_0_h_out;
    MLMultiArray *_bi_lstm_0_c_out;
    MLMultiArray *_bi_lstm_0_h_out_rev;
    MLMultiArray *_bi_lstm_0_c_out_rev;
    MLMultiArray *_bi_lstm_1_h_out;
    MLMultiArray *_bi_lstm_1_c_out;
    MLMultiArray *_bi_lstm_1_h_out_rev;
    MLMultiArray *_bi_lstm_1_c_out_rev;
}

@property(retain, nonatomic) MLMultiArray *bi_lstm_1_c_out_rev; // @synthesize bi_lstm_1_c_out_rev=_bi_lstm_1_c_out_rev;
@property(retain, nonatomic) MLMultiArray *bi_lstm_1_h_out_rev; // @synthesize bi_lstm_1_h_out_rev=_bi_lstm_1_h_out_rev;
@property(retain, nonatomic) MLMultiArray *bi_lstm_1_c_out; // @synthesize bi_lstm_1_c_out=_bi_lstm_1_c_out;
@property(retain, nonatomic) MLMultiArray *bi_lstm_1_h_out; // @synthesize bi_lstm_1_h_out=_bi_lstm_1_h_out;
@property(retain, nonatomic) MLMultiArray *bi_lstm_0_c_out_rev; // @synthesize bi_lstm_0_c_out_rev=_bi_lstm_0_c_out_rev;
@property(retain, nonatomic) MLMultiArray *bi_lstm_0_h_out_rev; // @synthesize bi_lstm_0_h_out_rev=_bi_lstm_0_h_out_rev;
@property(retain, nonatomic) MLMultiArray *bi_lstm_0_c_out; // @synthesize bi_lstm_0_c_out=_bi_lstm_0_c_out;
@property(retain, nonatomic) MLMultiArray *bi_lstm_0_h_out; // @synthesize bi_lstm_0_h_out=_bi_lstm_0_h_out;
@property(retain, nonatomic) MLMultiArray *title; // @synthesize title=_title;
@property(retain, nonatomic) MLMultiArray *trigger; // @synthesize trigger=_trigger;
@property(retain, nonatomic) MLMultiArray *polarity; // @synthesize polarity=_polarity;
// - (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithPolarity:(id)arg1 trigger:(id)arg2 title:(id)arg3 bi_lstm_0_h_out:(id)arg4 bi_lstm_0_c_out:(id)arg5 bi_lstm_0_h_out_rev:(id)arg6 bi_lstm_0_c_out_rev:(id)arg7 bi_lstm_1_h_out:(id)arg8 bi_lstm_1_c_out:(id)arg9 bi_lstm_1_h_out_rev:(id)arg10 bi_lstm_1_c_out_rev:(id)arg11;

@end

