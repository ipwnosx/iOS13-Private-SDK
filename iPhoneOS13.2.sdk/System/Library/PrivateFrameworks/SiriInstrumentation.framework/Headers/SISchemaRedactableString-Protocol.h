//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSNumber, NSString, PBCodable;

@protocol SISchemaRedactableString <NSObject>
+ (NSNumber *)getTagForStringClass:(Class)arg1;
+ (Class)getStringClassForTag:(int)arg1;
@property(readonly, nonatomic) NSUInteger which_String;
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *value;
@property(nonatomic) int redactionState;
- (void)setString:(PBCodable *)arg1;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

