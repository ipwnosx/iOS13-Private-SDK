//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSData (Gzip)
+ (id)ic_random128BitData:(id )arg1;
+ (id)ic_randomDataOfLength:(NSUInteger)arg1 error:(id )arg2;
+ (id)ic_keyWithUserPassphrase:(id)arg1 salt:(id)arg2 iterationCount:(unsigned int)arg3 error:(id )arg4;
- (id)TT_gzipDeflate;
- (id)TT_gzipInflate;
- (BOOL)checkDataIntegrityWithTagData:(id)arg1 inputTag:(id)arg2 error:(id )arg3;
- (id)ic_unwrapWithKey:(id)arg1 error:(id )arg2;
- (id)ic_wrapWithKey:(id)arg1 error:(id )arg2;
- (id)ic_decryptedDataWithKey:(id)arg1 tag:(id)arg2 initialVector:(id)arg3 error:(id )arg4;
- (id)ic_encryptedDataWithKey:(id)arg1 tag:(id )arg2 initialVector:(id )arg3 error:(id )arg4;
@end

