//
//  SearchResultViewController.h
//  SportsContact
//
//  Created by bobo on 14/11/22.
//  Copyright (c) 2014年 CAF. All rights reserved.
//

#import "BaseTableViewController.h"
#import "UserInfoViewController.h"

@interface SearchResultViewController : BaseTableViewController

@property (nonatomic, assign) UserInfoViewType viewType;
@property (nonatomic, strong) Team *teamInfo;
@property (nonatomic, strong) NSArray *result;

@end
