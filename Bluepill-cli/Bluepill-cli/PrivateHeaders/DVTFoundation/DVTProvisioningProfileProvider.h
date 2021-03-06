//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

@class NSSet;

@interface DVTProvisioningProfileProvider : NSObject
{
}

+ (id)providerWithProvisioningProfileSearchPaths:(id)arg1;
+ (id)sharedProvider;
- (id)profileWithUUID:(id)arg1;
- (void)uninstallHostProfiles:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)installHostProfiles:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)profileWithData:(id)arg1 error:(id *)arg2;
- (id)profileWithURL:(id)arg1 error:(id *)arg2;
- (BOOL)isProfileExpiringWithCodeSigningIdentity:(id)arg1 profileName:(id *)arg2;
- (id)expiringProfilesInExpansionContext:(id)arg1;
@property(readonly) NSSet *expiringProfiles;
- (id)allProfiles_sync;
@property(readonly) NSSet *allProfiles;
@property(readonly) BOOL areProfilesLoaded;
- (void)forceProfileLoading;

@end

