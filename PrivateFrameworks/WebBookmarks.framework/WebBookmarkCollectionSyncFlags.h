/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkCollectionSyncFlags : NSObject {
    NSMutableSet * _lockSyncHoldRequestorPointers;
    BOOL  _postDAVSyncNotificationWhenUnlocking;
    BOOL  _syncAllowed;
    int  _syncLockFileDescriptor;
    BOOL  _unlockSyncRequested;
}

@property (nonatomic, readonly) NSMutableSet *lockSyncHoldRequestorPointers;
@property (nonatomic) BOOL postDAVSyncNotificationWhenUnlocking;
@property (nonatomic, readonly) BOOL syncAllowed;
@property (nonatomic) int syncLockFileDescriptor;
@property (nonatomic) BOOL unlockSyncRequested;

- (void).cxx_destruct;
- (id)initWithSyncAllowed:(BOOL)arg1;
- (id)lockSyncHoldRequestorPointers;
- (BOOL)postDAVSyncNotificationWhenUnlocking;
- (void)setPostDAVSyncNotificationWhenUnlocking:(BOOL)arg1;
- (void)setSyncLockFileDescriptor:(int)arg1;
- (void)setUnlockSyncRequested:(BOOL)arg1;
- (BOOL)syncAllowed;
- (int)syncLockFileDescriptor;
- (BOOL)unlockSyncRequested;

@end
