/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol MVMailboxSelectionOwner <NSObject>
- (id)mailboxSelectionWindow;
- (void)revealMailbox:(id)arg1;
- (BOOL)sectionIsExpanded:(id)arg1;
- (BOOL)mailboxIsExpanded:(id)arg1;
- (void)selectPathsToMailboxes:(id)arg1;
- (BOOL)isSelectedMailboxSpecial;
- (id)sortedSectionItemsForTimeMachine;
- (id)selectedMailbox;
- (id)selectedMailboxes;

@optional
- (void)didCloseContextMenu:(id)arg1;
- (void)willShowContextMenu:(id)arg1;
- (id)expandedItems;
@end

