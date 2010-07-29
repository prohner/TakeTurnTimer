//
//  RootViewController.h
//  TakeTurnTimer
//
//  Created by Preston Rohner on 7/28/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//


#import <CoreData/CoreData.h>

@interface RootViewController : UITableViewController <NSFetchedResultsControllerDelegate> {

    NSFetchedResultsController *fetchedResultsController;
    NSManagedObjectContext *managedObjectContext;
}


@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

@end

