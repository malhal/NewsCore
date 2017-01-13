//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCPersonalizationData, FCPrivateChannelMembershipController, FCReadingHistory, FCReadingList, FCSubscriptionList, FCUserInfo, NSString;

@interface FCPrivateDataStorage : NSObject
{
    FCSubscriptionList *_subscriptionList;
    FCReadingHistory *_readingHistory;
    FCReadingList *_readingList;
    FCPrivateChannelMembershipController *_privateChannelMembershipController;
    FCUserInfo *_userInfo;
    FCPersonalizationData *_personalizationData;
    NSString *_rootDirectory;
}

@property(copy, nonatomic) NSString *rootDirectory; // @synthesize rootDirectory=_rootDirectory;
@property(readonly, nonatomic) FCPersonalizationData *personalizationData; // @synthesize personalizationData=_personalizationData;
@property(readonly, nonatomic) FCUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController; // @synthesize privateChannelMembershipController=_privateChannelMembershipController;
@property(readonly, nonatomic) FCReadingList *readingList; // @synthesize readingList=_readingList;
@property(readonly, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
@property(readonly, nonatomic) FCSubscriptionList *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
- (void).cxx_destruct;
- (id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)initWithContext:(id)arg1 privateDataActionProvider:(id)arg2 rootDirectory:(id)arg3;
- (id)init;

@end
