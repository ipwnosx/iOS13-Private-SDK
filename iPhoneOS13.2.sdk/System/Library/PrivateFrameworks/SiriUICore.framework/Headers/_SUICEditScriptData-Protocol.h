//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString;
@protocol _SUICEditScriptData;

@protocol _SUICEditScriptData <NSObject>
+ (id <_SUICEditScriptData>)EditScriptDataWithArray:(NSArray *)arg1;
+ (id <_SUICEditScriptData>)EditScriptDataWithString:(NSString *)arg1 chunkSize:(long long)arg2;
- (long long)indexOfFirstDifferenceWithOtherData:(id <_SUICEditScriptData>)arg1 shouldReverseIterate:(BOOL)arg2 fallsOnWordBoundary:(BOOL )arg3;
- (long long)characterIndexForItem:(long long)arg1;
- (long long)lengthOfItem:(long long)arg1;
- (NSString *)stringValue;
- (NSString *)stringAtIndex:(long long)arg1;
- (long long)length;
@end

