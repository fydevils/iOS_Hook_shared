//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SFNewNavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, UITableView;

@interface SFContactViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SFNewNavigationControllerDelegate>
{
    CDUnknownBlockType _popBlock;
    NSDictionary *_responseDict;
    UITableView *_tableView;
    NSMutableArray *_dataArr;
}

@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSDictionary *responseDict; // @synthesize responseDict=_responseDict;
@property(copy, nonatomic) CDUnknownBlockType popBlock; // @synthesize popBlock=_popBlock;
- (void).cxx_destruct;
- (void)navigationWillPop;
- (id)appRootViewController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initTabView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

