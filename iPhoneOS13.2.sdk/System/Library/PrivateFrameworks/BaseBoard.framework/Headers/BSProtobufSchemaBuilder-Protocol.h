//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;

@protocol BSProtobufSchemaBuilder <NSObject>
- (void)addRepeatingField:(const char )arg1 containsClass:(Class)arg2 forTag:(long long)arg3;
- (void)addField:(const char )arg1 forTag:(long long)arg2;
- (void)addRepeatingField:(const char )arg1 containsClasses:(NSArray *)arg2;
- (void)addRepeatingField:(const char )arg1 containsClass:(Class)arg2;
- (void)addField:(const char )arg1 allowedClasses:(NSArray *)arg2;
- (void)addField:(const char )arg1;
@end

