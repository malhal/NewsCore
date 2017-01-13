//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationCanceling-Protocol.h>
#import <NewsCore/FCOperationPrioritizing-Protocol.h>

@class NSString;

@interface FCAssetHandleDownloadRequest : NSObject <FCOperationCanceling, FCOperationPrioritizing>
{
    long long _networkPriority;
    CDUnknownBlockType _cancelHandler;
    CDUnknownBlockType _priorityHandler;
}

@property(copy, nonatomic) CDUnknownBlockType priorityHandler; // @synthesize priorityHandler=_priorityHandler;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(nonatomic) long long networkPriority; // @synthesize networkPriority=_networkPriority;
- (void).cxx_destruct;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

