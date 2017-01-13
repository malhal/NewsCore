//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAsyncSerialQueue, NSData, NSNumber, NSURL;

@interface FCMescalSession : NSObject
{
    FCAsyncSerialQueue *_signatureQueue;
    NSNumber *_sapVersion;
    NSURL *_setupURL;
    NSData *_certificateData;
}

+ (id)sharedSession;
- (void).cxx_destruct;
- (void)_continueMescalSetupWithVersion:(unsigned int)arg1 hardwareInfo:(struct FairPlayHWInfo_)arg2 session:(struct FPSAPContextOpaque_ *)arg3 data:(id)arg4 setupURL:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_setupNewSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_satisfySessionPrerequisitesIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_prerequisitesHaveBeenSatisfied;
- (void)signData:(id)arg1 usingMescalWithCompletion:(CDUnknownBlockType)arg2;
- (id)init;

@end
