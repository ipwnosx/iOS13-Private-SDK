//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface EFSQLPropertyMapper : NSObject
{
    NSMutableDictionary *_lookupValues;
}

+ (id)emptyPropertyMapper;
@property(retain, nonatomic) NSMutableDictionary *lookupValues; // @synthesize lookupValues=_lookupValues;
// - (void).cxx_destruct;
- (id)_findAllProtocolsOfClass:(Class)arg1 withProperty:(SEL)arg2;
- (id)merge:(id)arg1;
- (id)valueForLookupKey:(id)arg1 protocol:(id)arg2 property:(SEL)arg3;
- (id)valueForLookupKey:(id)arg1 class:(Class)arg2 property:(SEL)arg3;
- (BOOL)hasLookupKey:(id)arg1 class:(Class)arg2 property:(SEL)arg3;
- (id)_qualifiedColumnExpressionForColumn:(id)arg1 availableTables:(id)arg2;
- (id)qualifiedColumnExpressionForClass:(Class)arg1 property:(SEL)arg2 availableTables:(id)arg3;
- (id)qualifiedColumnExpressionForLookupKey:(id)arg1 value:(id)arg2 availableTables:(id)arg3;
- (id)columnNameForLookupKey:(id)arg1 value:(id)arg2;
- (id)columnNameForProtocol:(id)arg1 property:(SEL)arg2;
- (id)columnNameForClass:(Class)arg1 property:(SEL)arg2;
- (void)registerColumnName:(id)arg1 table:(id)arg2 lookupKeys:(id)arg3;
- (void)registerColumnName:(id)arg1 table:(id)arg2 lookupKeys:(id)arg3 forClass:(Class)arg4 property:(SEL)arg5;
- (id)columnForLookupKey:(id)arg1 value:(id)arg2;
- (id)columnForProtocol:(id)arg1 property:(SEL)arg2;
- (id)columnForClass:(Class)arg1 property:(SEL)arg2;
- (void)registerColumn:(id)arg1 forProtocol:(id)arg2 property:(SEL)arg3 lookupKeys:(id)arg4;
- (void)registerColumn:(id)arg1 forClass:(Class)arg2 property:(SEL)arg3 lookupKeys:(id)arg4;
- (id)init;

@end

