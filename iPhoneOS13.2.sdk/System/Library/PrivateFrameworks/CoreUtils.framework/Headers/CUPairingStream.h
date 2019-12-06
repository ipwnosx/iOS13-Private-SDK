//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CUPairingStream : NSObject
{
//    struct CryptoAEADPrivate _decryptAEAD;
    unsigned char _decryptNonce[12];
//    struct CryptoAEADPrivate _encryptAEAD;
    unsigned char _encryptNonce[12];
    NSUInteger _authTagLength;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) NSUInteger authTagLength; // @synthesize authTagLength=_authTagLength;
// - (void).cxx_destruct;
- (BOOL)decryptInputBytes:(const void *)arg1 inputLength:(NSUInteger)arg2 inputAADBytes:(const void *)arg3 inputAADLength:(NSUInteger)arg4 inputAuthTagPtr:(const void *)arg5 inputAuthTagLength:(NSUInteger)arg6 outputBytes:(void )arg7 error:(id )arg8;
- (BOOL)encryptInputBytes:(const void *)arg1 inputLength:(NSUInteger)arg2 inputAADBytes:(const void *)arg3 inputAADLength:(NSUInteger)arg4 outputBytes:(void )arg5 outputAuthTagBytes:(void )arg6 outputAuthTagLength:(NSUInteger)arg7 error:(id )arg8;
- (id)decryptData:(id)arg1 aadBytes:(const void *)arg2 aadLength:(NSUInteger)arg3 error:(id )arg4;
- (id)decryptData:(id)arg1 aadData:(id)arg2 error:(id )arg3;
- (id)encryptData:(id)arg1 aadBytes:(const void *)arg2 aadLength:(NSUInteger)arg3 error:(id )arg4;
- (id)encryptData:(id)arg1 aadData:(id)arg2 error:(id )arg3;
- (BOOL)prepareWithName:(id)arg1 isClient:(BOOL)arg2 pskData:(id)arg3 error:(id )arg4;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

