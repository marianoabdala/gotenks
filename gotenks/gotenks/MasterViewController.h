//
//  MasterViewController.h
//  gotenks
//
//  Created by Mariano Abdala on 2/8/15.
//  Copyright (c) 2015 Mariano Abdala. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *fetchManagedObjectContext;
@property (strong, nonatomic) NSManagedObjectContext *saveManagedObjectContext;


@end

