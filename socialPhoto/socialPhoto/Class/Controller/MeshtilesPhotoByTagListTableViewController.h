//
//  MeshtilesPhotoByTagListTableViewController.h
//  ImageGridTableView
//
//  Created by Dung Nguyen on 7/7/12.
//  Copyright (c) 2012 dungnguyen photography. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "RefreshableTableView.h"

#define MaxPageAllowed    10

@interface MeshtilesPhotoByTagListTableViewController : UIViewController

@property (strong, nonatomic) NSArray               *photos;            // of MeshtilesPhoto
@property (strong, nonatomic) NSArray               *photosDetails ;    // of MeshtilesPhotoDetail
@property (assign, nonatomic) NSUInteger            currentPage;        // count start from 1

@property (strong, nonatomic) RefreshableTableView  *tableView;

- (void)doneRefreshAndLoad;

@end
