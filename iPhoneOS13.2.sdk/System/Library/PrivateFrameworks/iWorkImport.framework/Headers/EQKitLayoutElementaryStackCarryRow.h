//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/EQKitLayoutElementaryStackDigitRow.h>

#import <iWorkImport/EQKitLayoutElementaryStackRow-Protocol.h>

__attribute__((visibility("hidden")))
@interface EQKitLayoutElementaryStackCarryRow : EQKitLayoutElementaryStackDigitRow <EQKitLayoutElementaryStackRow>
{
    vector_e38595b5 mCrossouts;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)populateMaxColumnWidths:(__wrap_iter_8fb6ff7c)arg1;
- (int)crossoutAtColumnIndex:(NSUInteger)arg1;
- (id)initWithChildren:(id)arg1 decimalPoint:(NSUInteger)arg2 position:(long long)arg3 followingSpace:(double)arg4 crossouts:(const vector_e38595b5 )arg5;

@end

