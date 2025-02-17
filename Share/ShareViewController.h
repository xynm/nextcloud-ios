//
//  ShareViewController.h
//  Nextcloud iOS
//
//  Created by Marino Faggiana on 26/01/16.
//  Copyright (c) 2017 Marino Faggiana. All rights reserved.
//
//  Author Marino Faggiana <marino.faggiana@nextcloud.com>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <MBProgressHUD/MBProgressHUD.h>

#import "OCNetworking.h"
#import "CCBKPasscode.h"
#import "CCGlobal.h"
#import "CCGraphics.h"
#import "CCCellShareExt.h"
#import "NCSelectDestination.h"
#import "CCError.h"
#import "CCHud.h"

@interface ShareViewController : UIViewController <UITableViewDelegate, MBProgressHUDDelegate, BKPasscodeViewControllerDelegate, NCSelectDestinationDelegate>

@property (nonatomic, strong) NSString *activeAccount;
@property (nonatomic, strong) NSString *serverUrl;
@property (nonatomic, retain) NSMutableArray *filesName;

@property (nonatomic, weak) IBOutlet UITableView *shareTable;
@property (nonatomic, weak) IBOutlet UIBarButtonItem *destinyFolderButton;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *constraintTopTableView;
@property (nonatomic, weak) IBOutlet UIToolbar *toolBar;

// 
@property (nonatomic, strong) CCBKPasscode *viewControllerBKInit;
@property (nonatomic) NSUInteger failedAttempts;
@property (nonatomic, strong) NSDate *lockUntilDate;

//
@property (nonatomic, strong) CCHud *hud;

- (void)closeShareViewController;
- (void)reloadData:(NSArray *)files;

@end
