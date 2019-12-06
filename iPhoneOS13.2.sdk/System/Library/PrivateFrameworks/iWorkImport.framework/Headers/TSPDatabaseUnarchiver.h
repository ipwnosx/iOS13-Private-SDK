//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPUnarchiver.h>

__attribute__((visibility("hidden")))
@interface TSPDatabaseUnarchiver : TSPUnarchiver
{
    NSUInteger _databaseVersion;
}

@property(readonly, nonatomic) NSUInteger preUFFVersion; // @synthesize preUFFVersion=_databaseVersion;
- (BOOL)canValidateReferences;
- (set_713dd2e1 )filterIdentifiers:(const set_713dd2e1 )arg1;
- (id)initWithMessageType:(unsigned int)arg1 message:(auto_ptr_4370f086)arg2 identifier:(long long)arg3 strongReferences:(auto_ptr_945ad503)arg4 databaseVersion:(NSUInteger)arg5 objectDelegate:(id)arg6 lazyReferenceDelegate:(id)arg7 delegate:(id)arg8;
- (id)initWithMessageType:(unsigned int)arg1 message:(auto_ptr_4370f086)arg2 identifier:(long long)arg3 strongReferences:(auto_ptr_945ad503)arg4 messageVersion:(NSUInteger)arg5 unknownContent:(id)arg6 objectDelegate:(id)arg7 lazyReferenceDelegate:(id)arg8 delegate:(id)arg9;

@end

